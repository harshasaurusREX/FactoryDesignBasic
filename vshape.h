#ifndef VSHAPE_H
#define VSHAPE_H

#include <iostream>

using namespace std ;

enum Shape
{
    CIRCLE = 0 ,
    SQUARE,
    RECTANGLE
};



class VShape
{
public:
    VShape();
    virtual ~VShape();
    virtual void Draw() ;
    static VShape * GetShape( Shape a ) ;
protected:
private:
    VShape *vs;
};



class Circle : public VShape
{
    public :
    void Draw()
    {
        cout << "Drawing Circle " << endl ;
    }
};


class Square : public VShape
{
    public :
    void Draw()
    {
        cout << "Drawing Square " << endl ;
    }
};


class Rectangle : public VShape
{
    public :
    void Draw()
    {
        cout << "Drawing Rectangle " << endl ;
    }
};




#endif // VSHAPE_H
