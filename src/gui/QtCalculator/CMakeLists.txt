

set(GUI_NAME QtCalculator)

set(QT_VERSION_REQ "5.2")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Core ${QT_VERSION_REQ} REQUIRED)
# find_package(Qt5Quick ${QT_VERSION_REQ} REQUIRED)
find_package(Qt5Widgets ${QT_VERSION_REQ} REQUIRED)
find_package(Qt5Gui ${QT_VERSION_REQ} REQUIRED)

#set(CMAKE_AUTOMOC ON)
#QT5_WRAP_UI( UI_HDRS ${UI_FILES} )

ADD_EXECUTABLE(${GUI_NAME} main.cpp )

target_link_libraries(${GUI_NAME}
  Calculator
  Qt5::Core
  #Qt5::Quick
  Qt5::Widgets  
  Qt5::Gui  
)
