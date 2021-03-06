//
// Created by hloi on 4/27/2022.
//

#ifndef CH13TEMPLATESP22_PURCHASEITEM_H
#define CH13TEMPLATESP22_PURCHASEITEM_H

#include <string>
#include <sstream>

using std::string;
using std::ostream;
using std::endl;

class PurchaseItem {
private:
    string name;
    double price;
public:
    PurchaseItem() {}
    PurchaseItem(string name, double price);
    const string &getName() const;

    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);

    // overload a comparison operator for min function in TripleItem class
    bool operator<(const PurchaseItem& other) const;

    bool operator==(const PurchaseItem& other) const;

    // overload a insert stream operator for the printAll function.
    friend ostream& operator<<(ostream& out, const PurchaseItem& item);

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

bool PurchaseItem::operator<(const PurchaseItem &other) const {
    return this->price < other.price;
}

ostream &operator<<(ostream &out, const PurchaseItem &item) {
    out << item.name << " " << item.price;
    return out;
}

bool PurchaseItem::operator==(const PurchaseItem &other) const {
    return this->name == other.name and this->price == other.price;
}


#endif //CH13TEMPLATESP22_PURCHASEITEM_H
