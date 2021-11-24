#ifndef UNIT_H
#define UNIT_H

#include "distance.h"

namespace Distance
{

    namespace Unit
    {
        MyDistance operator"" _km(const char *k)
        {
            return MyDistance(1000 * std::stold(k));
        }
        MyDistance operator"" _m(const char *m)
        {
            return MyDistance(std::stold(m));
        }
        MyDistance operator"" _dm(const char *d)
        {
            return MyDistance(std::stold(d) / 10);
        }
        MyDistance operator"" _cm(const char *c)
        {
            return MyDistance(std::stold(c) / 100);
        }
    }
}

#endif