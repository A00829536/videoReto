#include "Serie.h"

double Serie::obtenerRating() {
    double prom = (episodio1.getCalificacion() + episodio2.getCalificacion() + episodio3.getCalificacion())/3;
    return prom;
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
    cout<< "El género de la serie es:" << endl;
    cout<< genero << endl;
}

void Serie::setGenero(string g) {
	genero = g;
}

string Serie::getGenero() {
	return genero;
}
void Serie::setEpisodio1(Episodio episodio1){

    this->episodio1 = episodio1;
}
void Serie::setEpisodio2(Episodio episodio2){

    this->episodio2 = episodio2;
}
void Serie::setEpisodio3(Episodio episodio3){

    this->episodio3 = episodio3;
}

Episodio Serie::getEpisodio1() {
	return episodio1;
}

Episodio Serie::getEpisodio2() {
	return episodio2;
}

Episodio Serie::getEpisodio3() {
	return episodio3;
}
