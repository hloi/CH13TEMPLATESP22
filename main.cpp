#include <iostream>
#include "TripleItem.h"
#include "PurchaseItem.h"
#include <vector>

using namespace std;

int main() {
    TripleItem<int> triInts(9999, 5555, 6666); // TripleItem class with ints
    TripleItem<short> triShorts(99, 55, 66);   // TripleItem class with shorts

    // Try functions from TripleItem
    triInts.PrintAll();
    cout << "Min: " << triInts.MinItem() << endl << endl;

    triShorts.PrintAll();
    cout << "Min: " << triShorts.MinItem() << endl << endl;

    PurchaseItem item1("toy1", 10);
    PurchaseItem item2("toy2", 20);
    PurchaseItem item3("toy3", 30);
    TripleItem<PurchaseItem> triItems(item1, item2, item3);
    triItems.PrintAll();
    cout << triItems.MinItem() << endl;

    vector<TripleItem<PurchaseItem>> bags;


    TripleItem<PurchaseItem> vectorTriItems(item1, item2, item3);
    bags.push_back(vectorTriItems);

    cout << triInts;
    return 0;
}

