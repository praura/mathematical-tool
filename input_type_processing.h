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
        std::cin >> operation;

            if (operation == "sum") {
                {
                    std::cin >> first_num >> second_num;
                    std::cout << " = " << first_num + second_num << std::endl;
                }
            }

            else if (operation == "abs")
            {
                std::cin >> first_num;
                    std::cout << " = " << abs(first_num) << std::endl;
            }

            if (operation == "sqrt")
            {
                std::cin >> first_num;
                    std::cout << " = " << sqrt(first_num) << std::endl;
            }

            else if (operation == "pow")
            {
                std::cin >> first_num >> second_num;
                    std::cout << " = " << pow(first_num, second_num) << std::endl;
            }

            if (operation == "dif")
            {
                std::cin >> first_num >> second_num;
                    std::cout << " = " << first_num - second_num << std::endl;
            }

            else if (operation == "mul")
            {
                std::cin >> first_num >> second_num;
                    std::cout << " = " << first_num * second_num << std::endl;
            }

            if (operation == "div")
            {
                std::cin >> first_num >> second_num;
                    std::cout << " = " << first_num / second_num << std::endl;
            }

            else if (operation == "mod")
            {
                std::cin >> first_num >> second_num;
                    std::cout << " = " << first_num % second_num << std::endl;
            }
            if (operation == "/end")
            {
                break;
            }


        }

}