 g++ -c bib/Ouvrir.cpp -o bib/Ouvrir.o
 ar -rv bib/libOuvrir.a bib/Ouvrir.o
cp bib/libOuvrir.a ../../biblio/biblio_dynam/
g++ main.cpp -L/home/sipan_tanana/Documents/Exam/biblio/biblio_dynam -lOuvrir -o mainstatic.exe

