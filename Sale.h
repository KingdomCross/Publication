//
// Created by alexc on 10/19/2019.
//

#ifndef PUBLICATION_SALE_H
#define PUBLICATION_SALE_H

#include <iostream>

using namespace std;

class Sale {
public:
    void print() const;
    void getData(float a);
    void putData();
    void setSale(float a, float b, float c);
    float getSale();
    Sale(float a);
    float saleArray[3] = {0, 0, 0};
protected:
};


#endif //PUBLICATION_SALE_H
