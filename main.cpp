#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie .h"
using namespace std;

int main()
{

    Video v1;
    Video v2;
    Pelicula p1;
    Pelicula p2;
    Serie s1;
    Serie s2;
    Serie s3;

    int menu;
    int opcion;
    int calif;
    cout << "lista de los videos" << endl;
    p1.muestraDatos();
    p2.muestraDatos();
    s1.muestraDatos();
    s2.muestraDatos();
    s3.muestraDatos();

/*
    cout << "bienvenido usuario, que desea hacer?" << endl;
    cout << "consultar video, presione 1" << endl;
    cout << "calificar video, presionar 2" << endl;
    cin >> menu;
    switch (menu){
    case 1:
        cout << "Que video quieres ver ";
        cout <<  "presione 1 para la " << p1.getTipoVideo() << ": " << p1.getNombreVideo() <<endl;
        cout <<  "presione 2 para la " << p2.getTipoVideo() << ": " << p2.getNombreVideo() <<endl;
        cout <<  "presione 3 para la " << s1.getTipoVideo() << ": " << s1.getNombreVideo() <<endl;
        cout <<  "presione 4 para la " << s2.getTipoVideo() << ": " << s2.getNombreVideo() <<endl;
        cout <<  "presione 5para la " << s3.getTipoVideo() << ": " << s3.getNombreVideo() <<endl;
        cin >> opcion;
        if (opcion == 1)
            p1.muestraDatos();
        else if (opcion == 2)
            p2.muestraDatos();
        else if (opcion == 3)
            s1.muestraDatos();
        else if (opcion == 4)
            s2.muestraDatos();
        else if (opcion == 5)
            s3.muestraDatos();

    case 2:
        cout << "que video quieres calificar ";
        cout <<  "presione 1 para la " << p1.getTipoVideo() << ": " << p1.getNombreVideo() <<endl;
        cout <<  "presione 2 para la " << p2.getTipoVideo() << ": " << p2.getNombreVideo() <<endl;
        cout <<  "presione 3 para la " << s1.getTipoVideo() << ": " << s1.getNombreVideo() <<endl;
        cout <<  "presione 4 para la " << s2.getTipoVideo() << ": " << s2.getNombreVideo() <<endl;
        cout <<  "presione 5 para la " << s3.getTipoVideo() << ": " << s3.getNombreVideo() <<endl;
        cin >> opcion;
        if (opcion == 1){
            cout << "Que calificacion quiere ponerle"<< endl;
            cin >> calif;
            p1.calificaVideo(calif);
        }
        else if (opcion == 2){
            cout << "Que calificacion quiere ponerle"<< endl;
            cin >> calif;
            p2.calificaVideo(calif);
        }
        else if (opcion == 3){
            cout << "Que calificacion quiere ponerle"<< endl;
            cin >> calif;
            s1.calificaVideo(calif);
        }
        else if (opcion == 4){
            cout << "Que calificacion quiere ponerle"<< endl;
            cin >> calif;
            s2.calificaVideo(calif);
        }
        else if (opcion == 5){
            cout << "Que calificacion quiere ponerle"<< endl;
            cin >> calif;
            s3.calificaVideo(calif);
        }

    }
*/


}
