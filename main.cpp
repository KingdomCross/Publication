/**
 * Alex Chheng
 * 10/19/2019
 * CECS 282 Lab 6.2
 */
#include "Sale.h"
#include "Publication.h"
#include "Book.h"
#include "Digital.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Book book;
    Digital digital;
    book.getData();
    book.putData();
    cout << endl;
    digital.getData();
    digital.putData();
    cout << endl;
    return 0;
}