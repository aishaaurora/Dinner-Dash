#include "level.h"
#include "customerQueue.h"
#include "customer.h"
#include <iostream> 

Level::Level(const std::string& difficulty, const std::string& goal, int timeLimit)
    : difficulty(difficulty), goal(goal), timeLimit(timeLimit) {}

void Level::start() {
    // Membuat antrian pelanggan
    CustomerQueue customerQueue;
    customerQueue.addCustomer(Customer(10, 8, 20, {"Burger", "Fries"}));
    customerQueue.addCustomer(Customer(15, 7, 25, {"Pizza", "Soda"}));

    // Memproses pelanggan dalam antrian
    while (!customerQueue.isEmpty()) {
        Customer nextCustomer = customerQueue.getNextCustomer();
        nextCustomer.orderFood();
        nextCustomer.eatFood();
        nextCustomer.payBill();
        nextCustomer.leave();
    }

    // Memeriksa apakah level sudah selesai
    if (this->isCompleted()) {
        std::cout << "Congratulations! Level completed successfully!" << std::endl;
    } else {
        std::cout << "Game over. Level not completed." << std::endl;
    }
}

bool Level::isCompleted() const {
    // Logika pengecekan selesainya level
    return true; // Misalnya, selalu mengembalikan true untuk contoh sederhana ini
}