//
// Created by alexc on 10/19/2019.
//

#ifndef PUBLICATION_PUBLICATION_H
#define PUBLICATION_PUBLICATION_H

#include <iostream>

using namespace std;

class Publication {
public:
    void print() const;
    void getData();
    void putData();
    void setTitle(string tit);
    string getTitle();
    void setPrice(double p);
    double getPrice();
    Publication(string tit, double p);
protected:
    string title;
    double price;
};


#endif //PUBLICATION_PUBLICATION_H
