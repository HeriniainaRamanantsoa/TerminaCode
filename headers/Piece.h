#ifndef PIECE
#define PIECE

#include "Constantes.h"

typedef enum Statut {
    ACTIF,
    INACTIF
};

class Piece {
    protected:
        int x;
        int y;
        int valeur;
        Statut statut;
    public:
        Piece ();
        ~Piece ();
        virtual void deplacer (int x,int y);
};

#endif // PIECE
