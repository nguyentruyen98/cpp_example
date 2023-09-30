#include <iostream>
#include <string>
#include "OrderItem.h"

using namespace std;

class CustomerOrder
{
public:
    int ID;
    string firstName;
    string lastName;
    string phoneNumber;
    string address;
    string city;
    string state;
    int zipcode;
    string country;
    vector<OrderItem *> orderList;
    void addOrderItem(OrderItem *orderItem)
    {
        orderList.push_back(orderItem);
    }
    void loopOrderList()
    {
        for (size_t i = 0; i < orderList.size(); ++i)
        {
            OrderItem *item = orderList[i];
            std::cout << "Order Item: " << item->name << std::endl;
            item->calculatePrice();
        }
    };
};