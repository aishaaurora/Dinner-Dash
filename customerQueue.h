#ifndef CUSTOMERQUEUE_H
#define CUSTOMERQUEUE_H

#include "customer.h"
#include <queue>

class CustomerQueue {
private:
    std::queue<Customer> customers;

public:
    void addCustomer(const Customer& customer);
    Customer getNextCustomer();
};

#endif // CUSTOMERQUEUE_H
