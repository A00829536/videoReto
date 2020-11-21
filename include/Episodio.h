#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>

using namespace std;

class Episodio {
	private:
		string titulo;
		int temporada;
		int calificacion;
	public:
		string getTitulo();
		int getTemporada();
		void setTitulo(string);
		void setTemporada(int);
		int getCalificacion();
		void setCalificacion (int);


};

#endif /* ifndef EPISODIO_H */
