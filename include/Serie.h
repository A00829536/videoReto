#ifndef SERIE_H
#define SERIE_H

#include "Episodio.h"
#include <vector>

class Serie {
	private:
		vector<Episodio> episodios;
		string nombreSerie;
		string genero;
	public:
		vector<Episodio> getEpisodios();
		int obtenerRating();
		void setNombreSerie(string);
		string getNombreSerie();
		void mostrarDatos();
		string getGenero();
		void setGenero(string);
};

#endif /* ifndef SERIE_H */
