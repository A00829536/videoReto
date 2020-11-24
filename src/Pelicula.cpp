#include "Pelicula.h"
#include <iostream>
Pelicula::Pelicula()
{
    setTipoVideo("Peliculas");
    nominaciones = 0;
}

void Pelicula::muestraDatos(){
    cout << "el tipo de video es:" << endl;
    cout << getTipoVideo() << endl;
    cout << "El nombre del video es:" << endl;
    cout << getNombreVideo() << endl;
    cout << "El Genero es:" << endl;
    cout << getGenero()  << endl;
    cout << "La calificacion es:" << endl;
    cout << getCalificacion() << endl;
    cout << "El anio de lanzamiento es:" << endl;
    cout << getAnioLanzamimento() << endl;
    cout << "La duracion es" <<endl;
    cout << getDuracion() << endl;
    cout << "la cantidad de nominaciones es:" << endl;
    cout << nominaciones << endl;

}
void Pelicula::setNominaciones(int n) {
	nominaciones = n;
}

int Pelicula::getNominaciones() {
	return nominaciones;
}
