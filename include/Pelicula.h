#ifndef PELICULA_H
#define PELICULA_H

#include <Video.h>


class Pelicula : public Video
{
    public:
        Pelicula();
        virtual ~Pelicula();
        void muestraDatos();
        void setNominaciones();
        int getNominaciones (int);

    protected:

    private:
        int nominaciones;

};

#endif // PELICULA_H
