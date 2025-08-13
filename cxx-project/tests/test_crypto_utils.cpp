#include "crypto_utils.h"
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

class CryptoUtilsTest : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE(CryptoUtilsTest);
    CPPUNIT_TEST(testRandomString);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp() override {
        // Initialization before each test
    }

    void tearDown() override {
        // Cleanup after each test
    }

    void testRandomString() {
        // Test random string generation
        size_t length = 10;
        std::string random1 = crypto::generate_random_string(length);
        std::string random2 = crypto::generate_random_string(length);
        
        // Check length
        CPPUNIT_ASSERT_EQUAL(length, random1.length());
        CPPUNIT_ASSERT_EQUAL(length, random2.length());
        
        // Check that strings are different (with high probability)
        CPPUNIT_ASSERT(random1 != random2);
        
        // Check that all characters are letters
        for (char c : random1) {
            CPPUNIT_ASSERT(c >= 'A' && c <= 'Z');
        }
        
        for (char c : random2) {
            CPPUNIT_ASSERT(c >= 'A' && c <= 'Z');
        }
        
        // Test different lengths
        std::string short_str = crypto::generate_random_string(5);
        std::string long_str = crypto::generate_random_string(20);
        
        CPPUNIT_ASSERT_EQUAL(size_t(5), short_str.length());
        CPPUNIT_ASSERT_EQUAL(size_t(20), long_str.length());
    }
};

CPPUNIT_TEST_SUITE_REGISTRATION(CryptoUtilsTest);

int main() {
    // Create test runner
    CppUnit::TextUi::TestRunner runner;
    
    // Add test
    runner.addTest(CryptoUtilsTest::suite());
    
    // Run tests
    bool wasSuccessful = runner.run();
    
    return wasSuccessful ? 0 : 1;
} 