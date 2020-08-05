#ifndef FACTORY_H
#define FACTORY_H
#include "vshape.h"


class Factory
{
    public:
        Factory();
        virtual ~Factory();
        static VShape * GetShape ( Shape a ) ;
    protected:
    private:
};

#endif // FACTORY_H
