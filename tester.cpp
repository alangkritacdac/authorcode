#include <String>
#include <iostream>
#include "author.h"
using namespace std;

int main() {
    Author a(4,"asdd","sdsf",10,5);
    int s = a.available_book();
    cout<<s;
    return 0;
}
