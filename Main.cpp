#include "Torre.h"
#include "Alfil.h"
#include "Rey.h"
#include "Reina.h"
#include "Caballo.h"
#include "Pieza.h"
#include "Peon.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
using std::vector;
int main (){
    
    vector <Pieza*> piezas;
    bool vive=true;
    string** matrix = NULL;
    matrix = new string*[8];
	for (int i = 0;i<8;i++){
		matrix[i]= new string[8];
	}
    while(vive==true){
    cout << "Binevenido: que desea hacer?"<< endl;
    cout << "1) Jugar Partida"<< endl;
    cout << "2) Recrear Partida"<< endl;
    cout << "3) salir"<< endl;
    int opcion=0;
    cin>> opcion;
    switch(opcion){
        case 1:{
                cout << "ingrese el nombre del jugador de piezas blancas"<< endl;
                string usu1="";
                cin >> usu1;
                cout << "ingrese el nombre del jugador de piezas negras"<< endl;
                string usu2="";
                cin >> usu2;
                bool valido=false;
                int pieza=0;
                while (valido==false){
                    /* code */
                    cout << "debera elegir que pieza desea aparte del rey "<< endl;
                    cout << "1) reina 2) torre 3) caballo 4) alfil 5) peon"<< endl;
                    cin >>pieza;
                    if(pieza <1 || pieza>5){
                        cout << "ingreso un numero invalido"<< endl;
                    }else{
                        valido=true;
                    }
                }//fin revision del numero
                string reyN="rey negro";
                string reyB="rey blanco";
                piezas.push_back(new Rey(reyB,'e',8));
                matrix[0][8]="ss";
                piezas.push_back(new Rey(reyN,'e',1));
                if (pieza==1){//agrega reina
                    piezas.push_back(new Reina("reina blanca",'d',1));
                    piezas.push_back(new Reina("reina negra",'f',8));
                }else if(pieza==2){//agrega torre
                    piezas.push_back(new Torre("Torre blanca",'a',1));
                    piezas.push_back(new Torre("torre negra",'h',8));
                }else if(pieza==3){//agrega caballo
                    piezas.push_back(new Caballo("Caballo blanca",'b',1));
                    piezas.push_back(new Caballo("Caballo negra",'g',8));
                }else if(pieza==4){//agrega alfil
                    piezas.push_back(new Alfil("Alfil blanca",'c',1));
                    piezas.push_back(new Alfil("Alfil negra",'f',1));
                }else if(pieza==5){//agrega peon
                    piezas.push_back(new Peon("Peon blanca",'e',2));
                    piezas.push_back(new Peon("Peon negra",'e',7));
                }//fin de las otras piezas
                bool juego=false;
                while (juego==false){
                    bool carac=' ';
                    cout << "ingrese el caracater de la pieza blaca a-h: "<< endl;
                    cin >> carac;
                    if (carac =='a'|| carac=='b'||carac =='c'|| carac=='d'||carac =='e'|| carac=='f'||carac =='g'|| carac=='h'){
                        juego=true;
                    }else{
                        cout << "ingreso un caracter invalido"<< endl;
                    }
                }
                cout << "ingrese el numero de la pieza blanca 1-8"<< endl;
                int bl=0;
                cin>>bl;
                bool numer=false;
                while(numer==false){
                    if(bl<1 || bl > 8){
                        cout <<"numero invalido"<< endl;
                    }else{
                        numer=true;
                    }
                }
                //pieza negra
                juego=false;
                while (juego==false){
                    bool carac2=' ';
                    cout << "ingrese el caracater de la pieza negra a-h: "<< endl;
                    cin >> carac2;
                    if (carac2 =='a'|| carac2=='b'||carac2 =='c'|| carac2=='d'||carac2 =='e'|| carac2=='f'||carac2 =='g'|| carac2=='h'){
                        juego=true;
                    }else{
                        cout << "ingreso un caracter invalido"<< endl;
                    }
                }
                cout << "ingrese el numero de la pieza blanca 1-8"<< endl;
                int ne=0;
                cin>>ne;
                numer=false;
                while(numer==false){
                    if(ne<1 || ne > 8){
                        cout <<"numero invalido"<< endl;
                    }else{
                        numer=true;
                    }
                }//revisa numero valido para negros

                
        }break;
        case 2:{
            cout<< "bienvenido amigo"<< endl;
            //leer archivos
            ifstream file ("bitacoraPartidas.txt");
            string linea;
            int cont=0;
            int* arreglo = new int [linea.size()];
            while (getline(file ,linea)){
                if (linea[0]=='['){
                    for (int  i = 0; i < linea.size(); i++){
                        cout << "linea"<< endl;
                        if(linea[i]=='1'){
                            cout << "encuentra un 1"<< endl;
                            arreglo[cont]=7;
                            cont++;
                        }else if(linea[i]=='2'){
                            arreglo[cont]=6;
                            cont++;
                        }else if(linea[i]=='3'){
                            arreglo[cont]=5;
                            cont++;
                        }else if(linea[i]=='4'){
                            arreglo[cont]=4;
                            cont++;
                        }else if(linea[i]=='5'){
                            arreglo[cont]=3;
                            cont++;
                        }else if(linea[i]=='6'){
                            arreglo[cont]=2;
                            cont++;
                        }else if(linea[i]=='7'){
                            arreglo[cont]=1;
                            cont++;
                        }else if(linea[i]=='8'){
                            arreglo[cont]=0;
                            cont++;
                        }else if(linea[i]=='a'){
                            arreglo[cont]=7;
                            cont++;
                        }else if(linea[i]=='b'){
                            arreglo[cont]=6;
                            cont++;
                        }else if(linea[i]=='c'){
                            arreglo[cont]=5;
                            cont++;
                        }else if(linea[i]=='d'){
                            arreglo[cont]=4;
                            cont++;
                        }else if(linea[i]=='e'){
                            arreglo[cont]=3;
                            cont++;
                        }else if(linea[i]=='f'){
                            arreglo[cont]=2;
                            cont++;
                        }else if(linea[i]=='g'){
                            arreglo[cont]=1;
                            cont++;
                        }else if(linea[i]=='h'){
                            arreglo[cont]=0;
                            cont++;
                        }
                    }//fin for
                    
                }//fin del if de llaves
            }//fin while llectura fea odiosa 
                int* posx = new int[cont/2];
                int* posy= new int [cont/2];
                int contx=0;
                int conty=0;
            for (int i = 0; i < cont; i++){
                if (i==0){
                    posx[contx]=arreglo[i];
                    contx++;
                }
                if(i==1){
                    posy[conty]=arreglo[i];
                    conty++;
                }
                if (i%2==0){
                    posx[contx]=arreglo[i];
                    contx++;
                }else{
                    posy[conty]=arreglo[i];
                    conty++;
                }  
            }//fin for recorre todo
            cout <<"se imprimiran los movimientos para cada xy !"<< endl;
            cout << conty<< endl;
            for (int i = 0; i < conty-1; i++){
                cout << "posicion que agarra"<< endl;
                cout<< " x:"<< posx[i] <<" y:"<<posy[i]<< endl;
                cout << "posicion a mover"<< endl;
                cout << " x:" << posx[i+1]<< " y:"<< posy[i+1]<< endl;
            }
            
        }break;
        case 3:{
            cout << "nos vemos"<< endl;
            vive=false;
        }break;
        default: {
            cout << "opcion invalida"<< endl;
        }break;
    }//fin switch
}//fin main
	for(int i=0;i<5;i++){
		if(matrix[i]!=NULL){
			delete[] matrix[i];
       			 matrix[i]= NULL;
		}
			
	}
	

    piezas.clear();
    return 0;
}