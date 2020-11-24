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

void calificarCapitulo(Serie s) {
	int capitulo;
	cout << "Ingrese el capitulo que desea calificar" << endl;
	cin >> capitulo;
	cout << "Ingrese la calificación para el capítulo" << endl;
	int cal;
	cin >> cal;

	switch (capitulo) {
		case 1: s.getEpisodio1().setCalificacion(cal);
				break;
		case 2: s.getEpisodio2().setCalificacion(cal);
				break;
		case 3: s.getEpisodio3().setCalificacion(cal);
				break;
	}
}

void calificarVideo() {
	string titulo;
	cout << "Ingrese el título a calificar" << endl;
	cin >> titulo;
	bool serieEncontrada = false;
	bool peliculaEncontrada = false;
	for (int i = 0; i < series.size(); i++) {
		if (series[i].getNombreSerie() == titulo) {
			calificarCapitulo(series[i]);
			serieEncontrada = true;
			return;
		}
	}
	for (int i = 0; i < peliculas.size(); i++) {
		if (peliculas[i].getNombreVideo() == titulo) {
			int cal;
			peliculaEncontrada = true;
			cout << "Ingrese la calificación para la película" << endl;
			cin >> cal;
			peliculas[i].setCalificacion(cal);
		}
	}
	if (serieEncontrada == false && peliculaEncontrada == false) {
		cout << "No se encontró ningún video con ese título" << endl;
	}
}

void mostrarVideosGen() {
	string genero;
	cout << "Ingrese el género" << endl;
	cin >> genero;
	bool peliculaEncontrada = false;
	bool serieEncontrada = false;
	for (int i = 0; i < peliculas.size(); i++) {
		if (peliculas[i].getGenero() == genero) {
			peliculas[i].muestraDatos();
			peliculaEncontrada = true;
		}
	}
	for (int i = 0; i < series.size(); i++) {
		if (series[i].getGenero() == genero) {
			series[i].mostrarDatos();
			peliculaEncontrada = true;
		}
	}
	if (serieEncontrada == false && peliculaEncontrada == false) {
		cout << "No se encontró ningún video con ese género" << endl;
	}
}

void mostrarVideosCal() {
	int cal;
	cout << "Ingrese la calificación:" << endl;
	cin >> cal;
	bool serieEncontrada = false;
	bool peliculaEncontrada = false;
	for (int i = 0; i < peliculas.size(); i++) {
		if (peliculas[i].getCalificacion() == cal) {
			peliculas[i].muestraDatos();
			serieEncontrada = true;
		}
	}
	for (int i = 0; i < series.size(); i++) {
		if (series[i].obtenerRating() == cal) {
			series[i].mostrarDatos();
			peliculaEncontrada = true;
		}
	}
	if (serieEncontrada == false && peliculaEncontrada == false) {
		cout << "No se encontró ningún video con ese nombre" << endl;
	}
}

void mostrarEpisodios() {
	string serie;
	cout << "Ingrese el nombre de la serie:" << endl;
	cin >> serie;
	bool serieEncontrada = false;
	for (int i = 0; i < series.size(); i++) {
		if (series[i].getNombreSerie() == serie) {
			series[i].getEpisodio1().muestraDatos();
			series[i].getEpisodio2().muestraDatos();
			series[i].getEpisodio3().muestraDatos();
			serieEncontrada = true;
		}
	}
	if (serieEncontrada == false) {
		cout << "no se encontró una serie con ese nombre" << endl;
	}
}

void mostrarPeliculasCal() {
	int cal;
	cout << "Ingrese la calificación de la pelicula" << endl;
	cin >> cal;
	bool peliculaEncontrada = false;
	for (int i = 0; i < series.size(); i++) {
		if (peliculas[i].getCalificacion() == cal) {
			peliculas[i].muestraDatos();
			peliculaEncontrada = true;
		}
	}
	if (peliculaEncontrada == false) {
		cout << "no se encontró una película con ese nombre" << endl;
	}
}

int main(int argc, char *argv[])
{
	inicializarVideos();
	int opcion;
	do {
		cout << "Elija una opción:" << endl;
		cout << "1. Mostrar los videos con una determinada calificación" << endl;
		cout << "2. Mostrar los videos con un determinado género" << endl;
		cout << "3. Mostrar los epsiodios de una determinada serie" << endl;
		cout << "4. Mostrar las películas con una determinada calificación" << endl;
		cout << "5. Calificar un video" << endl;
		cout << "6. Salir" << endl;
		cin >> opcion;

		switch (opcion) {
			case 1: mostrarVideosCal();
					break;
			case 2: mostrarVideosGen();
					break;
			case 3: mostrarEpisodios();
					break;
			case 4: mostrarPeliculasCal();
					break;
			case 5: calificarVideo();
					break;
			default: cout << "Opcion invalida, intentelo de nuevo" << endl;
					 break;
		}
	} while (opcion != 6);
	return 0;
}
