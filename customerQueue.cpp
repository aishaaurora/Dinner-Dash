#include "customerQueue.h"

void CustomerQueue::addCustomer(const Customer& customer) {
    customers.push(customer);
}

Customer CustomerQueue::getNextCustomer() {
    Customer nextCustomer = customers.front();
    customers.pop();
    return nextCustomer;
}
