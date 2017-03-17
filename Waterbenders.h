#pragma once
#include "Bender.h"
#include "Earthbenders.h"
#include "Firebenders.h"
#include "Airbenders.h"

class Waterbenders : public Bender{
private:
    /* data */

public:
    Waterbenders ();
    Waterbenders(string,int,int,int,int,int);
    virtual void ataqueRegular(Bender*);
    virtual void ataqueEspecial(Bender*);
    void heal();
    ~Waterbenders ();
};
