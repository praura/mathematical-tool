#include <math.h>

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
        std::cout << "Enter coefficients in  your quadratic equation:" << std::endl;
        std::cout << " a: ";
        std::cin >> a;
        std::cout << " b: ";
        std::cin >> b;
        std::cout << " c: ";
        std::cin >> c;
        std::cout << std::endl;
    }

    void discriminant_finding()
    {
        discriminant = (b * b) - (4 * a * c);
        std::cout << "Discriminant is: " << discriminant << std::endl;
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
            std::cout << "No crossing found" << std::endl;
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

            std::cout << "Your quadratic equation x1: " << first_crossing_x1 << std::endl;

        if ( is_exist_x == false && is_exist_x1 == true && is_exist_x2 == true )

            std::cout << "Your quadratic equation x2: " << second_crossing_x2 << std::endl;

        if ( is_exist_x == true && is_exist_x1 == false && is_exist_x2 == false )
        {
            std::cout << "Your quadratic equation x: " << one_crossing_x << std::endl;
        }
    }
};