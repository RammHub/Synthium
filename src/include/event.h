#ifndef EVENT_H
#define EVENT_H

#include <string>

struct Event {
    int time;         // Simulation time
    std::string name; // Signal name
    int value;        // New value of the signal
};

#endif // EVENT_H
