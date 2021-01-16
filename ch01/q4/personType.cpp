
//************************************************************
// Author: D.S. Malik
// Modified by: Ian Schafer
// Implemenation file personType
//************************************************************

#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

//Default constructor
personType::personType()
{
    firstName = "";
    lastName = "";
}

//Constructor with parameters
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}

void personType::setFirstName(string f)
{
    firstName = f;
}

void personType::setLastName(string l)
{
    lastName = l;
}

int personType::checkFirstName(string f)
{
    if (f == firstName)
        return 1;
    else
        return 0;
}

int personType::checkLastName(string l)
{
    if (l == lastName)
        return 1;
    else
        return 0;
}