#include "quadratic-equation.h"
#include "def.h"
#include <iostream>
#include <string>

void instruction () {
    CONSOLE_OUT << "Welcome to mathematical tool. You can find any mathematical formulas and type your equations" << END_LINE
              << "                |                " << END_LINE
              << "               |/                " << END_LINE
              << "Firstly you should write type of your request: quadratic equation(QUADequation), equation (equation), formula(formula) or info(info) " << END_LINE;

    str type, command;
    str first_letter, name_of_figure;
    command.resize(9);
    CONSOLE_OUT << "Me: ";
    INPUT >> type;
    while (true) {
        if (type == "info") {
            CONSOLE_OUT << "To see all mathematical operations you can use, type '/mall' " << END_LINE
                      << "If you want to write your equation, type /eq " << END_LINE
                      << "If you want to find formulas, type '/formulas' for detail info" << END_LINE;
            CONSOLE_OUT << END_LINE;
            CONSOLE_OUT << "Me: ";
            INPUT >> command;
            if (command == "/mall") {
                CONSOLE_OUT << END_LINE;
                CONSOLE_OUT << "example : sum a b ->  a + b " << END_LINE
                          << "example : abs a -> |a| " << END_LINE
                          << "example : dif a b -> a - b " << END_LINE
                          << "example : mul a b -> a * b " << END_LINE
                          << "example : << a b -> a << b  " << END_LINE
                          << "example : power a b -> a ^ b " << END_LINE
                          << "-------------------------------------";
                CONSOLE_OUT << END_LINE;
                CONSOLE_OUT << "abs a - |a|" << END_LINE
                          << "sqrt a - quadratic root of a" << END_LINE
                          << "pow a n - a ^ n" << END_LINE
                          << "sum a b - a + b" << END_LINE
                          << "dif a b - a - b" << END_LINE
                          << "mul a b - a * b" << END_LINE
                          << "div a b - a / b" << END_LINE
                          << "mod a b - a % b" << END_LINE;
                CONSOLE_OUT << END_LINE;
            } else if (command == "/formulas") {
                CONSOLE_OUT << END_LINE;
                CONSOLE_OUT << "example : V cube " << END_LINE
                          << "example : S parallelepiped " << END_LINE;
                CONSOLE_OUT << END_LINE;
            }
            if (command == "/eq")
            {
                CONSOLE_OUT << "Enter your equation" << END_LINE
                          << "If you will want to exit, type /end" << END_LINE;
                break;
            }

            else if (command != "/mall" && command != "/eq" && command != "/formulas" && command != "/end"){
                CONSOLE_OUT << "You wrote incorrect command type, try to rewrite it" << END_LINE;
                CONSOLE_OUT << END_LINE;
            }

        }
        else if (type == "equation")
        {
            CONSOLE_OUT << "Enter your equation" << END_LINE
                      << "If you will want to exit, type /end" << END_LINE;
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
            INPUT >> first_letter >> name_of_figure;
            if(first_letter == "S" || first_letter == "s")
            {
                if (name_of_figure == "rectangle")
                {
                    CONSOLE_OUT << " = a * b";
                }
                else if (name_of_figure == "square")
                {
                    CONSOLE_OUT << " = a * a";
                }
                if (name_of_figure == "arbitrary_triangle")
                {
                    CONSOLE_OUT << " = 1/2 * a * h" << END_LINE
                    << " = 1/2 * a * b * sin(z)" << END_LINE
                    << " = sqrt(p * (p - a)*(p - b)*(p - c) )" << END_LINE
                    << " = a * b * c / 4 * R " << END_LINE
                    << " = r * p" << END_LINE;
                }
                else if (name_of_figure == "right_triangle")
                {
                    CONSOLE_OUT << " = 1/2 * a * b" << END_LINE
                    << " = 1/2 * BA * CA * sin(A)" << END_LINE;
                }
                if (name_of_figure == "equilateral_triangle")
                {
                    CONSOLE_OUT << " = (a ^ 2 * sqrt(3) ) / 4";
                }
                else if (name_of_figure == "arbitrary_quadrilateral")
                {
                    CONSOLE_OUT << " = 1/2 * d1 * d2 * sin(z)";
                }
                if (name_of_figure == "parallelogram")
                {
                    CONSOLE_OUT << " = a * h" << END_LINE
                    << " = a * b * sin(z)" << END_LINE
                    << " = 1/2 * d1 * d2 * sin(z)" << END_LINE;
                }
                else if (name_of_figure == "trapeze")
                {
                    CONSOLE_OUT << " = ( (a + b) / 2 ) * h" << END_LINE;
                    CONSOLE_OUT << " = a * h" << END_LINE
                              << " = 1/2 * d1 * d2 * sin(z)" << END_LINE;
                }
            }
        }
    }
}