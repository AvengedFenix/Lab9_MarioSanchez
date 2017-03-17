#pragma once
#include "Bender.h"
#include "Earthbenders.h"
#include "Firebenders.h"
#include "Waterbenders.h"

class Airbenders : public Bender{
private:


public:
    Airbenders ();
    Airbenders (string,int,int,int,int,int);
    virtual void ataqueRegular(Bender*);
    virtual void ataqueEspecial(Bender*);
    ~Airbenders ();
};
