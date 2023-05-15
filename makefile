compile: main.cpp 
	 g++ main.cpp monster.cpp pokemon.cpp pokemonList.cpp -o main

run: main
	 ./main


clean: main
	 rm main
