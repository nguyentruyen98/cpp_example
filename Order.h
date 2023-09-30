#include "iostream"
#include <list>

using namespace std;

class Order
{
private:
    double totalListPrice;

public:
    int ID;
    tm orderedTime;
    list<OrderItem *> itemList;
    Order(int id) : ID(id)
    {
        orderedTime = getCurrentTime();
    }
    Order() {}

public:
    void addOrderToList(OrderItem *order)
    {
        itemList.push_back(order);
    }
    double getTotalListPrice()
    {
        calculateTotalListPrice();
        return totalListPrice;
    }
    const int &getOderID()
    {
        return ID;
    }
    OrderItem *getOrderById(const int &id)
    {
        for (OrderItem *item : itemList)
        {
            if (item->getOrderItemID() == id)
            {
                return item;
            }
        }

        return nullptr;
    }

private:
    tm getCurrentTime()
    {
        time_t now = time(0);
        return *localtime(&now);
    }
    void calculateTotalListPrice()
    {
        double total = 0;
        for (OrderItem *item : itemList)
        {

            total += item->getItemPrice();
        }
        totalListPrice = total;
    }
};
