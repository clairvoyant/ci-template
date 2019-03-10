include_directories(.)

find_package(Qt5 REQUIRED COMPONENTS Test)

macro(add_simple_test TEST_NAME)
    add_executable(tst_${TEST_NAME} ${TEST_NAME}/tst_${TEST_NAME}.cpp)
    add_test(tst_${TEST_NAME} tst_${TEST_NAME})
    target_link_libraries(tst_${TEST_NAME} Qt5::Test StackCalc)
endmacro()

include_directories(${PROJECT_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/src/gui)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_simple_test(CITemplateTestInternalBasic)

if(BUILD_INTERNAL_TESTS)
    add_simple_test(CITemplateTestInternal)
endif()


