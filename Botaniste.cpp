#include "Botaniste.h"
#include "Plante.h"
#include "Fleur.h"
#include <string>

    
    Botaniste::Botaniste: _nbPlante(1), _fatigue(0), _argent(10){}
        
        void Botaniste::dormir(int sommeil){
            _fatigue-=sommeil;
            if(_fatigue<0) _fatigue=0;
        }
        
        void Botaniste::passer(int jour){
            _fatigue+=10;
        }
            
        void Botaniste::acheter(int euros){
            _nbPlante+=1;
            _argent-=10;
        }
        
        void Botaniste::vendre(int euros){
            if(Plante::_maturite>=100) : true;
            if (_maturite=true) _argent+=10;
            if (Fleur::_eclosion=true) _argent+=20;
            if (Fleur::_fane=true) _argent+=1;
        }
        