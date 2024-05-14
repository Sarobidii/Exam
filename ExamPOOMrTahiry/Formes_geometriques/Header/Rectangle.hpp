#include <string>

using namespace std;
class Rectangle 
	{
		private:
			int longueur,largeur;
			string couleur;
		public:
			Rectangle();
			~Rectangle();
			void afficher();
			int getLongueur();
			int getLargeur();
			string getCouleur();
			void setLongueur(int lngr);
			void setLargeur(int lgr);
			void setCouleur(string coul);
	};
