# C++ OpenSSL Example Project

Example C++ project demonstrating the use of OpenSSL and CppUnit for testing.

## Description

This project contains:
- Cryptographic utilities library (`crypto_utils`)
- Demo program
- Unit tests using CppUnit

### Functionality

- **Random string generation** - creating cryptographically secure random strings

## Requirements

- CMake 3.16 or higher
- C++20 compatible compiler
- OpenSSL (installed from OS package manager)
- CppUnit (installed from OS package manager)

## Installing Dependencies

### macOS (with Homebrew)
```bash
brew install openssl cppunit
```

### Ubuntu/Debian
```bash
sudo apt-get install libssl-dev libcppunit-dev
```

### CentOS/RHEL/Fedora
```bash
sudo yum install openssl-devel cppunit-devel
# or for Fedora:
sudo dnf install openssl-devel cppunit-devel
```

## Building

```bash
# Create build directory
mkdir build
cd build

# Configure project
cmake ..

# Build project
make
```

## Running

### Demo Program
```bash
./crypto_demo
```

### Tests
```bash
# Run tests via CTest
ctest

# Or run test executable directly
./crypto_tests
```

## Project Structure

```
cxx-project/
├── CMakeLists.txt          # Main CMake configuration file
├── include/
│   └── crypto_utils.h      # Library header file
├── src/
│   ├── crypto_utils.cpp    # Implementation of cryptographic functions
│   └── main.cpp           # Demo program
├── tests/
│   └── test_crypto_utils.cpp # Unit tests
└── README.md              # This file
```

## Usage Examples

```cpp
#include "crypto_utils.h"

// Generate random string
std::string random = crypto::generate_random_string(16);
```

## License

This project is distributed under the same license as the main project. 