#include <bits/stdc++.h>
#include "prototype.h"

using namespace std;

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

void Cargar_imagen(string imagename)
{
    if (!imagename.empty())
    {
        cout << "proceso satisfactorio\n";
    }
    else
        cout << "La imagen no ha podido ser cargada";
    
}
void Cargar_Volumen(string basename, int size)
{
    cout << basename << " -- " << size << endl;
}
void Info_imagen()
{
    cout << "proceso satisfactorio\n";
}
void Info_Volumen()
{
    cout << "proceso satisfactorio\n";
}
void Proyeccion2D(string dir, string ctrit, string imagename)
{
    cout << "proceso satisfactorio\n";
}