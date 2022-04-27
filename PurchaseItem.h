//
// Created by hloi on 4/27/2022.
//

#ifndef CH13TEMPLATESP22_PURCHASEITEM_H
#define CH13TEMPLATESP22_PURCHASEITEM_H

#include <string>
using std::string;


class PurchaseItem {
private:
    string name;
    double price;
public:

    PurchaseItem(string name, double price);
    const string &getName() const;

    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);

    // overload a comparison operator for min function in TripleItem class

    // overload a insert stream operator for the printAll function.


};

const string &PurchaseItem::getName() const {
    return name;
}

void PurchaseItem::setName(const string &name) {
    PurchaseItem::name = name;
}

double PurchaseItem::getPrice() const {
    return price;
}

void PurchaseItem::setPrice(double price) {
    PurchaseItem::price = price;
}

PurchaseItem::PurchaseItem(string name, double price) {
    this->name = name;
    this->price = price;
}


#endif //CH13TEMPLATESP22_PURCHASEITEM_H
