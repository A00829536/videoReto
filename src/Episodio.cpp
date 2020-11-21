#include "Episodio.h"
#include <iostream>



string Episodio::getTitulo()
{
    return titulo;
}

int Episodio::getTemporada()
{
    return temporada;
}

void Episodio::setTitulo(string t)
{
    titulo = t;
}

void Episodio::setTemporada(int t)
{
    temporada = t;
}

void Episodio::setCalificacion(int c)
{
    calificacion = c;
}

int Episodio::getCalificacion () {

    return calificacion;
}
