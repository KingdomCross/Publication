//
// Created by alexc on 10/21/2019.
//

#ifndef PUBLICATION_DIGITAL_H
#define PUBLICATION_DIGITAL_H

#include "Publication.h"
#include "Sale.h"

class Digital: public Publication, public Sale{
public:
    void print() const;
    void getData(double stor);
    void putData();
    void setStorage(double storage);
    double getStorage();
    Digital(string title, double p, float unnamed, float unnamed1, float unnamed2, double stor);
protected:
    double storage;
};


#endif //PUBLICATION_DIGITAL_H
