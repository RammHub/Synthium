#include "include/simulator.h"

void Simulator::scheduleEvent(int time, const std::string& name, int value) {
    eventQueue.push({time, name, value});
}

// Traverse AST and execute assignments
void Simulator::executeAST(const ASTNode& ast) {
    // Initialize all ports to 0 (avoid uninitialized values)
    for (const auto& child : ast.children) {
        if (child.type == "Port") {
            signalValues[child.name] = 0;
        }
    }

    // No need to schedule sum here; let run() compute it dynamically.
}

void Simulator::run() {
    while (!eventQueue.empty()) {
        Event e = eventQueue.front();
        eventQueue.pop();

        signalValues[e.name] = e.value;
        std::cout << "Time " << e.time << ": " << e.name << " = " << e.value << std::endl;

        // Compute sum only if both a and b are assigned
        if ((e.name == "a" || e.name == "b") && signalValues.count("a") && signalValues.count("b")) {
            int sum = signalValues["a"] + signalValues["b"];
            scheduleEvent(e.time + 1, "sum", sum);
        }
    }
}
