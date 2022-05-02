/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H
#include "PurchaseItem.h"
#include "TripleItem.h"

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testInt() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions. 
        TripleItem<int> triInts(9999, 5555, 6666); // TripleItem class with ints
        int min = triInts.MinItem();
        TS_ASSERT(min == 5555);
    }

    void testDouble() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TripleItem<double> triDouble(9999.5, 5555.1, 6666.3); // TripleItem class with ints
        double min = triDouble.MinItem();
        TS_ASSERT_DELTA(min, 5555.1, 0.000001);
    }

// test string


// test PurchaseItem

};
#endif /* NEWCXXTEST_H */

