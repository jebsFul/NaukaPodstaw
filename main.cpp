
//#include "std_lib_facilities.h" //plik w nawiasach jest szukany najpierw w katalogu projektu, a potem w katalogach systemowych. stosować głównie do bibliotek customowych, a do standardowych używać nawiasów ostrych <>

#include <iostream> //biblioteka standardowa do obsługi wejścia/wyjścia, zawiera definicje dla std::cout, std::cin, std::endl itp.

//Biblioteki FLTK - do GUI, cross platform. dobre dla linuxa, ale claude ma wątpliwości czy do windowsa też 
//#include <FL/Fl.H>
//#include <FL/Fl_Window.H>
//#include <FL/Fl_Box.H>
//#include <FL/Fl_Button.H>

//using namespace std; //użycie przestrzeni nazw std, dzięki czemu można pisać cout zamiast std::cout, czy std::string itp.
const unsigned short TESTSHORTINT = 123; //int z 2 bajtów zamiast 4. dzięki unsigned zakres ujemny nie jest dostępny i powiększa zakres dodatni do 0..65535. przydatne gdy potrzebujemy tylko dodatnich liczb i chcemy zaoszczędzić pamięć; dzięki const zmienna nie może być zmieniona w runtime; const dobrze oznaczyć kapitalikami np. TESTINT

int myInt = 1;

std::string testText = "Reaktor bez bolca dostaje pierdolca!";

int main() {

    std::cout << testText << "\n"; //wypisze tekst, ale może nie pojawić się od razu na ekranie, ponieważ bufor wyjściowy nie został opróżniony. w praktyce jednak większość środowisk programistycznych automatycznie opróżnia bufor po każdej linii, więc tekst powinien się pojawić bez problemu
    //cout << "Hello, World!\n" << endl; //endl to znak nowej linii i opróżnienie bufora wyjściowego, czyli wymuszenie natychmiastowego wypisania tekstu na ekran. bez endl tekst może być buforowany i nie pojawi się od razu na ekranie
    //keep_window_open(); //funkcja zdefiniowana w std_lib_facilities.h, która zatrzymuje okno konsoli do momentu aż użytkownik nie wciśnie klawisza. przydatna szczególnie w środowisku Windows, gdzie okno konsoli może się zamknąć zaraz po zakończeniu programu
    //return 0; //kompilator i tak przyjmie to domyślnie

    ++myInt; //preinkrementacja o 1
    myInt++; //postinkrementacja o 1
    
    //flagi bitowe - operacje na bitach, np. AND, OR, XOR, NOT, przesunięcia bitowe itp. przydatne do manipulacji pojedynczymi bitami w liczbach całkowitych, np. do ustawiania lub sprawdzania konkretnych flag w zmiennej typu int
    //conditional operator - fajna rzecz



}