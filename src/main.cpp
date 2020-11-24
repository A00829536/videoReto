#include <iostream>
#include <string>
#include <vector>

#include "video.h"
#include "Serie.h"
#include "Pelicula.h"

using namespace std;

vector<Serie> series;
vector<Pelicula> peliculas;

void inicializarVideos() {
	// Inicializar series
	Serie serie1;
	serie1.setNombreSerie("serie1");
	serie1.setGenero("terror");
	Serie serie2;
	serie2.setNombreSerie("serie2");
	serie2.setGenero("comedia");
	// Inicializar episodios
	Episodio episodio1s1;
	episodio1s1.setNombreVideo("episodio1s1");
	episodio1s1.setCalificacion(5);
	Episodio episodio2s1;
	episodio2s1.setNombreVideo("episodio2s1");
	episodio2s1.setCalificacion(5);
	Episodio episodio3s1;
	episodio3s1.setNombreVideo("episodio3s1");
	episodio3s1.setCalificacion(5);
	Episodio episodio1s2;
	episodio1s2.setNombreVideo("episodio1s2");
	episodio1s2.setCalificacion(2);
	Episodio episodio2s2;
	episodio2s2.setNombreVideo("episodio2s2");
	episodio2s2.setCalificacion(2);
	Episodio episodio3s2;
	episodio3s2.setNombreVideo("episodio3s2");
	episodio3s2.setCalificacion(2);
	// Añadir episodios a series
	serie1.setEpisodio1(episodio1s1);
	serie1.setEpisodio2(episodio2s1);
	serie1.setEpisodio3(episodio3s1);
	serie2.setEpisodio1(episodio1s2);
	serie2.setEpisodio2(episodio2s2);
	serie2.setEpisodio3(episodio3s2);


	// Inicializar películas
	Pelicula pelicula1;
	pelicula1.setNombreVideo("pelicula1");
	pelicula1.setGenero("comedia");
	Pelicula pelicula2;
	pelicula2.setNombreVideo("pelicula2");
	pelicula2.setGenero("comedia");
	Pelicula pelicula3;
	pelicula3.setNombreVideo("pelicula3");
	pelicula3.setGenero("terror");

	series.push_back(serie1);
	series.push_back(serie2);
	peliculas.push_back(pelicula1);
	peliculas.push_back(pelicula2);
	peliculas.push_back(pelicula3);
}


void mostrarSerie(Serie s) {

}

void mostrarPelicula(Pelicula p) {

}

void mostrarEpisodio(Episodio e) {

}

void calificarVideo() {

}

void mostrarVideosGen() {
	string genero;
	cout << "Ingrese el género" << endl;
	cin >> genero;
	for (int i = 0; i < peliculas.size(); i++) {
		if (peliculas[i].getGenero() == genero) {
			peliculas[i].muestraDatos();
		}
	}
	for (int i = 0; i < series.size(); i++) {
		if (series[i].getGenero() == genero) {
			series[i].mostrarDatos();
		}
	}
}

void mostrarVideosCal() {
	int cal;
	cout << "Ingrese la calificación" << endl;
	cin >> cal;
	for (int i = 0; i < peliculas.size(); i++) {
		if (peliculas[i].getCalificacion() >= cal) {
			peliculas[i].muestraDatos();
		}
	}
	for (int i = 0; i < series.size(); i++) {
		cout << series[i].obtenerRating() << endl;
		if (series[i].obtenerRating() >= cal) {
			series[i].mostrarDatos();
		}
	}
}

int main(int argc, char *argv[])
{   cout << "hola mundo " << endl;
	inicializarVideos();
	cout << "Elija una opción:" << endl;
	cout << "1. Mostrar los videos con una determinada calificación" << endl;
	cout << "2. Mostrar los videos con un determinado género" << endl;
	int opcion;

	cin >> opcion;
	switch (opcion) {
		case 1: mostrarVideosCal();
				break;
		case 2: mostrarVideosGen();
				break;
	}
}
