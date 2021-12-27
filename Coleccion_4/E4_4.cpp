#include <iostream>
using namespace std;

int rama(int ca);

int main(){
    int ca;
    double pau,nn;
    cout<<"Supero la nota de corte?"<<endl<<"Introduzca nota de EBAU segun parametros de las asignaturas especificos"<<endl;
    cin>>pau;
    cout<<"Introduzca comunidad donde desea estudiar:"<<endl<<endl<<"1: Cadiz"<<endl<<"2: Sevilla"<<endl<<"3: Huelva"<<endl<<"4: Granada"<<endl<<"5: Cordoba"
    <<endl<<"6: Malaga"<<endl<<"7: Jaen"<<endl<<"8: Almeria"<<endl;
    cin>>ca;
    if(pau>rama(ca)){
        cout<<endl<<"Supera la nota de corte";
    } else {
    cout<<endl<<"No supera la nota de corte";
    }
}

int rama(int ca){
    double nn,notas;
    int ra;
    cout<<"Introduzca su rama:"<<endl<<"1: Humanidades"<<endl<<"2: Sociales"<<endl<<"3: Ingenieria"<<endl<<"4: Salud"<<endl;
    cin>>ra;
    switch(ra){
    case 1: //Humanidades
        switch(ca){
            case 1: //cadiz
                cout<<"Solo puede estudiar la carrera de historia en esta comunidad";
                nn=5.25; break;
            case 2: //sevilla
                cout<<"Puede estudiar las carreras de economia o literatura";
                //hacer opciones oof
                break;
            case 3: //huelva
                cout<<"Solo puede estudiar la carrera de historia en esta comunidad";
                nn=5;break;
            case 5://cordoba
                cout<<"Solo puede estudiar la carrera de historia en esta comunidad";
                nn=5;break;
            case 6://malaga
                cout<<"Puede estudiar las carreras de historia, economia o literatura";
                //options
                    break;
            case 7://jaen
                cout<<"No puede estudiar ninguna carrera de humanidades en esta comunidad";
                break;
            case 8://granada
                cout<<"Puede estudiar las carreras de historia, economia o literatura";
                //options
                break;
            case 9://almeria
                cout<<"Puede estudiar las carreras de historia o economia";
                //options
                break;
            default:
                cout<<"ERROR: Comunidad inexistente";
            }break;

    case 2://sociales
        switch(ca){
            case 1: //cadiz
                cout<<"Puede estudiar la carrera de historia en esta comunidad";
                nn=5.25; break;
            case 2: //sevilla
                cout<<"Puede estudiar las carreras de economia o literatura";
                //hacer opciones oof
                break;
            case 3: //huelva
                cout<<"Solo puede estudiar la carrera de historia en esta comunidad";
                nn=5;break;
            case 5://cordoba
                cout<<"Solo puede estudiar la carrera de historia en esta comunidad";
                nn=5;break;
            case 6://malaga
                cout<<"Puede estudiar las carreras de historia, economia o literatura";
                //options
                break;
            case 7://jaen
                cout<<"No puede estudiar ninguna carrera de humanidades en esta comunidad";
                break;
            case 8://granada
                cout<<"Puede estudiar las carreras de historia, economia o literatura";
                //options
                break;
            case 9://almeria
                cout<<"Puede estudiar las carreras de historia o economia";
                //options
                break;
            default:
            cout<<"ERROR: Comunidad inexistente";
        }
    case 3://Ingenieria
    case 4://Salud
    }
    return nn;
}