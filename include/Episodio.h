#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>

using namespace std;

class Episodio {
	private:
		string titulo;
		int temporada;
	public:
		string getTitulo();
		int getTemporada();
		void setTitulo();
		void setTemporada();
};

#endif /* ifndef EPISODIO_H */
