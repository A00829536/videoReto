#include "Video.h"
#include <iostream>


Video::Video()
{
    tipoVideo = "Video";
    nombreVideo = "null";
    genero = "null";
    calificacion = 0;
    anioLanzamiento = 0;
    duracion = 0;
}

Video::Video(string t,string n,string g,int c,int a,int d)
{
    tipoVideo = t;
    nombreVideo = n;
    genero =g;
    calificacion = c;
    anioLanzamiento = a;
    duracion = d;
}
Video::Video(string t,string n,string g ,int a,int d)
{
    tipoVideo = t;
    nombreVideo = n;
    genero =g;
    calificacion = 0;
    anioLanzamiento = a;
    duracion = d;
}

void Video::setTipoVideo (string t){
    tipoVideo = t;
}
void Video::setNombreVideo (string t){
    nombreVideo = t;
}
void Video::setGenero(string t){
    genero= t;
}
void Video::setCalificacion (int t){
    calificacion = t;
}
void Video::setAnioLanzamiento (int t){
    anioLanzamiento = t;
}
void Video::setDuracion (int t){
    duracion = t;
}
string Video::getTipoVideo (){
    return tipoVideo;
}
string Video::getNombreVideo (){
    return nombreVideo;
}
string Video::getGenero (){
    return genero;
}
int Video::getCalificacion (){
    return calificacion;
}
int Video::getAnioLanzamimento (){
    return anioLanzamiento;
}
int Video::getDuracion (){
    return duracion;
}
void Video::calificaVideo (int c){
    calificacion = c;
}
void Video::muestraDatos(){
    cout<<"el tipo de video es:"<<endl;
    cout<<tipoVideo<<endl;
    cout<<"El nombre del video es:"<<endl;
    cout<<nombreVideo<<endl;
    cout<<"El Genero es:"<<endl;
    cout<< genero << endl;
    cout<<"La calificacion es:"<<endl;
    cout<<calificacion<<endl;
    cout<<"El anio de lanzamiento es:"<<endl;
    cout<<anioLanzamiento<<endl;
    cout<<"La duracion es"<<endl;
    cout<<duracion<<endl;
}
