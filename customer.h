#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <string>

class Customer {
private:
    int patience;
    int happiness;
    int payment;
    std::vector<std::string> preferences;

public:
    Customer(int patience, int happiness, int payment, const std::vector<std::string>& preferences);
    void orderFood();
    void eatFood();
    void payBill();
    void leave();
};

#endif // CUSTOMER_H
