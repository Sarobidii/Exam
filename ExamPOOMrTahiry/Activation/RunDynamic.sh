g++ -c bib/Ouvrir.cpp -o bib/Ouvrir.o
g++ -o libOuvrir.so -shared -fPIC bib/Ouvrir.cpp
cp libOuvrir.so ../../biblio/biblio_dynam/
#sudo vim /etc/ld.so.conf.d/libOuvrir.conf
#Ajouter /home/sipan_tanana/Documents/Exams/biblio/biblio_dynam dans ce fichier
#sudo ldconfig
g++ main.cpp -L/home/sipan_tanana/Documents/Exams/biblio/biblio_dynam -lOuvrir -o maindynamique.exe

