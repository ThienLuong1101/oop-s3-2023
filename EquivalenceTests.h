#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        mixturesOfBoth();
        Zeroes();
        BigPositiveNumber();
        BigNegativeNumber();
        one();
        NegativeOne();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void mixturesOfBoth() {
        Addition addition;
        if (addition.add(4, -5) != -1) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void Zeroes() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void BigPositiveNumber() {
        Addition addition;
        if (addition.add(40000000, 40000000) != 80000000) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    void BigNegativeNumber() {
        Addition addition;
        if (addition.add(-40000000, -40000000) != -80000000) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    void one() {
        Addition addition;
        if (addition.add(0,1) != 1)
        {
            std::cout << "Test 7 failed!" << std:: endl;
        }
    }

    void NegativeOne(){
        Addition addition;
        if(addition.add(0,-1) != -1) {
            std::cout << "Test 8 failed!" << std::endl;
        }
    }
};