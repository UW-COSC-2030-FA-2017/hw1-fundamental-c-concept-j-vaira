//
// Created by Ace on 9/24/2017.
//

#include "collection.h"
#include <cstdlib>

using namespace std;

int collection::isEmpty(int size)
{
        if (size != 0)
        {

            cout << "The array is not empty. "
                 << "It contains " << size << " elements.\n";
        }
        else
        {
            cout << "The array is empty.\n";
        }
    return 0;
}

int collection::makeEmpty(vector<string> &object, int &size)
{
    for (int i = 0; i < size; ++i) {
        object[i] = "";
    }
    //resetting array size to zero
    size = 0;
    cout << "Array is now empty.\n";
    return 0;
};

int collection::insert(vector<string> &object, int place, int size, string x)
{
    for (int i = size + 1; i >= 0; --i)
        {
            object[i + 1] = object[i];
        }
        object[place] = x;
    cout << "New item inserted at location " << place << ".\n";
    return 0;
}

int collection::remove(vector<string> &object, int place, int size)
{
    for (int i = place; i < size; ++i)
    {
        object[i] = object[i + 1];
    }
    cout << "Item removed at location " << place << ".\n";
    return 0;
}

int collection::removeRandom(vector<string> &object, int size)
{
    int random = rand() % size;
    for (int i = random; i < size; ++i)
    {
        object[i] = object[i - 1];
    }
    cout << "Item with contents "
         << object[random]
         << " removed at location "
         << random
         << ".\n";
    return 0;
}

int collection::notContained(vector<string> object, int size, string x)
{
    cout << "Searching for \"" << x << "\".\n";
    string temp = "";
    for (int i = 0; i < size; ++i)
    {
        if (object[i] == x)
        {
            cout << "Your searched contents were found at location "
                 << i
                 << ".\n";
            break;
        }
        else
        {
            temp = "Your search found no results.\n";
        }
    }
    cout << temp;
    return 0;
}

int collection::showContents(vector<string> object)
{
    cout << "Contents: ";
    for (const auto i: object)
    {
        cout << i << " ";
    }
    cout << "\n";
}
