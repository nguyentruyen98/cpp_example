// #include "OrderItem.h"

class Product : public OrderItem
{

public:
    int quantity;
    Product(int initID, string initName, int initUnitPrice, string initDescription, string initCategory, int initQuantity)
    {
        ID = initID;
        name = initName;
        unitPrice = initUnitPrice;
        description = initDescription;
        category = initCategory;
        quantity = initQuantity;
    };

    void calculatePrice() override
    {
        cout << "Product price: " << quantity * unitPrice << endl;
    }
};
