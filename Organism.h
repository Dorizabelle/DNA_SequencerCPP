//Dorizabelle Northecide
//Software Development
//HW01

#include <string>
    class Organism
    {
        private:
            std::string name;
            double A;
            double G;
            double C;
            double T;

        public:
            Organism(std::string organismName, double organismA, double organismG, double organismC, double organismT);

            void SetOrganism(std::string organismName, double organismA, double organismG, double organismC, double organismT);
            
            std::string getname() const {return name;}
            double getA() const {return A;}
            double getG() const {return G;}
            double getC() const {return C;}
            double getT() const {return T;}

            void Initialization(int selection);
            std::string Sequence(int selectionB);
            
    };
