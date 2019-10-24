//
// Created by alexc on 10/19/2019.
//

#include "Publication.h"
#include "Sale.h"
#include "Book.h"

void Book::getData() {
    Publication::getData();
    Sale::getData();
    cout << "Enter page number: " << endl;
    cin >> pageCount;
}

void Book::putData() {
    Publication:: putData();
    cout << "Total pages: " << pageCount << endl;
    Sale::putData();
}
