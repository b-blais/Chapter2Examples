/*
Title: Chapter 1 Assignment 3 - Chapter2Examples
File Name : Chapter2Assign3_Brion_Blais
Programmer : Brion Blais
Date : 08 / 2024
Requirements:
Write a program that has the following character variables:
first, middle, and last. Store your intitials in these variables
then display them on the screen.
*/

#include <iostream>
using namespace std;

int main()
{
    char firstInitial;
    char middleInitial;
    char lastInitial;
    cout << "Please enter the initial of your first name:";
    cin >> firstInitial;
    cout << "Please enter the initial of your middle name:";
    cin >> middleInitial;
    cout << "Please enter the initial of your last name:";
    cin >> lastInitial;
    cout << "Your initals are: " << firstInitial << middleInitial << lastInitial;
    return 0;
}