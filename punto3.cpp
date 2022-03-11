#include <bits/stdc++.h>

using namespace std;

void Cancelar_cita(int paciente_id, int cita_id, Date fecha_cita){
    if (!fecha_cita!= NULL && !cita_id != NULL)
    {
        if (paciente_id == data_base.paciente_id)
        {
            fecha_cita = NULL;
            cita_id = NULL;
        }
    }
}

void Inventario_med(){
    std::stack<int> vent_med;
    for (int i = 0; i < vent_med.size(); i++)
    {
        /* code */
    }
     
}