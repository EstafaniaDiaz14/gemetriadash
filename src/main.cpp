#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <thread>
#include <fstream>
#include <string>
#include <dibujo.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo mono("./assets/images/mono.txt");
    Dibujo pico("./assets/images/pico.txt");

    int fotograma = 0;
    while (true)
{
    this_thread::sleep_for(0.1s);
    fotograma++;
    Element dibujo = hbox({mono.GetElement(), pico.GetElement()});
    Screen pantalla = Screen::Create(Dimension::Full());
    Render(pantalla, dibujo);
    pantalla.Print();
    cout<<pantalla.ResetPosition();
    
}
    return EXIT_SUCCESS;
}