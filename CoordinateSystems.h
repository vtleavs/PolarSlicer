
#ifndef _COORD_SYS_
#define _COORD_SYS_

#include <math.h>
#include <iostream>

#include "Settings.h"

class PrinterCoordinate
{
    public:
        PrinterCoordinate(double _p, double _r, double _z): p(_p), r(_r), z(_z) {}
        double get_p() { return p; }
        double get_r() { return r; }
        double get_z() { return z; }

        friend std::ostream & operator<<(std::ostream & out, PrinterCoordinate point)
        {
            out << "Printer: [" << point.get_p() << "," << point.get_r() << "," << point.get_z() << "]";
            return out;
        }

    private:
        double p;
        double r;
        double z;
};

class PolarCoordinate
{
    public:
        PolarCoordinate(double _t, double _r, double _z): theta(_t), r(_r), z(_z) {}
        double get_theta() { return theta; }
        double get_r() { return r; }
        double get_z() { return z; }

        friend std::ostream & operator<<(std::ostream & out, PolarCoordinate point)
        {
            out << "Printer: [" << point.get_theta() << "," << point.get_r() << "," << point.get_z() << "]";
            return out;
        }

    private:
        double theta;
        double r;
        double z;
};


class CartesianCoordinate
{
    public:
        CartesianCoordinate(double _x, double _y, double _z): x(_x), y(_y), z(_z) {}
        double get_x() { return x; }
        double get_y() { return y; }
        double get_z() { return z; }

        friend std::ostream & operator<<(std::ostream & out, CartesianCoordinate point)
        {
            out << "Printer: [" << point.get_x() << "," << point.get_y() << "," << point.get_z() << "]";
            return out;
        }

    private:
        double x;
        double y;
        double z;
};

PolarCoordinate cartesian_to_polar(CartesianCoordinate point)
{
    double theta = atan2(point.get_x(),point.get_y()) * 180.0/PI;
    double r = sqrt(pow(point.get_x(), 2)+pow(point.get_y(), 2));
    return PolarCoordinate(theta, r, point.get_z());
}

PrinterCoordinate polar_to_printer(PolarCoordinate point)
{
}

CartesianCoordinate polar_to_cartesian(PolarCoordinate point)
{
    double theta = point.get_theta() * PI/180.0;
    double x = point.get_r() * sin(theta);
    double y = point.get_r() * cos(theta);
    return CartesianCoordinate(x, y, point.get_z());
}

PrinterCoordinate cartesian_to_printer(CartesianCoordinate point)
{
    PolarCoordinate polar_point = cartesian_to_polar(point);
    return polar_to_printer(polar_point);
}

#endif // _COORD_SYS_
