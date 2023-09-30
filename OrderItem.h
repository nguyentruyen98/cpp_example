#include <iostream>
#include <string>
using namespace std;

class OrderItem
{
public:
    int ID;
    string name;
    int unitPrice;
    string description;
    string category;
    virtual void calculatePrice() {}
};
