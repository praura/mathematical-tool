#include <math.h>
#include "def.h"

class quadratic_equation {
public:
    bool is_exist_x;
    bool is_exist_x1;
    bool is_exist_x2;
    int a;
    int b;
    int c;
    int discriminant;
    double first_crossing_x1;
    double second_crossing_x2;
    double one_crossing_x;
    void console_read()
    {
        CONSOLE_OUT << "Enter coefficients in  your quadratic equation:" << END_LINE;
        CONSOLE_OUT << " a: ";
        INPUT >> a;
        CONSOLE_OUT << " b: ";
        INPUT >> b;
        CONSOLE_OUT << " c: ";
        INPUT >> c;
        CONSOLE_OUT << END_LINE;
    }

    void discriminant_finding()
    {
        discriminant = (b * b) - (4 * a * c);
        CONSOLE_OUT << "Discriminant is: " << discriminant << END_LINE;
    }

    void crossing_with_ox()
    {
        if ( discriminant > 0 )
        {
            first_crossing_x1 = (((- b) - (sqrt(discriminant))) / (2 * a));
            is_exist_x1 = true;
            second_crossing_x2 = (((- b) + (sqrt(discriminant))) / (2 * a));
            is_exist_x2 = true;
            is_exist_x = false;
        }
        else if ( discriminant < 0 )
        {
            CONSOLE_OUT << "No crossing found" << END_LINE;
            is_exist_x1 = false;
            is_exist_x2 = false;
            is_exist_x = false;
        }
        if ( discriminant == 0 )
        {
            is_exist_x1 = false;
            is_exist_x2 = false;
            is_exist_x = true;
            one_crossing_x = (- b) / (2 * a);
        }
    }

    void x_out ()
    {
        if ( is_exist_x == false && is_exist_x1 == true && is_exist_x2 == true )

            CONSOLE_OUT << "Your quadratic equation x1: " << first_crossing_x1 << END_LINE;

        if ( is_exist_x == false && is_exist_x1 == true && is_exist_x2 == true )

            CONSOLE_OUT << "Your quadratic equation x2: " << second_crossing_x2 << END_LINE;

        if ( is_exist_x == true && is_exist_x1 == false && is_exist_x2 == false )
        {
            CONSOLE_OUT << "Your quadratic equation x: " << one_crossing_x << END_LINE;
        }
    }
};