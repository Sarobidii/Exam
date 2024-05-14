#include <iostream>
#include <string>
#include "../Header/Cylindre.hpp"
using namespace std;
Cylindre::Cylindre()
{
}
Cylindre::~Cylindre()
{
}
void Cylindre::afficher()
{
        cout << "Hauteur :"<< hauteur << endl;
        cout << "Rayon :" << rayon << endl;
        cout << "Couleur :" << couleur << endl;
}
double Cylindre::getHauteur()
{
	return(hauteur);
}
double Cylindre::getRayon()
{
	return(rayon);
}
string Cylindre::getCouleur()
{
	return(couleur);
}
void Cylindre::setRayon(double rayon)
{
	this->rayon = rayon;
}
void Cylindre::setHauteur(double hauteur)
{
	this->hauteur = hauteur;
}
void Cylindre::setCouleur(string couleur)
{
	this->couleur = couleur;
}
