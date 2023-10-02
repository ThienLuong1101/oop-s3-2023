#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
         if (addition.add(1,-4) != -3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
         if (addition.add(0, 2) != 2) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        // Add more tests here
    }
};