//
// Created by alexc on 10/19/2019.
//

#ifndef PUBLICATION_BOOK_H
#define PUBLICATION_BOOK_H

#include "Publication.h"
#include "Sale.h"

class Book: public Publication, public Sale {
public:
    void print() const;
    void setData();
    void getData();
    void setPage(int page);
    void getPage();
    void setDigital(double digital);
    void getDigital();
protected:
    int page;
    double digital;
};


#endif //PUBLICATION_BOOK_H
