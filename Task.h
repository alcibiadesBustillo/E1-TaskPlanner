#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>

class Task {
private:
    std::string name;
    int priority;
    int duration;
    int insertionOrder;

public:
    Task(const std::string& name = "EMPTY", int priority = 1, int duration = 1, int insertionOrder = 0);

    std::string getName() const;
    int getPriority() const;
    int getDuration() const;
    int getInsertionOrder() const;

    bool operator<(const Task& other) const;
    bool operator==(const Task& other) const;
};

std::ostream& operator<<(std::ostream& os, const Task& t);

#endif
