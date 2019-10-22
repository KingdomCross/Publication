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
    void getData(int page);
    void putData();
    void setPage(int page);
    int getPage();
    Book(string title = "", double p = 0, float a = 0, int page = 0);
protected:
    int pageCount;
};


#endif //PUBLICATION_BOOK_H
