
#include <string>

#include "CoordinateSystems.h"

class PrinterSettings
{
    public:
        void set_z_height(double val){ z_height = val; }
        double get_z_height(){ return z_height; }



    private:
        double z_height;
        double z_step_length;

        double r_length;
        double r_step_length;

        double p_radius;
        double p_step_degrees;

        int extruder_count;
        double e_step_length;
        char extruder_temp;

        bool heated_bed;
        char heated_bed_temp;

};

class BuildSettings()
{
    public:

    private:
        std::string
};
