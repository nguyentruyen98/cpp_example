#include <iostream>
#include <string>
using namespace std;

class OrderItem
{
protected:
public:
    int ID;
    string name;
    int unitPrice;
    string description;
    string category;
    OrderItem(int id, const std::string &n, int price, const std::string &desc, const std::string &cat)
    {
        ID = id;
        name = n;
        unitPrice = price;
        description = desc;
        category = cat;
    }
    OrderItem() {}

    int &getOrderItemID()
    {
        return ID;
    }

    virtual void calculatePrice() {}
    virtual double getItemPrice() {}
};
