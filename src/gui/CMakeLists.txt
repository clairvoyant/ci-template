



############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(CITemplateGUI 
	main.cpp
)

target_link_libraries(CITemplateGUI
    PUBLIC
    Qt5::Core
    Qt5::Network
    Qt5::Xml
	StackCalc
    PRIVATE
    ${MULTIMEDIA_LIBS}
)


