#include <iostream>
#include "personType.h"

using namespace std;

int main()
{
    personType person;
    person.setFirstName("Mohamed");
    person.setLastName("Alkhateb");
    person.print();
    puts("");
    
    if (person.checkFirstName("Mohamed"))
    {
        cout << "Mohamed is the first name" << endl;
    }
    if (person.checkLastName("kidman"))
    {
        cout << "kidman is the last name" << endl;
    }
    return 0;
}
