#include <string>

using namespace std;
class Cylindre
	{
		private:
			double rayon;
			double hauteur;
			string couleur;
		public:
			Cylindre();
			~Cylindre();
			double getRayon();
			double getHauteur();
			string getCouleur();
			void setRayon(double rayon);
			void setHauteur(double hauteur);
			void setCouleur(string couleur);
			void afficher();
	};
