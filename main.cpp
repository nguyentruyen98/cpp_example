#include <iostream>
#include "CustomerOrder.h"
#include "Product.h"
#include "Service.h"
using namespace std;

int main()
{
    CustomerOrder order;
    Product product(1, "Laptop", 1000, "High-performance laptop", "Electronics", 2);
    Service service(2, "Maintenance service", 200, "Maintenance description", "Maintenance", 2);
    order.addOrderItem(&product);
    order.addOrderItem(&service);
    order.loopOrderList();
    return 0;
}