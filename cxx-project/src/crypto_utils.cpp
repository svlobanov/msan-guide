#include "crypto_utils.h"
#include <openssl/rand.h>
#include <vector>
#include <stdexcept>

namespace crypto {

std::string generate_random_string(size_t length) {
    std::vector<unsigned char> random_bytes(length);
    
    if (RAND_bytes(random_bytes.data(), static_cast<int>(length)) != 1) {
        throw std::runtime_error("Failed to generate random bytes");
    }
    
    std::string result;
    result.reserve(length);
    
    for (unsigned char byte : random_bytes) {
        // Use only printable characters
        result += static_cast<char>('A' + (byte % 26));
    }
    
    return result;
}

} // namespace crypto 