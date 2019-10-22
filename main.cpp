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

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Book book("Hello World", 14.25, 14.25, 144);
    Book book1("Father Sonavabeth", 8.25, 8.25, 90);
    book1.Sale::getData(12.25);
    book1.Sale::getData(12.25);
    book1.Sale::getData(12.75);
    book1.Sale::getData(7.25);
    book1.putData();
    cout << endl;
    book.putData();
    return 0;
}