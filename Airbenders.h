#pragma once

class Airbenders : public Benders{
private:


public:
    Airbenders ();
    Airbenders (string,int,int,int,int,int);
    virtual void ataqueRegular(Bender*);
    virtual void ataqueEspecial(Bender*);
    ~Airbenders ();
};
