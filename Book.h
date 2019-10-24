//
// Created by alexc on 10/19/2019.
//

#ifndef PUBLICATION_BOOK_H
#define PUBLICATION_BOOK_H

#include "Publication.h"
#include "Sale.h"

class Book: public Publication, public Sale {
public:
    void getData();
    void putData();
protected:
    int pageCount;
};


#endif //PUBLICATION_BOOK_H
