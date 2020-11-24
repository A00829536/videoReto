#ifndef EPISODIO_H
#define EPISODIO_H

#include "video.h"
#include <string>

using namespace std;

class Episodio : public Video {
	private:
		int temporada;

	public:
		int getTemporada();
		void setTemporada(int);
};

#endif /* ifndef EPISODIO_H */
