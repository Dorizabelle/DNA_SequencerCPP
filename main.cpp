//Dorizabelle Northecide
//Software Development
//HW01

#include <iostream>
#include "Organism.cpp"
using namespace std;

void gui();
Organism variable(" ", 0, 0, 0, 0);
string s;
int selectedOrganism;
int organismLength;
int main(){
    gui();
    variable.Initialization(selectedOrganism);
    s = variable.Sequence(organismLength);
    cout << s;
    return 0;
}

void gui(){
    cout << "Please select the organism: \n"
    << "(1) Chicken\n"
    << "(2) E. coli\n"
    << "(3) Grasshopper\n"
    << "(4) Human\n"
    << "(5) Maize\n"
    << "(6) Octopus\n"
    << "(7) Rat\n"
    << "(8) Sea Urchin\n"
    << "(9) Wheat\n"
    << "(10) Yeast\n"
    << "(11) φX174\n";
    cin >> selectedOrganism;
    cout <<"Selected organism is" + selectedOrganism + "Please enter the length: \n";
    cin >> organismLength;
}
