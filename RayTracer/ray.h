#ifndef RAY_H
#define RAY_H

#include "vec3.h"

// See ray class as a computation of what colour is seen along a ray
// Ray function: P(t) = A + tB
// Where P = 3D position along a line   A = ray origin  b = Ray direction   parameter t = real number
// plugging in different t and P(t) moved the point along the ray. Negative t values and you can go anywhere on the 3D line
// Positive t values = only get to parts in front of A
// https://raytracing.github.io/images/fig-1.02-lerp.jpg <--- this is often called a half-line ray

class ray {
    public:
        ray() {}
        ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

        point3 origin() const { return orig; }
        vec3 direction() const { return dir; }

        point3 at(double t) const {
            return orig + t * dir;
        } 

    public:
        point3 orig;        
        vec3 dir;           // class we made in ray.h file
};

#endif