#include "vector.h"

//================================================================
/**
 * @brief Default constructor
 */
IntVector::IntVector()
{
    // TODO
}

//================================================================
/**
 * @brief Constructor with vector allocation
 * 
 * @param [in] vectorSize   Number of elements to allocate
 * @param [in] value        Value to use for elements (default: 0)
 */
IntVector::IntVector(int vectorSize, int value)
{
    // TODO
}

//================================================================
/**
 * @brief Destructor
 *
 * Remember: all dynamically-allocated memory should be freed when
 *           vector is destroyed!
 */
IntVector::~IntVector()
{
    // TODO
}

//================================================================
/**
 * @brief Get current vector size
 *
 * @returns Number of elements in vector
 */
int IntVector::size()
{
    int size = 0;

    // TODO

    return size;
}

/**
 * @brief Resize vector
 * 
 * - If new size > current size: add elements to end of vector
 * - If new size == current size: do nothing
 * - If new size < current size: truncate elements from end of vector
 *
 * @param [in] newSize  New total vector size
 * @param [in] value    Value to use for any new elements added
 */
void IntVector::resize(int newSize, int value)
{
    // TODO
}

//================================================================
/**
 * @brief Access value in vector
 * 
 * @param [in] index    Index of element to access
 *
 * @returns Value at given index
 */
int IntVector::operator[](int index)
{
    int value = 0;

    // TODO

    return value;
}

/**
 * @brief Access front of vector
 *
 * @returns First value in vector
 */
int IntVector::front()
{
    int value = 0;

    // TODO

    return value;
}

/**
 * @brief Access back of vector
 *
 * @returns Last value in vector
 */
int IntVector::back()
{
    int value = 0;

    // TODO

    return value;
}

/**
 * @brief Get pointer to underlying int array
 *
 * @returns Pointer to first element in underlying data array
 */
int * IntVector::data()
{
    int * data = nullptr;

    // TODO

    return data;
}

//================================================================
/**
 * @brief Append value to vector end
 *
 * @param [in] value    Element to append to vector
 */
void IntVector::push_back(int value)
{
    // TODO
}

/**
 * @brief Remove last element in vector
 */
void IntVector::pop_back()
{
    // TODO
}

/**
 * @brief Insert value at an arbitrary position in vector
 *
 * Value should be inserted at given index, shifting all elements
 * after it towards the back of the vector (new size = old size + 1)
 * 
 * @param [in] index    Position at which to insert value
 * @param [in] value    Value to insert in vector
 */
void IntVector::insert(int index, int value)
{
    // TODO
}

/**
 * @brief Erase element from vector
 *
 * Expected result: new size == old size - 1
 */
void IntVector::erase(int index)
{
    // TODO
}

/**
 * @brief Clear all elements from vector
 *
 * Vector should be empty after this (size == 0)
 */
void IntVector::clear()
{
    // TODO
}