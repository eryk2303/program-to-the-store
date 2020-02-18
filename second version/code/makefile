COMP=g++ -std=c++11


TARGET_GR_STUD=park

.PHONY: all clean



all:main.o Produkty.o  Skrzynki.o Srubki.o Narzedzia.o Skrzynka_z_srubkami.o Kolekcja.o 
	$(COMP) $(COMP_FLAGS) main.o Produkty.o  Skrzynki.o Srubki.o Narzedzia.o Skrzynka_z_srubkami.o Kolekcja.o  -o all
main.o: main.cpp Skrzynki.h Srubki.h Kolekcja.h Narzedzia.h Skrzynka_z_srubkami.h Produkty.h Wyjatki.h
	$(COMP) $(COMP_FLAGS) -c main.cpp 

Produkty.o: Produkty.cpp Produkty.h Wyjatki.h
	$(COMP) $(COMP_FLAGS)-c Produkty.cpp

Srubki.o: Srubki.cpp Srubki.h Wyjatki.h
	$(COMP) $(COMP_FLAGS)-c Srubki.cpp

Skrzynki.o: Skrzynki.cpp Skrzynki.h Wyjatki.h
	$(COMP) $(COMP_FLAGS) -c Skrzynki.cpp

Narzedzia.o: Narzedzia.cpp Narzedzia.h Wyjatki.h
	$(COMP) $(COMP_FLAGS)-c Narzedzia.cpp

Skrzynka_z_srubkami.o: Skrzynka_z_srubkami.cpp Skrzynka_z_srubkami.h Wyjatki.h
	$(COMP) $(COMP_FLAGS)-c Skrzynka_z_srubkami.cpp


Kolekcja.o: Kolekcja.cpp Kolekcja.h Wyjatki.h
	$(COMP) $(COMP_FLAGS)-c Kolekcja.cpp



clean:
	rm -f *.o
	rm -f all
