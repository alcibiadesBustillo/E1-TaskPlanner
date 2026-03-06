#include "TaskList.h"
#include <stdexcept>

// Default constructor
TaskList::TaskList() {
    // TODO:
    // Initialize:
    // - capacity = 4
    // - size = 0
    // - allocate dynamic array
    data = nullptr;
    size = 0;
    capacity = 0;
}

// Constructor with initial capacity
TaskList::TaskList(int initialCapacity) {
    // TODO:
    // If initialCapacity <= 0, throw std::invalid_argument
    data = nullptr;
    size = 0;
    capacity = 0;
}

// Copy constructor
TaskList::TaskList(const TaskList& other) {
    // TODO:
    // Implement deep copy
    data = nullptr;
    size = 0;
    capacity = 0;
}

// Destructor
TaskList::~TaskList() {
    // TODO:
    // Release dynamic memory
}

// Assignment operator
TaskList& TaskList::operator=(const TaskList& other) {
    // TODO:
    // Handle self-assignment
    // Release old memory
    // Deep copy from other
    return *this;
}

void TaskList::resize(int newCapacity) {
    // TODO:
    // Allocate new array with newCapacity
    // Copy existing elements
    // Release old array
    // Update capacity
}

int TaskList::indexOfNextTask() const {
    // TODO:
    // Return the index of the task with highest execution priority
    // according to the comparison rules.
    //
    // One valid approach:
    // start with bestIndex = 0
    // compare all tasks with current best
    // if current best < candidate, then candidate becomes new best
    return -1;
}

void TaskList::addTask(const Task& t) {
    // TODO:
    // If full, double capacity
    // Insert at the end
}

Task TaskList::removeNextTask() {
    // TODO:
    // If empty, throw std::underflow_error
    // Find index of next task
    // Save task
    // Shift elements left
    // Decrease size
    // Return saved task
    throw std::underflow_error("TaskList is empty");
}

Task TaskList::peekNextTask() const {
    // TODO:
    // If empty, throw std::underflow_error
    // Return highest-priority task without removing it
    throw std::underflow_error("TaskList is empty");
}

bool TaskList::empty() const {
    // TODO
    return true;
}

int TaskList::getSize() const {
    // TODO
    return 0;
}

int TaskList::getCapacity() const {
    // TODO
    return 0;
}

void TaskList::clear() {
    // TODO:
    // Clear the logical content of the structure.
    // Keep the allocated memory unless you decide otherwise.
}
