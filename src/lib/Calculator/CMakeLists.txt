cmake_minimum_required(VERSION 3.10)

set(GUI_NAME Calculator)

set(QT_VERSION_REQ "5.2")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Core ${QT_VERSION_REQ} REQUIRED)
# find_package(Qt5Quick ${QT_VERSION_REQ} REQUIRED)
find_package(Qt5Widgets ${QT_VERSION_REQ} REQUIRED)
find_package(Qt5Gui ${QT_VERSION_REQ} REQUIRED)

set(CMAKE_AUTOMOC ON)
QT5_WRAP_UI( UI_HDRS ${UI_FILES} )

add_library(Calculator calculator.cpp moc_calculator)

set_property(TARGET Calculator PROPERTY POSITION_INDEPENDENT_CODE ON)


target_include_directories(Calculator
    PUBLIC 
)


target_link_libraries(${GUI_NAME}
  Qt5::Core
  #Qt5::Quick
  Qt5::Widgets  
  Qt5::Gui  
)
