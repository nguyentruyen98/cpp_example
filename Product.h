
class Product : public OrderItem
{
private:
    double itemPrice;

public:
    int quantity;
    Product(int id, const std::string &n, int price, const std::string &desc, const std::string &cat, int quan) : OrderItem(id, n, price, desc, cat), quantity(quan){};

    double getItemPrice() override
    {
        calculatePrice();
        return itemPrice;
    }

private:
    void calculatePrice() override
    {
        itemPrice = quantity * unitPrice;
        cout << "Product price: " << itemPrice << endl;
    }
};
