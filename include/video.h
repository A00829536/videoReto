#ifndef VIDEO_H
#define VIDEO_H
#include <string>
#include <iostream>

using namespace std;


class Video
{
    public:
        Video();
        Video(string,string,string,int,int,int,int);
        Video(string,string,string,int,int,int);
        virtual void muestraDatos();
        void calificaVideo(int);
        void setTipoVideo(string);
        void setNombreVideo(string);
        void setGenero(string);
        void setCalificacion(int);
        void setAnioLanzamiento(int);
        void setDuracion(int);
        string getTipoVideo();
        string getNombreVideo();
        string getGenero();
        int getCalificacion();
        int getAnioLanzamimento();
        int getDuracion();
        void setID(int);
        int getID();


    protected:

    private:
        string tipoVideo;
        string nombreVideo;
        string genero;
        int calificacion;
        int anioLanzamiento;
        int duracion;
        int ID;
};
#endif // VIDEO_H
