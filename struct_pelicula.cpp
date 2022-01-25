#include <iostream>
using namespace std;

struct movieType{
    string movie_name;
    string director;
    string producer;
    int year_release;
    int num_in_stock;
};

void entrada_datos(movieType &pelicula)
{
    std::cout << "Ingrese el nombre de la pelicula: ";
    getline(std::cin,pelicula.movie_name);
    std::cout << "Ingrese el nombre del director: ";
    getline(std::cin, pelicula.director);
    std::cout << "Ingrese el nombre del productor: ";
    getline(std::cin,pelicula.producer);
    std::cout << "Ingrese el annio de salida: ";
    std::cin >> pelicula.year_release;
    std::cout << "Ingrese la cantidad de stock: ";
    std::cin >> pelicula.num_in_stock;
}

void salida_datos(const movieType pelicula)
{
    std::cout << "La pelicula se llama "<< pelicula.movie_name << std::endl;
    std::cout << "El director es "<< pelicula.director << std::endl;
    std::cout << "El productor principal es "<<pelicula.producer << std::endl;
    std::cout << "La pelicula salio en el annio " << pelicula.year_release << std::endl;
    std::cout << "Existen " << pelicula.num_in_stock << " peliculas en el stock" << std::endl;
}

int main()
{
    movieType pelicula;
    entrada_datos(pelicula);
    salida_datos(pelicula);

    return 0;
}
