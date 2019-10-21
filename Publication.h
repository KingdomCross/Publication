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
    void setData();
    void getData();
    void setTitle(string title);
    string getTitle();
    void setPrice(double p);
    double getPrice();
    Publication(string s = "", double p = 0.0);
protected:
    string title;
    double price;
};


#endif //PUBLICATION_PUBLICATION_H
