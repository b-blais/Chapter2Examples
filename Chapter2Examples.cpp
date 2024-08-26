/*
Title: Chapter 1 Assignment 3 - Chapter2Examples
File Name : Chapter2Assign3_Brion_Blais
Programmer : Brion Blais
Date : 08 / 2024
Requirements:
Write a program that has the following character variables:
first, middle,last, and firstName. Store your intitials and first name in these variables
then display them on the screen.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char firstInitial;
    char middleInitial;
    char lastInitial;
    string firstName;
    cout << "Please enter the initial of your first name:";
    cin >> firstInitial;
    cout << "Please enter the initial of your middle name:";
    cin >> middleInitial;
    cout << "Please enter the initial of your last name:";
    cin >> lastInitial;
    cout << "Your initals are: " << firstInitial << middleInitial << lastInitial << endl;
    cout << "Please enter your first name:";
    cin >> firstName;
    cout << "Your first name is : " << firstName;
    return 0;
}