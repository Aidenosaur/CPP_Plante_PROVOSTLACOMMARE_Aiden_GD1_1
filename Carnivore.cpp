#include "Carnivore.h"
#include <string>

    
    Carnivore::Carnivore(std::string name) : _nom(name), _sante(100), _maturite(0), _digestion(0), _faim(10) {}
        
        void Carnivore::pousser(int centimetres){
            _maturite+=centimetres;
            if(_maturite<0) _maturite=0;
            if(_maturite>100) _maturite=100;
            _maturite+=10;
            _faim +=10;
            /*if _maturite >100 vendre :  true à mettre dans Botaniste*/
        }
        
        void Carnivore::arroser(int energie){
            _sante-=energie;
            _sante+=10;
            if(_sante<0) _sante=0;
            /*if _sante = 0 alors plante meurt*/
            /*if arrosé utilisé 3 fois d'affilé plante meurt*/
        }
        
        void Carnivore::tailler(int energie){
            _sante+=10;
            /*if tailler utilisé 3 fois d'affilé _santé - 20*/
        }
            
        void Carnivore::attendre(int temps){
            _maturite+=10;
            _sante-=10;
            _faim+=10;
        }
        
        void Carnivore::manger(int calorie){
            _faim-=10;
            if (_faim<0) _faim=0;
            for (_faim=0, _digestion<=50, _digestion+=10);
            if (_digestion=50) _faim=10;
        }