//
// Created by Ace on 9/24/2017.
//

#ifndef PART3_COLLECTION_H
#define PART3_COLLECTION_H

#include <vector>
#include <iostream>
using namespace std;

class collection {
public:
    //okay so these aren't exactly arrays... google said vector would work better?
    vector<string> contents;
    int size;
    int isEmpty(int size);
    int makeEmpty(vector<string> &object, int &size);
    int insert(vector<string> &object, int place, int size, string x);
    int remove(vector<string> &object, int place, int size);
    int removeRandom(vector<string> &object, int size);
    int notContained (vector<string> object, int size, string x);
    int showContents (vector<string> object);
};

#endif //PART3_COLLECTION_H
