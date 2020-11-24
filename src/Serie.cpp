#include "Serie.h"

vector<Episodio> Serie::getEpisodios() {
	return episodios;
}
int Serie::obtenerRating() {
	int cal = 0;
	for (int i = 0; i < episodios.size(); i++) {
		cout << episodios[i].getCalificacion() << endl;
		cal += episodios[i].getCalificacion();
	}
	int promedio = cal / episodios.size();
	return promedio;
}

void Serie::setNombreSerie(string n) {
	nombreSerie = n;
}

string Serie::getNombreSerie() {
	return nombreSerie;
}

void Serie::mostrarDatos() {
    cout<< "El nombre de la serie es:" << endl;
    cout<< nombreSerie << endl;
    cout<< "La calficación de la serie es:" << endl;
    cout<< obtenerRating() << endl;
}

void Serie::setGenero(string g) {
	genero = g;
}

string Serie::getGenero() {
	return genero;
}
