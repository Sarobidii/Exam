#include <string>

using namespace std;
class Cercle
	{
        private:
                double rayon;
                double centreX;
                double centreY;
                string couleur;
        public:
                Cercle();
                ~Cercle();
                void afficher();
                void setRayon(double rayon);
                void setCouleur(string couleur);
                void setCentreX(double CentreX);
                void setCentreY(double CentreY);
		double getRayon();
		string getCouleur();
		double getCentreX();
		double getCentreY();
		double perimetre();
		double surface();
		void agrandir(double dr);
		void changeCouleur();
	};
