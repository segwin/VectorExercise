//================================================================
// Exercise: Implement a basic integer vector class (LIFO)
//================================================================

#pragma once

//================================================================
class IntVector
{
public:
    //================================================================
    // Constructors & destructor
    IntVector();
    IntVector(int vectorSize, int value = 0);
    
    virtual ~IntVector();

    //================================================================
    // Capacity
    int size();

    void resize(int newSize, int value = 0);

    //================================================================
    // Element access
    int operator[](int index);
    int front();
    int back();
    
    int * data();

    //================================================================
    // Modifiers
    void push_back(int value);
    void pop_back();

    void insert(int index, int value);

    void erase(int index);

    void clear();

private:
    //================================================================
    // Put anything you want here
};
