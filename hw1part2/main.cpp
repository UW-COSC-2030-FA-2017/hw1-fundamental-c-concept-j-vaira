//Okay this concept is actually pretty intuitive but hard to explain
//so I'm going to show it with examples, maybe some code that won't work
//to illustrate how not to use them.
//these examples are modified versions of ones found on my source in the
//readme. He explains it better than I could.

#include <iostream>
using namespace std;

int main() {
    int num;

    //num is an lvalue and 1 and 5 are rvalues
    num = 1;    //this works
    num = (1 + 5);    //so does this
    1 = num;    //this doesn't work
    (1 + 5) = num;    //this also doesn't


    return 0;
}