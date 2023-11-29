cmake_minimum_required(VERSION 3.10)

project(MyMathProject)

# Locate GTest
find_package(GTest REQUIRED)

# Include the directories for project files and GTest headers
include_directories(${PROJECT_SOURCE_DIR}/src ${GTEST_INCLUDE_DIRS})

# Set the source files for the main executable
set(SOURCE_FILES src/main.cpp src/mymath.cpp)

# Create the main executable
add_executable(MyMathProject ${SOURCE_FILES})

# Link the main executable with GTest
target_link_libraries(MyMathProject ${GTEST_LIBRARIES} pthread)

# Enable testing
enable_testing()

# Set the source files for the test executable
set(TEST_SOURCE_FILES
    test/main.cpp
    test/test_mymath.cpp
    test/test_advanced.cpp
    test/test_divide.cpp
    src/mymath.cpp
)

# Create the test executable
add_executable(TestMyMath ${TEST_SOURCE_FILES})

# Link the test executable with GTest
target_link_libraries(TestMyMath ${GTEST_LIBRARIES} pthread)

# Add tests to the project
add_test(NAME TestAdd COMMAND TestMyMath TestAdd)
add_test(NAME TestSubtract COMMAND TestMyMath TestSubtract)
add_test(NAME TestMultiply COMMAND TestMyMath TestMultiply)
add_test(NAME TestAdvanced COMMAND TestMyMath TestAdvanced)
add_test(NAME TestDivide COMMAND TestMyMath TestDivide)

# Use CTest to run the tests
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND}
  --output-on-failure
  --output-junit ${PROJECT_BINARY_DIR}/test_results.xml
  -C $<CONFIG>
)
