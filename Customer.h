#include <iostream>
#include <string>
#include <list>

using namespace std;

class Customer
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
    list<Order> orderList;

    Customer(int id, const std::string &first, const std::string &last, const std::string &phone,
             const std::string &addr, const std::string &cty, const std::string &st, int zip, const std::string &cntry)
        : ID(id), firstName(first), lastName(last), phoneNumber(phone),
          address(addr), city(cty), state(st), zipcode(zip), country(cntry) {}

    Customer() {}
    void addOrderList(Order orderItem)
    {
        orderList.push_back(orderItem);
    }
    const string &getCity()
    {
        return city;
    }

    Order getOrderByID(const int &id)
    {
        for (Order &order : orderList)
        {
            if (order.getOderID() == id)
            {
                return order;
            }
        }
        return Order();
    }

    int &getID()
    {
        return ID;
    }
};