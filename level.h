#ifndef LEVEL_H
#define LEVEL_H

#include <string>

class Level {
private:
    std::string difficulty;
    std::string goal;
    int timeLimit;

public:
    Level(const std::string& difficulty, const std::string& goal, int timeLimit);
    void start();
    bool isCompleted() const; // Menggunakan const pada metode isCompleted
};

#endif // LEVEL_H