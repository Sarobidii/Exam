#include <string>

using namespace std;
class Carree
	{
		private:
			double cote;
			string couleur;
		public:
			Carree();
			~Carree();
			void setCote(double cote);
			double getCote();
			void setCouleur(string couleur);
			string getCouleur();
			void afficher();
	};
