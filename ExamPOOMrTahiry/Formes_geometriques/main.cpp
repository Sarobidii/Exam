#include <iostream>
#include <string>
#include "Header/Rectangle.hpp"
#include "Header/Triangle.hpp"
#include "Header/Cercle.hpp"
#include "Header/Cylindre.hpp"
#include "Header/Carree.hpp"

using namespace std;

int main(){
	Rectangle objetRectangle = Rectangle();
	int longueur;
	int largeur;
	string couleur;
	cout << "Donnez la longueur du rectangle : ";
	cin >> longueur;
	objetRectangle.setLongueur(longueur);
	cout << "Donnez la largeur du rectangle : ";
	cin >> largeur;
        objetRectangle.setLargeur(largeur);
	cout << "Donnez la couleur du rectangle : ";
	cin >> couleur;
        objetRectangle.setCouleur(couleur);
	objetRectangle.afficher();
	Triangle objetTriangle = Triangle();
        double cote1;
        double cote2;
        double cote3;
        cout << "Donnez la cote 1 du triangle : ";
        cin >> cote1;
        objetTriangle.setCote1(cote1);
        cout << "Donnez la cote 2 du triangle : ";
        cin >> cote2;
        objetTriangle.setCote2(cote2);
        cout << "Donnez la cote 3 du triangle : ";
        cin >> cote3;
        objetTriangle.setCote3(cote3);
        cout << "Donnez la couleur du triangle : ";       
        cin >> couleur;
        objetTriangle.setCouleur(couleur);
        objetTriangle.afficher();
        Cercle objetCercle = Cercle();
        double rayon;
        double centreX;
        double centreY;
        cout << "Donnez le rayon du cercle : ";
        cin >> rayon;
        objetCercle.setRayon(rayon);
        cout << "Donnez l'abcisse du centre du cercle : ";
        cin >> centreX;
        objetCercle.setCentreX(centreX);
        cout << "Donnez l'ordonnée du centre du cercle : ";
        cin >> centreY;
        objetCercle.setCentreY(centreY);
        cout << "Donnez la couleur du cercle : ";       
        cin >> couleur;
        objetCercle.setCouleur(couleur);
        objetCercle.afficher();
        Carree objetCarree = Carree();
        double cote;
	cout << "Donnez la cote du carree : ";
        cin >> cote;
        objetCarree.setCote(cote);
        cout << "Donnez la couleur du carree : ";       
        cin >> couleur;
        objetCarree.setCouleur(couleur);
        objetCarree.afficher();
        Cylindre objetCylindre = Cylindre();
	double hauteur;
	cout << "Donnez le rayon du cylindre : ";
	cin >> rayon;
	objetCylindre.setRayon(rayon);
	cout << "Donnez la hauteur du cylindre : ";
	cin >> hauteur;
        objetCylindre.setHauteur(hauteur);
	cout << "Donnez la couleur du rectangle : ";
	cin >> couleur;
        objetCylindre.setCouleur(couleur);
	objetCylindre.afficher();
	return(0);
}
