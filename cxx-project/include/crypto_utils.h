#pragma once

#include <string>

namespace crypto {

/**
 * @brief Generates a random string of specified length
 * @param length Length of the generated string
 * @return Random string
 */
std::string generate_random_string(size_t length);

} // namespace crypto 