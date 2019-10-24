//
// Created by alexc on 10/21/2019.
//

#include "Digital.h"
#include <iostream>

void Digital::getData() {
    Publication::getData();
    Sale::getData();
    cout << "Enter megabytes size: " << endl;
    cin >> storage;
}

void Digital::putData() {
    Publication:: putData();
    cout << "Total storage: " << storage << " megabytes" << endl;
    Sale::putData();
}
