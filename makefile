output = bin
source = src
include = -Iinclude 
dependencias = -lftxui-screen -lftxui-dom -lftxui-component
flags =	-std=c++2a $(dependencias) $(include)



run : $(output)/gemetriadash
	./$<
	
$(output)/gemetriadash : $(source)/main.cpp
	g++ -o $@ $< $(flags)

runPantalla : $(output)/pantalla
	./$<
	
$(output)/pantalla : $(source)/pantalla.cpp
	g++ -o $@ $< $(flags)