#ifndef COMPLEX_H
#define COMPLEX_H

#include <cmath>

class complex
{
    public:
        complex (void);
        complex (double, double);
        complex operator + (complex);
        complex operator - (complex);
        complex operator * (complex);
        complex operator / (complex);
        bool operator == (complex);
        void assign(double, double);
        double get_real_part (void);
        double get_imag_part (void);
        double get_mod(void);
        double get_arg (void);
    private:
        double mod;
        double arg;
        double real;
        double imag;
};

#endif // COMPLEX_H
