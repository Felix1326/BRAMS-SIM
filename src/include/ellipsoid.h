#pragma once
#ifndef ELLIPSOID_H
#define ELLIPSOID_H
#include "point.h"
class Ellipsoid
{
    Point m_focal1{};
    Point m_focal2{};
    double m_semi_major {};
public:
    Ellipsoid(double f1,double f2, double a) :m_focal1{f1}, m_focal2{f2}, m_semi_major{a} 
    {}
};
#endif
