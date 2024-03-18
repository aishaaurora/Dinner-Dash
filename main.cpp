#include <iostream>
#include "level.h"

using namespace std;

int main() {
    // Memulai permainan
    Level level("Medium", "Serve all customers", 60);
    level.start();

    return 0;
}