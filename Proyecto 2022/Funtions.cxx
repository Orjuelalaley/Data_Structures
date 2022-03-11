#include <bits/stdc++.h>
#include <iostream>

using namespace std;
typedef struct Imagen

{
    string nombre;
    string codigo;
    int ancho;
    int alto;
    int escala;
    int maxalto, maxancho;
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

pgm *Cargar_imagen(string nombre, pgm *imagen)
{
    int row = 0, col = 0, numrows = 0, numcols = 0, escala;
    ifstream infile(nombre);
    stringstream ss;
    string inputLine = "";
    imagen->nombre = nombre;
    cout << imagen->nombre << endl;
    // First line : version
    getline(infile, inputLine);
    if (inputLine.compare("P2") != 0)
        cerr << "Version error" << endl;
    else
        imagen->codigo = inputLine;
    cout << "Version : " << inputLine << endl; // pmg.nombre = inputLine;
    cout <<"ingresa el nombre de la imagen"<<nombre<<endl;


    // Continue with a stringstream
    ss << infile.rdbuf();
    // Third line : size
    ss >> numcols >> numrows;
    imagen->ancho = numcols;
    imagen->alto = numrows;
    cout << imagen->ancho << " columns and " << imagen->alto << " rows" << endl;
     // three line valor de píxel más grande de la imagen:
    ss >> imagen->escala;
    cout << "Escala : " << imagen->escala << endl;

    int array[numrows][numcols];

    // Following lines : data
    for (row = 0; row < numrows; ++row)
        for (col = 0; col < numcols; ++col)
            ss >> array[row][col];

    // Now print the array to see the result
    
    
    
    /*
    for (row = 0; row < numrows; ++row)
    {
        for (col = 0; col < numcols; ++col)
        {
            cout << imagen->im[row][col] << " ";
        }
        cout << endl;
    }*/

    infile.close();
    return imagen;
}


void Cargar_Volumen(string basename, int size)
{
    
    cout << basename << " -- " << size << endl;
}

void Info_imagen()
{

    int pixelancho = 0, pixelalto = 0, numpixelalto = 0, numpixelancho = 0, escala;
    int array[numpixelalto][numpixelancho];
    for(pixelalto = 0; pixelalto < pixelancho; ++pixelalto) {
            for(pixelancho = 0; pixelancho < numpixelancho; ++pixelancho) {
        cout <<"numero de pixeles de la imagen" << array[pixelalto][pixelancho] << " ";

        }
        cout << endl;
    }
    cout << "proceso satisfactorio\n";
}

void Info_Volumen()
{
    int row = 0, col = 0, numrows = 0, numcols = 0, escala;
    int array[numrows][numcols];
    for(row = 0; row < numrows; ++row) {
            for(col = 0; col < numcols; ++col) {
        cout <<"ancho por alto" << array[row][col] << " ";

        }
        cout << endl;
    }
    cout << "proceso satisfactorio\n";

}
void Proyeccion2D(string dir, string ctrit, string imagename)
{
    cout << "proceso satisfactorio\n";
}
