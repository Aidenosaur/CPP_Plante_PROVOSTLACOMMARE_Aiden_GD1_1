#include "Fleur.h"
#include <string>

    
    Fleur::Fleur(std::string name) : _nom(name), _sante(100), _maturite(0), _eclosion(false), _fane(false) {}
        
        void Fleur::pousser(int centimetres){
            _maturite+=centimetres;
            if(_maturite<0) _maturite=0;
            if(_maturite>120) _maturite=120;
            /*if _maturite >100 vendre :  true à mettre dans Botaniste*/
        }
        
        void Fleur::arroser(int energie){
            _sante-=energie;
            _sante+=10;
            if(_sante<0) _sante=0;
            /*if _sante = 0 alors plante meurt*/
            /*if arrosé utilisé 3 fois d'affilé plante meurt*/
        }
        
        void Fleur::tailler(int energie){
            _sante+=10;
            /*if tailler utilisé 3 fois d'affilé _santé - 20*/ 
        }
            
        void Fleur::attendre(int temps){
            _maturite+=10;
            _sante-=10;
        }
        
        void Fleur::eclosion(bool eclot){
            if (_maturite=100) _eclosion=true;
        }
        
        void Fleur::fane(bool faner){
            if (_maturite=120) _fane=true;
            
        }