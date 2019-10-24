//
// Created by alexc on 10/19/2019.
//

#include "Sale.h"

void Sale::getData() {
    for (int i = 0; i < 3; i++){
        cout << "Enter sales value for month " << i << endl;
        cin >> saleArray[i];
    }
}

void Sale::putData() {
    cout << "Last 3 sales: $" << saleArray[0] << ", $" << saleArray[1] << ", $" << saleArray[2] << endl;
}
