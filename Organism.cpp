//Dorizabelle Northecide
//Software Development
//HW01

#include <iostream>
#include "Organism.h"
#include <stdlib.h>

Organism::Organism(std::string organismName, double organismA, double organismG, double organismT, double organismC)
{
    SetOrganism(organismName, organismA, organismG, organismT, organismC);
}

void Organism::SetOrganism(std::string organismName, double organismA, double organismG, double organismT, double organismC)
{
    name = organismName;
    A = organismA;
    G = organismG;
    C = organismC;
    T = organismT;
}

void Organism::Initialization(int selection)
{
    switch(selection)
    {
        case 1:
            SetOrganism("Chicken", .28, .22, .284, .216);  
            break;  
        case 2:
            SetOrganism("E. Coli", .247, .260, .236, .257);
            break;
        case 3:
            SetOrganism("Grasshopper", .293, .205, .293, .207);
            break;
        case 4:
            SetOrganism("Human", .293, .207,.300,.200);
            break;
        case 5:
            SetOrganism("Maize", .268, .228, .272,.232);
            break;
        case 6:
            SetOrganism("organismCtopus", .332,.176, .316, .176);
            break;
        case 7:
            SetOrganism("Rat", .286,.214,.284,.205);
            break;
        case 8:
            SetOrganism("Sea Urchin", .328, .177, .321,.173);
            break;
        case 9:
            SetOrganism("Wheat", .273, .227, .271, .228);
            break;
        case 10:
            SetOrganism("Yeast", .313, .187,.329,.171);
            break;
        case 11:
            SetOrganism("φX174", .240, .233, .312,.215);
            break;
        default:
            std::cout <<"invalid selection restart the prorganismGram\n";
    }
}
std::string Organism::Sequence(int selectionB)
{
    std::string strand;
    int Selection;
    int aPercent = 0;
    int gPercent = 0;
    int cPercent = 0;
    int tPercent = 0;
    for(int i = 0; i < selectionB; i++)
    {    
        Selection = (rand() %  4) + 1;
        switch(Selection)
        {
            case 1:
            if(aPercent < (A * selectionB))
            {
                strand.append("A");
                aPercent ++;
            }
            else{
                i--;
            }
            break;
            case 2:
             if(gPercent < (G * selectionB))
             {
                strand.append("G");
                gPercent ++;
            }
            else
            {
                i--;
            }
            break;
            case 3:
            if(cPercent < (C * selectionB))
            {
                strand.append("C");
                cPercent ++;
            }
            else{
                i--;
            }
            break;
            case 4: 
            if(tPercent < (T * selectionB))
            {
                strand.append("T");
                tPercent ++;
            }
            else
            {
                i--;
            }
            break;
        }
        
    }
    
    std::cout << "Percentage of A: %" << double(aPercent) / selectionB * 100<<"\n"
              << "Percentage of G: %" << double(gPercent) / selectionB * 100<<"\n"
              << "Percentage of C: %" << double(cPercent) / selectionB * 100<<"\n"
              << "Percentage of T: %" << double(tPercent) / selectionB * 100<<"\n";
    return strand;
}