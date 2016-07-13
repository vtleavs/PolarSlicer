
class PrinterCoordinate
{
    public:

    private:
        double p;
        double r;
        double z;
};

class PolarCoordinate
{
    public:

    private:
        double theta;
        double y;
        double z;
};

class CartesianCoordinate
{
    public:

    private:
        double x;
        double y;
        double z;
};

inline PrinterCoordinate cartesian_to_printer(CartesianCoordinate point)
{
}

inline PolarCoordinate cartesian_to_polar(CartesianCoordinate point)
{
}

inline PrinterCoordinate polar_to_printer(PolarCoordinate point)
{
}

inline PrinterCartesian polar_to_cartesian(PolarCoordinate point)
{
}
