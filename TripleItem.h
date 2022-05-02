//
// Created by hloi on 4/27/2022.
//

#ifndef CH13TEMPLATESP22_TRIPLEITEM_H
#define CH13TEMPLATESP22_TRIPLEITEM_H

#include <iostream>

using std::cout;
using std::endl;

#include <iostream>
using namespace std;

template<typename TheType>
class TripleItem {
public:
    TripleItem(TheType val1, TheType val2, TheType val3);
    void PrintAll() const;   // Print all data member values
    TheType MinItem() const; // Return min data member value


private:
    TheType item1;           // Data value 1
    TheType item2;           // Data value 2
    TheType item3;           // Data value 3
};

template<typename TheType>
TripleItem<TheType>::TripleItem(TheType i1, TheType i2, TheType i3) {
    item1 = i1;
    item2 = i2;
    item3 = i3;
}

// Print all data member values
template<typename TheType>
void TripleItem<TheType>::PrintAll() const {
    cout << "(" << item1 << "," << item2
         << "," << item3 << ")" << endl;
}

// Return min data member value
template<typename TheType>
TheType TripleItem<TheType>::MinItem() const {
    TheType minVal = item1; // Holds value of min item, init to first item

    if (item2 < minVal) {
        minVal = item2;
    }
    if (item3 < minVal) {
        minVal = item3;
    }

    return minVal;
}

#endif //CH13TEMPLATESP22_TRIPLEITEM_H
