#include <string>

using namespace std;
class Triangle
	{
		private:
			double cote1,cote2,cote3;
			string couleur;
		public:
			Triangle();
			~Triangle();
			double getCote1();
			double getCote2();
			double getCote3();
			string getCouleur();
			void setCote1(double cote1);
			void setCote2(double cote2);
			void setCote3(double cote3);
			void setCouleur(string couleur);
			void afficher();
	};
