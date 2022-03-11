#include <bits/stdc++.h>
#include <iostream>

using namespace std;
typedef struct Imagen

{
    string nombre;
    string codigo;
    int ancho = 0;
    int alto = 0;
    int escala = 0;
    int maxalto = 0, maxancho = 0;
    int identificador(int id);
} pgm;

void Ayuda()
{
    cout << "------ Welcome To Proyection Of Images ----\n";
    cout << "-> COMANDOS  PERMITIDOS \n";
    cout << "cargar_imagen nombre_imagen.pgm \n";
    cout << "cargar_volumen nombre_base n_im\n";
    cout << "info_imagen\n";
    cout << "info_volumen\n";
    cout << "proyeccion2D direccion criterio nombre_archivo.pgm\n";
    cout << "salida\n";
}

pgm Cargar_imagen(string nombre)
{
    pgm imagen;
    int row = 0, col = 0, numrows = 0, numcols = 0, escala;
    ifstream infile(nombre);
    stringstream ss;
    string inputLine = "";
    imagen.nombre = nombre;
    cout << imagen.nombre << endl;
    // First line : version
    getline(infile, inputLine);
    if (inputLine.compare("P2") != 0)
    {
        cout << "error no se pudo cargar la imagen" << endl;
    }

    else
    {
        imagen.codigo = inputLine;
        cout << "Version : " << inputLine << endl; // pmg.nombre = inputLine;
        cout << "carga satisfactoria" << endl;
    }

    // Continue with a stringstream
    ss << infile.rdbuf();
    // Third line : size
    ss >> numcols >> numrows;
    imagen.ancho = numcols;
    imagen.alto = numrows;
    cout << imagen.ancho << " columns and " << imagen.alto << " rows" << endl;
    // three line valor de píxel más grande de la imagen:
    ss >> imagen.escala;
    cout << "Escala : " << imagen.escala << endl;

    int array[numrows][numcols];

    // Following lines : data
    for (row = 0; row < numrows; ++row)
    {
        for (col = 0; col < numcols; ++col)
            ss >> array[row][col];
    }
    infile.close();
    return imagen;
}

void Cargar_Volumen(string basename, int size)
{

    cout << basename << " -- " << size << endl;
}

void Info_imagen(pgm imagen)
{
    
    if (!imagen.codigo.empty())
    {
        cout << "Imagen cargada en memoria : " << imagen.nombre << " tiene de ancho :"
             << imagen.ancho << " y de alto : " << imagen.alto <<"\n";
    }
    else
    {
        cout << " No hay una imagen cargada en memoria\n";
    }
}

void Info_Volumen()
{
    int row = 0, col = 0, numrows = 0, numcols = 0, escala;
    int array[numrows][numcols];
    for (row = 0; row < numrows; ++row)
    {
        for (col = 0; col < numcols; ++col)
        {
            cout << "ancho por alto" << array[row][col] << " ";
        }
        cout << endl;
    }
    cout << "proceso satisfactorio\n";
}
void Proyeccion2D(string dir, string ctrit, string imagename)
{
    cout << "proceso satisfactorio\n";
}
