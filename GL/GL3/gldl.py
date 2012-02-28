#!/usr/bin/env python
import re
import string

# Open GL3 header
gl3_src = open( "gl3.h", "r" )

# Get all GL constants
constants = []      # Regular 4 hex digit constants
buffer_bits = []    # Attrib Masks constants
context_bits = []   # Context Profile constants
shader_bits = []    # Separate Shader Objects constants
barrier_bits = []   # Shader Image Load/Store constants

anormal_constants = []

constant_re = re.compile( r"^#define GL_[A-Z_]+ +0x[0-9A-Z]{4}$" )
buffer_bit_re = re.compile( r"^#define GL_[A-Z_]+BUFFER_BIT +0x[0-9A-Z]{8}$" )
context_bit_re = re.compile( r"^#define GL_CONTEXT[A-Z_]+ +0x[0-9A-Z]{8}$" )
shader_bit_re = re.compile( r"^#define GL_[A-Z_]+SHADER_BIT[S]? +0x[0-9A-Z]{8}$" )
barrier_bit_re = re.compile( r"^#define GL_[A-Z_]+BARRIER_BIT[S]? +0x[0-9A-Z]{8}$" ) 

anormal_re = re.compile( r"^#define GL_[A-Z_]+ +0x[0-9A-Za-z]+$" )


""" Tries to match a given line with a regex.
    If true, add the constant name and decimal value to dest_array
"""
def gl3_match( dest_array, regex, line ) :
    match_line = regex.match( line )
    if( match_line ) :
        # separate constants in : (Name,Value)
        define, name, value = string.split( match_line.group() )
        # append (Name, Value) to array
        dest_array.append( ( name, int( value, 16 ) ) )
        return True
    return False

# Get all GL constants and sort them in arrays defined above
for line in gl3_src :
    if( not gl3_match( constants, constant_re, line ) ) :
        if( not gl3_match( buffer_bits, buffer_bit_re, line ) ) :
            if( not gl3_match( context_bits, context_bit_re, line ) ) :
                if( not gl3_match( shader_bits, shader_bit_re, line ) ) :
                    gl3_match( barrier_bits, barrier_bit_re, line )

                    #if( not gl3_match( barrier_bits, barrier_bit_re, line ) ) :
                        # anormal value, 
                        #gl3_match( anormal_constants, anormal_re, line ) 

for n, v in shader_bits :
    print n + " = " + str(v)


