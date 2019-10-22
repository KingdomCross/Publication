//
// Created by alexc on 10/19/2019.
//

#include "Publication.h"
#include <iostream>

using namespace std;

void Publication::print() const {

}

void Publication::getData() {

}

void Publication::putData() {
    cout << "Title: " << title << endl;
    cout << "Price: $" << price << endl;
}

void Publication::setTitle(string tit) {
    title = tit;
}

string Publication::getTitle() {
    return title;
}

void Publication::setPrice(double p) {
    price = p;
}

double Publication::getPrice() {
    return price;
}

Publication::Publication(string tit, double p) {
    title = tit;
    price = p;
}
