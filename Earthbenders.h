#pragma once
#include "Bender.h"
#include "Airbenders.h"
#include "Firebenders.h"
#include "Waterbenders.h"

class Earthbenders : public Bender{
private:
    /* data */

public:
    Earthbenders ();
    Earthbenders(string,int,int,int,int,int);
    virtual void ataqueRegular(Bender*);
    virtual void ataqueEspecial(Bender*);
    ~Earthbenders ();
};
