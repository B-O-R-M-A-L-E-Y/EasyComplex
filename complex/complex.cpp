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
    arg = atan2(imag, real);
}

void complex::assignWithExp(double module, double argument)
{
    mod = module;
    arg = argument;
    real = mod*cos(arg);
    imag = mod*sin(arg);
}

complex complex::operator + (complex b)
{
    complex c;
    c.real = real + b.real;
    c.imag = imag + b.imag;
    c.arg = atan2 (c.imag, c.real);
    c.mod = sqrt (c.real * c.real + c.imag * c.imag);
    return c;
}

complex complex::operator - (complex b)
{
    complex c;
    c.real = real - b.real;
    c.imag = imag - b.imag;
    c.arg = atan2 (c.imag, c.real);
    c.mod = sqrt (c.real * c.real + c.imag * c.imag);
    return c;
}

complex complex::operator * (complex b)
{
    complex c;
    c.mod = mod * b.mod;
    c.arg = arg + b.arg;
    while (c.arg > 2. * pi) c.arg -= 2. * pi;
    while (c.arg < 0 ) c.arg += 2. * pi;
    c.real = c.mod * cos (c.arg);
    c.imag = c.mod * sin (c.arg);
    return c;
}

complex complex::operator / (complex b)
{
    complex c;
    c.mod = mod / b.mod;
    c.arg = arg - b.arg;
    while (c.arg > 2. * pi) c.arg -= 2. * pi;
    while (c.arg < 0 ) c.arg += 2. * pi;
    c.real = c.mod * cos (c.arg);
    c.imag = c.mod * sin (c.arg);
    return c;
}
