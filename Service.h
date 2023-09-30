// #include "OrderItem.h"

class Service : public OrderItem
{
private:
    tm usingTimeStart; // Create first point time;
    tm usingTimeEnd;

public:
    double itemPrice;
    double duration;
    Service(int id, const std::string &n, int price, const std::string &desc, const std::string &cat) : OrderItem(id, n, price, desc, cat)
    {
        time_t now = time(0);
        tm *tempUsingTimeStart = localtime(&now);
        usingTimeStart.tm_year = tempUsingTimeStart->tm_year + 1900;
        usingTimeStart.tm_mon = tempUsingTimeStart->tm_mon + 1;
        usingTimeEnd = generateEndTimeUsing();
        duration = calculateTimeDuration(&usingTimeEnd, &usingTimeStart);
    }

    double getItemPrice() override
    {
        calculatePrice();
        return itemPrice;
    }

private:
    void calculatePrice() override

    {
        itemPrice = duration * unitPrice;
        cout << "Service price: " << itemPrice << endl;
    }
    double calculateTimeDuration(tm *a, tm *b)
    {
        double dayYear = (a->tm_year - b->tm_year);
        double dayMonth = 0;
        double days = 0;
        if (a->tm_mon >= b->tm_mon)
        {
            dayMonth = (a->tm_mon - b->tm_mon);
        }
        else
        {
            dayYear -= 1;
            dayMonth = (a->tm_mon + 12 - b->tm_mon);
        }
        if (a->tm_mday >= b->tm_mday)
        {
            days = a->tm_mday - b->tm_mday;
        }
        else
        {
            dayMonth -= 1;
            days = a->tm_mday + 30 - b->tm_mday;
        }
        if (dayMonth < 0)
        {
            dayMonth += 12;
            dayYear -= 1;
        }
        double time = dayYear * 365 + dayMonth * 30 + days;
        return time;
    }
    tm generateEndTimeUsing()
    {
        srand(time(nullptr));
        tm rdTime = tm();
        rdTime.tm_year = rand() % (2025 - 2024 + 1) + 2024;
        rdTime.tm_mon = rand() % 11 + 1;
        rdTime.tm_mday = rand() % 30 + 1;
        return rdTime;
    }
};
