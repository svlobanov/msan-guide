#include "crypto_utils.h"
#include <iostream>
#include <stdexcept>

int main() {
    try {
        std::cout << "=== Random String Generation Demo ===\n\n";
        
        // Test random string generation
        std::cout << "--- Random String Generation ---\n";
        for (int i = 0; i < 5; ++i) {
            std::string random_str = crypto::generate_random_string(10);
            std::cout << "Random string " << (i + 1) << ": " << random_str << std::endl;
        }
        
        // Test different lengths
        std::cout << "\n--- Different Lengths ---\n";
        std::cout << "Length 5: " << crypto::generate_random_string(5) << std::endl;
        std::cout << "Length 15: " << crypto::generate_random_string(15) << std::endl;
        std::cout << "Length 20: " << crypto::generate_random_string(20) << std::endl;
        
        std::cout << "\n=== Demo completed ===\n";
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
} 