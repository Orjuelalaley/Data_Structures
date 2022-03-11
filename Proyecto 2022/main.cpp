#include <bits/stdc++.h>
#include "Funtions.cxx"

using namespace std;

int main()
{
    char comando[500];
    int size;
    char *cad;

    vector<string> com;

    do
    {
        cout << "$ ";
        cin.getline(comando, 500);

        cad = strtok(comando, " ");
        while (cad != NULL)
        {
            com.push_back(cad);
            cad = strtok(NULL, " ");
        }

        if (com[0] == "cargar_imagen")
        {
            string Nombreimagen;
            cout << "escribe el nombre de la imagen"<<endl;
            cin >> Nombreimagen;
  
            com.clear();
        }
        else if (com[0] == "cargar_volumen")
        {
            size = stoi(com[2]);
            Cargar_Volumen(com[1], size);         
			com.clear();
        }
        else if (com[0] == "info_imagen")
        {
            Info_imagen();
            com.clear();
        }
        else if (com[0] == "info_volumen")
        {
            Info_Volumen();
            com.clear();
        }
        else if (com[0] == "proyeccion2D")
        {
            Proyeccion2D(com[1], com[2], com[3]);
            com.clear();
        }
        else if (com[0] == "ayuda")
        {
            Ayuda();
            com.clear();
        }
        else if (com[0] == "salida")
        {
            cout << "  Termina la ejecucion de la aplicacion." << endl;
            com.clear();
            break;
        }
        else
        {
            cout << "  comando no existente" << endl;
            com.clear();
        }
    } while (com[0] != "salida");

    return 0;
}
