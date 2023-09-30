// #include "OrderItem.h"

class Service : public OrderItem
{

public:
    int duration;
    Service(int initID, string initName, int initUnitPrice, string initDescription, string initCategory, int initDuration)
    {
        ID = initID;
        name = initName;
        unitPrice = initUnitPrice;
        description = initDescription;
        category = initCategory;
        duration = initDuration;
    };

    void calculatePrice() override
    {
        cout << "Service price: " << duration * unitPrice << endl;
    }
};
