cmake_minimum_required(VERSION 3.10)
project(cxx-openssl-example VERSION 1.0.0 LANGUAGES CXX)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required libraries
find_package(OpenSSL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(CPPUNIT REQUIRED cppunit)

# Create main library
add_library(crypto_utils
    src/crypto_utils.cpp
)

# Link OpenSSL to library
target_link_libraries(crypto_utils PRIVATE OpenSSL::SSL OpenSSL::Crypto)
target_include_directories(crypto_utils PUBLIC include)

# Create executable
add_executable(crypto_demo src/main.cpp)
target_link_libraries(crypto_demo PRIVATE crypto_utils)

# Create tests
enable_testing()
add_executable(crypto_tests tests/test_crypto_utils.cpp)
target_link_libraries(crypto_tests PRIVATE crypto_utils)
target_link_libraries(crypto_tests PRIVATE ${CPPUNIT_LIBRARIES})
target_include_directories(crypto_tests PRIVATE ${CPPUNIT_INCLUDE_DIRS})
target_link_directories(crypto_tests PRIVATE ${CPPUNIT_LIBRARY_DIRS})

# Add test
add_test(NAME CryptoUtilsTest COMMAND crypto_tests) 