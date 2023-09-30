#include <list>

class CustomerList
{
public:
    list<Customer> customerList;
    int countCustomerByCity(const string &city)
    {
        int count = 0;

        for (Customer &customer : customerList)
        {
            if (customer.getCity() == city)
            {
                count += 1;
            }
        }
        return count;
    }
    void addCustomerToList(const Customer &customer)
    {
        customerList.push_back(customer);
    }
    Customer getCustomerByID(const int &id)
    {
        for (Customer &customer : customerList)
        {
            if (customer.getID() == id)
            {
                return customer;
            }
        }
        return Customer();
    }
};
