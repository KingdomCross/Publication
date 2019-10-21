//
// Created by alexc on 10/19/2019.
//

#include "Publication.h"
#include "Sale.h"
#include "Book.h"

void Book::print() const {
    Publication::print();
}

void Book::setData() {
    Publication::setData();
}

void Book::getData() {
    Sale::getData();
}

void Book::setPage(int page) {

}

void Book::getPage() {

}

void Book::setDigital(double digital) {

}

void Book::getDigital() {

}
