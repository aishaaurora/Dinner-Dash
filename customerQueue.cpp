#include "customerQueue.h"

// Implementasi fungsi addCustomer()
void CustomerQueue::addCustomer(const Customer& customer) {
    customers.push(customer);
}

// Implementasi fungsi getNextCustomer()
Customer CustomerQueue::getNextCustomer() {
    Customer nextCustomer = customers.front();
    customers.pop();
    return nextCustomer;
}

// Implementasi fungsi isEmpty()
bool CustomerQueue::isEmpty() const {
    return customers.empty();
}

