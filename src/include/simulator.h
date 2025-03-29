#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "event.h"
#include "ast.h"
#include <queue>
#include <unordered_map>
#include <iostream>

class Simulator {
private:
    std::queue<Event> eventQueue;
    std::unordered_map<std::string, int> signalValues; // Tracks signal states

public:
    void scheduleEvent(int time, const std::string& name, int value);
    void run();
    void executeAST(const ASTNode& ast);  // New function
};

#endif // SIMULATOR_H
