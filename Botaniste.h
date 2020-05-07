#include <string>

class Botaniste {

    private:
        int _nbPlante;
        int _argent;
        int _fatigue;
        
    
    public :

        void dormir(int sommeil);
        void passer(int jour);
        void acheter(int euros);
        void vendre(int euros);

};