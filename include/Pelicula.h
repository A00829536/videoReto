#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"


class Pelicula : public Video
{
    private:
        int nominaciones;
    public:
        Pelicula();
        void muestraDatos();
        void setNominaciones(int);
        int getNominaciones ();
};

#endif // PELICULA_H
