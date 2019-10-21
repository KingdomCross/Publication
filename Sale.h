//
// Created by alexc on 10/19/2019.
//

#ifndef PUBLICATION_SALE_H
#define PUBLICATION_SALE_H

#include "Book.h"

#include <iostream>

using namespace std;

class Sale {
public:
    void print() const;
    void setData();
    void getData();
    Sale(float array = [])
protected:
    float saleArray[];
};


#endif //PUBLICATION_SALE_H
