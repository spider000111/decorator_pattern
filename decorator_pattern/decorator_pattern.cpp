// decorator_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "addonDecorator.h"
#include "IBevrage.h"

int main()
{
    Espresso expressoo_start;
    caramel my_caramel(expressoo_start);

    milk added_milk(my_caramel);
    printf("cost of espresso with caremel %d\n", my_caramel.get_cost());

    printf("cost of espresso with caremel and milk %d\n", added_milk.get_cost());

    Tea tea_base;

    milk tea_milk(tea_base);
    printf("cost of tea with milk %d\n", tea_milk.get_cost());

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
