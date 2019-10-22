//
// Created by alexc on 10/19/2019.
//

#include "Sale.h"

void Sale::print() const {

}

void Sale::getData(float a) {
    if (saleArray[0] <= 0){
        saleArray[0] = a;
    }
    else if (saleArray[1] <= 0){
        saleArray[1] = a;
    }
    else if (saleArray[2] <= 0){
        saleArray[2] = a;
    }
    else {
        saleArray[0] = saleArray[1];
        saleArray[1] = saleArray[2];
        saleArray[2] = a;
    }
}

void Sale::putData() {
    cout << "Last 3 sales: $" << saleArray[0] << ", $" << saleArray[1] << ", $" << saleArray[2] << endl;
}

void Sale::setSale(float a, float b, float c) {
    saleArray[0] = a;
    saleArray[1] = b;
    saleArray[2] = c;
}

float Sale::getSale() {
    return saleArray[0];
}

Sale::Sale(float a) {
    if (saleArray[0] <= 0){
        saleArray[0] = a;
    }
    else if (saleArray[1] <= 0){
        saleArray[1] = a;
    }
    else if (saleArray[2] <= 0){
        saleArray[2] = a;
    }
    else {
        saleArray[0] = saleArray[1];
        saleArray[1] = saleArray[2];
        saleArray[2] = a;
    }
}
