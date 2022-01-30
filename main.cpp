#include <iostream>
#include <string>
#include "src/header/alevel.h"

using namespace ALevelN;

// Definition of methods that are located below main().
void SelectedALevel();

int main()
{
    std::cout << "UCAS GRADE CALCULATOR" << std::endl;
    std::cout << "Written by: @WillTheDeveloper and @colsak" << std::endl;

    int selection; // Create the variable for the selection below.

    std::cout << "Which qualification type are you doing?" << std::endl;
    std::cout << "[1] A Levels" << std::endl;
    std::cout << "[2] BTEC NQF" << std::endl;
    std::cout << "[3] BTEC QCF" << std::endl;
    std::cout << "[4] BTEC RQF" << std::endl;
    std::cout << "[5] Cambridge PREU" << std::endl;
    std::cout << "[6] Core maths" << std::endl;
    std::cout << "[7] OCR Cambridge Technical" << std::endl;
    std::cout << "[8] T Levels" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection; // Store the number entered by the user.

    switch (selection) {
        case 1:
            SelectedALevel();
            break;
    }
}

std::string Grades()
{
    std::string pts; // Create the variable for the input below to be passed to subsequent method.
    std::cout << "What grade did you get? ";
    std::cin >> pts;
    return pts;
}

void SelectedALevel()
{
    int selection;

    std::cout << "Which type of A Level?" << std::endl;
    std::cout << "[0] Not sure" << std::endl;
    std::cout << "[1] Standard A Levels" << std::endl;
    std::cout << "[2] A Level (9 Unit Award)" << std::endl;
    std::cout << "[3] A Level Double Award" << std::endl;
    std::cout << "[4] AS Level" << std::endl;
    std::cout << "[5] AS Level Double Award" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection;

    switch (selection) {
        case 1: {
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ALevel(pts) << " points." << std::endl;
            break;
        }
        case 2: {
            std::string pts;
            pts = Grades();
            ALevelN::ALevelNineUnitAward(pts);
            break;
        }
    }
}