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
#include <vector>

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
using namespace std;

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

    void testString() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TripleItem<string> triDouble("hello", "world", "cup"); // TripleItem class with ints
        string min = triDouble.MinItem();
        TS_ASSERT_EQUALS("cup", min);
    }

// test PurchaseItem

    void testPurchaseItem() {
        PurchaseItem item1("toy1", 10);
        PurchaseItem item2("toy2", 20);
        PurchaseItem item3("toy3", 30);
        TripleItem<PurchaseItem> triItems(item1, item2, item3);
        PurchaseItem min = triItems.MinItem();
        TS_ASSERT_EQUALS(item1, min);
        // TS_ASSERT(min == item1);
    }


    void testPurchaseItemVector() {
        vector<TripleItem<PurchaseItem>> bags;

        PurchaseItem item1("toy1", 10);
        PurchaseItem item2("toy2", 20);
        PurchaseItem item3("toy3", 30);
        TripleItem<PurchaseItem> triItems(item1, item2, item3);
        bags.push_back(triItems);

        PurchaseItem min = triItems.MinItem();
        TS_ASSERT_EQUALS(item1, min);
        // TS_ASSERT(min == item1);
    }

};
#endif /* NEWCXXTEST_H */

