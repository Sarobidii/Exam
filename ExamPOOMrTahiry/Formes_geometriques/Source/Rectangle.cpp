#include <iostream>
#include <string>
#include "../Header/Rectangle.hpp"
using namespace std;
Rectangle::Rectangle()
{
}
Rectangle::~Rectangle()
{
}
void Rectangle::afficher()
{
	cout << " Longueur : " << longueur << endl;
	cout << " Largeur : " << largeur << endl;
	cout << " Couleur : " << couleur << endl;
}
int Rectangle::getLongueur()
{
	return(longueur);
}
int Rectangle::getLargeur()
{
	return(largeur);
}
string Rectangle::getCouleur()
{
	return(couleur);
}
void Rectangle::setLongueur(int longueur)
{
	this->longueur = longueur;
}
void Rectangle::setLargeur(int largeur)
{
	this->largeur = largeur;
}
void Rectangle::setCouleur(string couleur)
{
	this->couleur = couleur;
}


