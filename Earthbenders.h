#pragma #ifndef SYMBOL

class Earthbenders {
private:
    /* data */

public:
    Earthbenders ();
    Earthbenders(string,int,int,int,int,int);
    virtual void ataqueRegular(Bender*);
    virtual void ataqueEspecial(Bender*);
    ~Earthbenders ();
};
