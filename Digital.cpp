//
// Created by alexc on 10/21/2019.
//

#include "Digital.h"
#include <iostream>

void Digital::print() const {
    Publication::print();
}

void Digital::getData(double stor) {
    storage = stor;
    //Sale::getData();
}

void Digital::putData() {
    cout << "Total storage: " << storage << endl;
    //Sale::putData();
}

void Digital::setStorage(double storage) {
    storage = storage;
}

double Digital::getStorage() {
    return storage;
}

Digital::Digital(string tit, double p, float a, float b, float c, double stor) : Publication(tit, p), Sale(a) {
    storage = stor;
}
