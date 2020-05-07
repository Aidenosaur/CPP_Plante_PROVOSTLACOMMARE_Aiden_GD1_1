#include <string>

class Fleur {

    private:
        std::string _nom;
        int _sante;
        int _maturite;
        int _eclosion;
        int _fane;
        
    
    public :

        Fleur(std::string name);
        
        void pousser(int centimetres);
        void arroser(int energie);
        void attendre(int jours);
        void eclosion(bool eclot);
        void fane(bool faner);

};