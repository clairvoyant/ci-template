

############################################################
# Create a library
############################################################

#Generate the static library from the library sources

add_library(StackCalc StackCalc.cpp)

set_property(TARGET StackCalc PROPERTY POSITION_INDEPENDENT_CODE ON)


target_include_directories(StackCalc
    PUBLIC 
)

