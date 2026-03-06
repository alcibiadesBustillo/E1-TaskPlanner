#include "Task.h"
#include <stdexcept>

// Constructor
Task::Task(const std::string& name, int priority, int duration, int insertionOrder) {
    // TODO:
    // Validate:
    // - name must not be empty
    // - priority must be between 1 and 10
    // - duration must be greater than 0
    // If invalid, throw std::invalid_argument

    this->name = name;
    this->priority = priority;
    this->duration = duration;
    this->insertionOrder = insertionOrder;
}

// Getters
std::string Task::getName() const {
    // TODO
    return "";
}

int Task::getPriority() const {
    // TODO
    return 0;
}

int Task::getDuration() const {
    // TODO
    return 0;
}

int Task::getInsertionOrder() const {
    // TODO
    return 0;
}

// Comparison operator
bool Task::operator<(const Task& other) const {
    // TODO:
    // A task is "less than" another if it has lower execution priority.
    //
    // Rules:
    // 1. Lower priority value => lower execution priority
    // 2. If same priority, longer duration => lower execution priority
    // 3. If same priority and same duration, larger insertionOrder => lower execution priority
    return false;
}

bool Task::operator==(const Task& other) const {
    // TODO
    return false;
}

std::ostream& operator<<(std::ostream& os, const Task& t) {
    os << "Task{name: "
       << t.getName()
       << ", priority: "
       << t.getPriority()
       << ", duration: "
       << t.getDuration()
       << ", insertionOrder: "
       << t.getInsertionOrder()
       << "}";

    return os;
}
