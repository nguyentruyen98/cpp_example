#include <iostream>
#include "OrderItem.h"
#include "Order.h"
#include "Customer.h"
#include "CustomerList.h"
#include "Product.h"
#include "Service.h"

using namespace std;

int main()
{
    CustomerList customerList;
    Customer roy = Customer(1, "Truyen", "Nguyen", "0977005931", "Tan Binh", "Ho Chi Minh city", "Ho Chi Minh", 70000, "Vietnam");
    Order order = Order(1);
    Product product = Product(1, "Laptop", 1000, "High-performance laptop", "Electronics", 2);
    Service service = Service(2, "Maintenance service", 200, "Maintenance description", "Maintenance");
    product.getItemPrice();
    service.getItemPrice();
    order.addOrderToList(&product);
    order.addOrderToList(&service);
    roy.addOrderList(order);
    customerList.addCustomerToList(roy);
    int count = customerList.countCustomerByCity("Ho Chi Minh city");
    Customer customer = customerList.getCustomerByID(1);
    Order myOrder = customer.getOrderByID(1);
    double a = myOrder.getTotalListPrice();
    // cout << "Product price: " << test << endl;

    // CustomerOrder order;
    // order.addOrderItem(&product);
    // order.addOrderItem(&service);
    // order.loopOrderList();
    // return 0;
}