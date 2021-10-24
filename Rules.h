#include "quadratic-equation.h"
#include "typedef.h"
#include <iostream>
#include <string>

void instruction () {
    std::cout << "Welcome to mathematical tool. You can find any mathematical formulas and type your equations" << std::endl
              << "                |                " << std::endl
              << "               |/                " << std::endl
              << "Firstly you should write type of your request: quadratic equation(QUADequation), equation (equation), formula(formula) or info(info) " << std::endl;

    str type, command;
    str first_letter, name_of_figure;
    command.resize(9);
    std::cout << "Me: ";
    std::cin >> type;
    while (true) {
        if (type == "info") {
            std::cout << "To see all mathematical operations you can use, type '/mall' " << std::endl
                      << "If you want to write your equation, type /eq " << std::endl
                      << "If you want to find formulas, type '/formulas' for detail info" << std::endl;
            std::cout << std::endl;
            std::cout << "Me: ";
            std::cin >> command;
            if (command == "/mall") {
                std::cout << std::endl;
                std::cout << "example : sum a b ->  a + b " << std::endl
                          << "example : abs a -> |a| " << std::endl
                          << "example : dif a b -> a - b " << std::endl
                          << "example : mul a b -> a * b " << std::endl
                          << "example : << a b -> a << b  " << std::endl
                          << "example : power a b -> a ^ b " << std::endl
                          << "-------------------------------------";
                std::cout << std::endl;
                std::cout << "abs a - |a|" << std::endl
                          << "sqrt a - quadratic root of a" << std::endl
                          << "pow a n - a ^ n" << std::endl
                          << "sum a b - a + b" << std::endl
                          << "dif a b - a - b" << std::endl
                          << "mul a b - a * b" << std::endl
                          << "div a b - a / b" << std::endl
                          << "mod a b - a % b" << std::endl;
                std::cout << std::endl;
            } else if (command == "/formulas") {
                std::cout << std::endl;
                std::cout << "example : V cube " << std::endl
                          << "example : S parallelepiped " << std::endl;
                std::cout << std::endl;
            }
            if (command == "/eq")
            {
                std::cout << "Enter your equation" << std::endl
                          << "If you will want to exit, type /end" << std::endl;
                break;
            }

            else if (command != "/mall" && command != "/eq" && command != "/formulas" && command != "/end"){
                std::cout << "You wrote incorrect command type, try to rewrite it" << std::endl;
                std::cout << std::endl;
            }

        }
        else if (type == "equation")
        {
            std::cout << "Enter your equation" << std::endl
                      << "If you will want to exit, type /end" << std::endl;
            break;
        }
        if (type == "QUADequation")
        {
                quadratic_equation data;
                data.console_read();
                data.discriminant_finding();
                data.crossing_with_ox();
                data.x_out();
        }
        else if (type == "formula")
        {
            std::cin >> first_letter >> name_of_figure;
            if(first_letter == "S" || first_letter == "s")
            {
                if (name_of_figure == "rectangle")
                {
                    std::cout << " = a * b";
                }
                else if (name_of_figure == "square")
                {
                    std::cout << " = a * a";
                }
                if (name_of_figure == "arbitrary_triangle")
                {
                    std::cout << " = 1/2 * a * h" << std::endl
                    << " = 1/2 * a * b * sin(z)" << std::endl
                    << " = sqrt(p * (p - a)*(p - b)*(p - c) )" << std::endl
                    << " = a * b * c / 4 * R " << std::endl
                    << " = r * p" << std::endl;
                }
                else if (name_of_figure == "right_triangle")
                {
                    std::cout << " = 1/2 * a * b" << std::endl
                    << " = 1/2 * BA * CA * sin(A)" << std::endl;
                }
                if (name_of_figure == "equilateral_triangle")
                {
                    std::cout << " = (a ^ 2 * sqrt(3) ) / 4";
                }
                else if (name_of_figure == "arbitrary_quadrilateral")
                {
                    std::cout << " = 1/2 * d1 * d2 * sin(z)";
                }
                if (name_of_figure == "parallelogram")
                {
                    std::cout << " = a * h" << std::endl
                    << " = a * b * sin(z)" << std::endl
                    << " = 1/2 * d1 * d2 * sin(z)" << std::endl;
                }
                else if (name_of_figure == "trapeze")
                {
                    std::cout << " = ( (a + b) / 2 ) * h" << std::endl;
                    std::cout << " = a * h" << std::endl
                              << " = 1/2 * d1 * d2 * sin(z)" << std::endl;
                }
            }
        }
    }
}