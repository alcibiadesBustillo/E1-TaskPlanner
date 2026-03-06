#ifndef TASKLIST_H
#define TASKLIST_H

#include "Task.h"

class TaskList {
private:
    Task* data;
    int size;
    int capacity;

    void resize(int newCapacity);
    int indexOfNextTask() const;

public:
    TaskList();
    TaskList(int initialCapacity);
    TaskList(const TaskList& other);
    ~TaskList();
    TaskList& operator=(const TaskList& other);

    void addTask(const Task& t);
    Task removeNextTask();
    Task peekNextTask() const;

    bool empty() const;
    int getSize() const;
    int getCapacity() const;
    void clear();
};

#endif
