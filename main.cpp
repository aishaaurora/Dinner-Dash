#include "CustomerFactory.h"
#include "Customer.h"

void startGame() {
    // Contoh penggunaan
    std::vector<Customer*> customers;
    for (int i = 0; i < 5; ++i) {
        customers.push_back(CustomerFactory::createRandomCustomer());
    }
    
    CustomerFactory::addCustomersToQueue(customers);
}

int main() {
    startGame();
    return 0;
}
