output: main.o complex.o
	g++ -o out/output.exe main.o complex.o 

main.o: main.cpp 
	g++ -c main.cpp 

complex.o: src/complex.cpp src/complex.h 
	g++ -c src/complex.cpp 

clean:
	rm *.o *.exe *.gch src/*.o src/*.exe src/*.gch out/*.o out/*.exe out/*.gch