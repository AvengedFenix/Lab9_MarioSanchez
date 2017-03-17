#pragma once
#include "Bender.h"
#include "Earthbenders.h"
#include "Airbenders.h"
#include "Waterbenders.h"

class Firebenders : public Bender{
private:
    /* data */

public:
    Firebenders ();
    Firebenders(string,int,int,int,int,int);
    virtual void ataqueRegular(Bender*);
    virtual void ataqueEspecial(Bender*);
    ~Firebenders ();
};
