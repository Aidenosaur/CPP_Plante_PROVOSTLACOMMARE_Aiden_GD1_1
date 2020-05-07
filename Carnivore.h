#include <string>

class Carnivore {

    private:
        std::string _nom;
        int _sante;
        int _maturite;
        int _digestion;
        int _faim;
    
    public :

        Carnivore(std::string name);
        
        void pousser(int centimetres);
        void arroser(int energie);
        void attendre(int jours);
        void tailler(int energie);
        void manger(int calorie);

};