//
// Created by david on 11/8/20.
//
#define E (2.71828182845904)

double Exponent(int x) {
    double eExpo = 1;
    if (x > -1) {
        for (int i = 0; i < x; ++i) {
            eExpo *= E;
        }
        return eExpo;
    } else {
        for (int i = 0; i < (-1 * x); ++i) {
            eExpo /= E;

        }
        return eExpo;

    }
}

double Power(double x, int y) {
    double xExpo = 1;
    if (y >= 0) {

        if (x >= 0) {
            for (int i = 0; i < y; ++i) {
                xExpo *= x;
            }
            return xExpo;
        } else {
            for (int i = 0; i < y; ++i) {
                xExpo *= -x;

            }
            return xExpo;

        }
    }
    else{
        if (x >= 0) {
            for (int i = 0; i < y; ++i) {
                xExpo /= x;
            }
            return xExpo;
        } else {
            for (int i = 0; i < y; ++i) {
                xExpo /= -x;

            }
            return xExpo;

        }
    }
}

    int down (double x){
    int t = (int) x;
    if(t>x)
        return t-1;
    else
        return t;
    }


