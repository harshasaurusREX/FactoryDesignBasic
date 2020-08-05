#include "vshape.h"

static VShape * VShape::GetShape(  Shape a )
{
    if(a == CIRCLE)
        return new Circle() ;
    else if (a == SQUARE)
        return new Square();
    else return new Rectangle() ;
}

VShape::VShape()
{
    //ctor
}

VShape::~VShape()
{
    //dtor
}
