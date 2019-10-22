//
// Created by alexc on 10/19/2019.
//

#include "Publication.h"
#include "Sale.h"
#include "Book.h"

void Book::print() const {
    Publication::print();
}

void Book::getData(int page) {
    pageCount = page;
}

void Book::putData() {
    Publication:: putData();
    cout << "Total pages: " << pageCount << endl;
    Sale::putData();
    //Sale::putData();
}

void Book::setPage(int page) {
    pageCount = page;
}

int Book::getPage() {
    return pageCount;
}

Book::Book(string tit, double p, float a, int page) : Publication(tit, p), Sale(a) {
    pageCount = page;
}
