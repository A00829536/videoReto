#ifndef SERIE_H
#define SERIE_H

#include "Episodio.h"
#include <vector>

class Serie {
	private:
		Episodio episodio1;
		Episodio episodio2;
		Episodio episodio3;
		string nombreSerie;
		string genero;
	public:
		double obtenerRating();
		void setNombreSerie(string);
		string getNombreSerie();
		void mostrarDatos();
		string getGenero();
		void setGenero(string);
		void setEpisodio1(Episodio);
		void setEpisodio2(Episodio);
		void setEpisodio3(Episodio);
};

#endif /* ifndef SERIE_H */
