//
// Created by alexc on 10/19/2019.
//

#include "Publication.h"
#include <iostream>

using namespace std;

void Publication::getData() {
    cout << "Enter Title: " << endl;
    cin >> title;
    cout << "Enter Price: " << endl;
    cin >> price;
}

void Publication::putData() {
    cout << "Title: " << title << endl;
    cout << "Price: $" << price << endl;
}
