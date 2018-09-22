#include "vector.h"

#include <cassert>
#include <cstdlib>
#include <ctime>
#include <limits>

int main(int, char *)
{
    srand(static_cast<unsigned>(time(0)));

    // Create vector with 512 identical elements
    int initValue = rand() - RAND_MAX / 2;
    IntVector vector(512, initValue);

    assert(vector.size() == 512);

    for (int i = 0; i < 512; ++i)
    {
        assert(vector[i] == initValue);
    }

    // Resize vector to 1024 elements
    int newValue = rand() - RAND_MAX / 2;
    vector.resize(1024, newValue);

    assert(vector.size() == 1024);

    for (int i = 0; i < 512; ++i)
    {
        assert(vector[i] == initValue);
    }

    for (int i = 512; i < 1024; ++i)
    {
        assert(vector[i] == newValue);
    }

    // Resize vector to 256 elements
    vector.resize(256);

    assert(vector.size() == 256);

    for (int i = 0; i < 256; ++i)
    {
        assert(vector[i] == initValue);
    }

    // Clear vector
    vector.clear();

    assert(vector.size() == 0);

    // Populate vector (push_back) & check operator[]
    int front, back;
    for (int i = 0; i < 1024; ++i)
    {
        int value = rand();
        vector.push_back(value);

        assert(vector[i] == value);
        assert(vector.size() == i + 1);

        if (i == 0)
        {
            front = value;
        }
        else if (i == 1023)
        {
            back = value;
        }
    }

    // Check vector front/back
    assert(vector.front() == front);
    assert(vector.back() == back);

    // Remove last 10 values (pop_back)
    for (int i = 0; i < 10; ++i)
    {
        int prevSize = vector.size();
        int newBack = vector[prevSize - 2];
        vector.pop_back();

        assert(vector.size() == prevSize - 1);
        assert(vector.back() == newBack);
    }

    // Erase 10 values at random positions (erase)
    for (int i = 0; i < 10; ++i)
    {
        int prevSize = vector.size();
        int index = rand() % prevSize - 1;
        int newValue = vector[index + 1];

        vector.erase(index);

        assert(vector.size() == prevSize - 1);
        assert(vector[index] == newValue);
    }

    // Insert some values (insert)
    for (int i = 0; i < 10; ++i)
    {
        int prevSize = vector.size();
        int index = rand() % prevSize - 1;
        int value = rand() - RAND_MAX / 2;

        vector.insert(index, value);
    }
}