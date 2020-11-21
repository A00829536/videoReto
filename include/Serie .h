#ifndef SERIE _H
#define SERIE _H

#include <Video.h>


class Serie  : public Video
{
    public:
        Serie ();
        virtual ~Serie ();
        void muestraDatos();
        void setCantEspisodios();
        int getCantEspisodios(int);

    protected:

    private:
        int cantEspisodios;
};

#endif // SERIE _H
