#include "Vector3.hpp"
#include <assert.h>
#include <stdio.h>

using namespace matrix;

int main()
{
    Vector3f a(1, 0, 0);
    Vector3f b(0, 1, 0);
    Vector3f c = a.cross(b);
    return 0;
}
