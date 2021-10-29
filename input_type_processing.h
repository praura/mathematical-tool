#include <iostream>
#include "def.h"
#include <string>
#include <cmath>
#include <math.h>
#include <algorithm>

void input_type_processing ()
{

    str operation;
    int first_num, second_num;
    while (true) {
        INPUT >> operation;

            if (operation == "sum") {
                {
                    INPUT >> first_num >> second_num;
                    CONSOLE_OUT << " = " << first_num + second_num << END_LINE;
                }
            }

            else if (operation == "abs")
            {
                INPUT >> first_num;
                CONSOLE_OUT << " = " << abs(first_num) << END_LINE;
            }

            if (operation == "sqrt")
            {
                INPUT >> first_num;
                CONSOLE_OUT << " = " << sqrt(first_num) << END_LINE;
            }

            else if (operation == "pow")
            {
                INPUT >> first_num >> second_num;
                CONSOLE_OUT << " = " << pow(first_num, second_num) << END_LINE;
            }

            if (operation == "dif")
            {
                INPUT >> first_num >> second_num;
                CONSOLE_OUT << " = " << first_num - second_num << END_LINE;
            }

            else if (operation == "mul")
            {
                INPUT >> first_num >> second_num;
                CONSOLE_OUT << " = " << first_num * second_num << END_LINE;
            }

            if (operation == "div")
            {
                INPUT >> first_num >> second_num;
                CONSOLE_OUT << " = " << first_num / second_num << END_LINE;
            }

            else if (operation == "mod")
            {
                INPUT >> first_num >> second_num;
                CONSOLE_OUT << " = " << first_num % second_num << END_LINE;
            }
            if (operation == "/end")
            {
                break;
            }


        }

}