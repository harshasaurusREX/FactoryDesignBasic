#include <iostream>
#include "vshape.h"
using namespace std;

int main()
{
    VShape * circle = (VShape::GetShape(CIRCLE));

    circle->Draw() ;

    return 0;
}
