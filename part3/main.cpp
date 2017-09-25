#include <iostream>
#include "collection.h"
using namespace std;

int main() {
    cout << "Creating new array.\n";
    collection collection1;
    collection1.size = 0;
    collection1.showContents(collection1.contents);
    collection1.isEmpty(collection1.size);

    cout << "\nAdding contents to array.\n";
    collection1.contents = {"Inky", "Blinky", "Pinky", "Clyde"};
    collection1.showContents(collection1.contents);
    collection1.size = collection1.contents.size();
    collection1.isEmpty(collection1.size);

    cout << "\nInserting an item into array.\n";
    collection1.insert(collection1.contents, 0, 1, "Pac-Man");
    collection1.showContents(collection1.contents);

    cout << "\nSearching for an item in array.\n";
    collection1.notContained(collection1.contents, collection1.size, "Pac-Man");
    collection1.notContained(collection1.contents, collection1.size, "Buster");

    cout << "\nRemoving an item from array.\n";
    collection1.remove(collection1.contents, 2, 3);
    collection1.showContents(collection1.contents);
    collection1.size = collection1.contents.size();

    cout << "\nRemoving a random item from array.\n";
    collection1.removeRandom(collection1.contents, collection1.size);
    collection1.showContents(collection1.contents);

    cout << "\nDeleting contents from array.\n";
    collection1.makeEmpty(collection1.contents, collection1.size);
    collection1.showContents(collection1.contents);
    collection1.isEmpty(collection1.size);

    return 0;
}