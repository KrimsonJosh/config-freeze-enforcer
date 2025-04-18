cmake_minimum_required(VERSION 3.10)
project(ConfigFreezeEnforcer)

set(CMAKE_CXX_STANDARD 17)

#add libaries
add_library(ConfigLib
    src/ConfigChecker.cpp
    src/ConfigUpdater.cpp
)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# add executables
add_executable(runTests
    tests/test_config_checker.cpp
    tests/test_config_updater.cpp
)

target_link_libraries(runTests ConfigLib GTest::GTest GTest::Main)

enable_testing()
add_test(NAME AllTests COMMAND runTests) # type ./runTests to run