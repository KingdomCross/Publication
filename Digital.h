//
// Created by alexc on 10/21/2019.
//

#ifndef PUBLICATION_DIGITAL_H
#define PUBLICATION_DIGITAL_H

#include "Publication.h"
#include "Sale.h"

class Digital: public Publication, public Sale{
public:
    void getData();
    void putData();
protected:
    double storage;
};


#endif //PUBLICATION_DIGITAL_H
