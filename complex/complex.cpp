#include "complex.h"
#include <cmath>

const double pi = 3.141592653589793;

complex::complex (void)
{
    real=0;
    imag=0;
    arg = 0;
    mod = 0;
}

double complex::get_real_part (void)
{
    return real;
}

double complex::get_imag_part (void)
{
    return imag;
}

double complex::get_mod (void)
{
    return mod;
}

double complex::get_arg (void)
{
    return arg;
}

void complex::assignWithAlg(double re, double im)
{
    real = re;
    imag = im;
    mod = sqrt(real*real + imag*imag);
    arg = atan(imag/real) * (180 / pi);
}

void complex::assignWithExp(double module, double argument)
{
    mod = module;
    arg = argument;
    real = mod*cos(arg*pi/180);
    imag = mod*sin(arg*pi/180);
}

complex complex::operator + (complex b)
{
    complex c;
    c.real = real + b.real;
    c.imag = imag + b.imag;
    c.arg = atan(c.imag/c.real) * (180 / pi);
    c.mod = sqrt (c.real * c.real + c.imag * c.imag);
    return c;
}

complex complex::operator - (complex b)
{
    complex c;
    c.real = real - b.real;
    c.imag = imag - b.imag;
    c.arg = atan(c.imag/c.real) * (180 / pi);
    c.mod = sqrt (c.real * c.real + c.imag * c.imag);
    return c;
}

complex complex::operator * (complex b)
{
    complex c;
    c.mod = mod * b.mod;
    c.arg = arg + b.arg;
    c.real = c.mod * cos (c.arg*pi/180);
    c.imag = c.mod * sin (c.arg*pi/180);
    return c;
}

complex complex::operator / (complex b)
{
    complex c;
    c.mod = mod / b.mod;
    c.arg = arg - b.arg;
    c.real = c.mod * cos (c.arg*pi/180);
    c.imag = c.mod * sin (c.arg*pi/180);
    return c;
}
