Juego:	main.o Bender.o Airbenders.o Firebenders.o Earthbenders.o Waterbenders.o
		g++ main.o Bender.o Airbenders.o Firebenders.o Earthbenders.o Waterbenders.o -o Juego

main.o:	main.cpp Bender.h Airbenders.h Firebenders.h Earthbenders.h Waterbenders.h
		g++ -c main.cpp

Bender.o:	Bender.cpp Bender.h Airbenders.h Firebenders.h Earthbenders.h Waterbenders.h
		g++ -c Bender.cpp

Airbenders.o:	Airbenders.cpp Airbenders.h Bender.h
		g++ -c Airbenders.cpp

Firebenders.o:	Firebenders.cpp Firebenders.h Bender.h
		g++ -c Firebenders.cpp

Earthbenders.o:	Earthbenders.cpp Earthbenders.h Bender.h
		g++ -c Earthbenders.cpp

Waterbenders.o:	Waterbenders.cpp Waterbenders.h Bender.h
		g++ -c Waterbenders.cpp

clean:
		rm *.o Juego
