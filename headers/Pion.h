#ifndef PION
#define PION

#include "Piece.h"

class Pion : public Piece {
    public:
        Pion ();
        ~Pion ();
        void deplacer (int x,int y);
}

#endif // PION
