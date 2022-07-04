//  Alumno: Sebastian Gomez
//  Materia: Programacion 1
//  Asunto: Trabajo final
//  Profesor: Ricardo Coppo
//  Mail: seba86sg@gmail.com

// Declaracion de bibliotecas 
#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
#include <fstream>

using namespace std;

// Prototipo de funciones
void menu_principal();
void oferta_academica();
void tipo_carrera();
void presencial_virtual();
void categoria();
void guardar_info();
void preferencias();
void categoriaInteresante();
void modalidadEstudio();
void publicaPrivada();
void pausa();
void agregarCarreras();
void agregarTecnicatura();
void agregarLicenciatura();
void agregarProfesorado();


int main(){


menu_principal();

    return 0;
}

void menu_principal()
{
    // Funcion que ejecuta el menu princiapal del programa. 
    // Declaracion de variables y arreglos 
    int seleccion;
    bool repetir = true;
    
    do
    {
        // Menu del programa ejecutado con 'DO-WHILE'
        cout << "\n\t\t\t*-------------------------------------------------------*" ;
        cout << "\n\t\t\t|                 PROGRAMA 'QUIERO SER'                 |" << endl;
        cout << "\n\t\t\t|   Información sobre la oferta academica de la ciudad  |" <<endl;
        cout << "\t\t\t*-------------------------------------------------------*" << endl;
        
        cout << "\n\t1. Oferta academica de la ciudad de Bahía Blanca." << endl;
        
        cout << "\t2. ¿Que tipo de carrera quieres estudiar?" << endl;
        
        cout << "\t3. Buscar por categoria." <<endl;
        
        cout << "\t4. ¿Presencial o virtual?" << endl;
        
        cout << "\t5. Breve encuesta." << endl;

        cout << "\t6. Agregar nueva carrera." <<endl;
        
        cout << "\t0. SALIR." << endl;

        //Solicitar al usuario una opcion  
        cout << "\n\tSelecciona una opcion: ";
        cin >> seleccion;

        // Ejecutar opciones del menu
        switch (seleccion)
        {
        case 1:
            system("clear");
            oferta_academica();
            break;
            
        case 2:
            system("clear");
            tipo_carrera();
            pausa();
            break;

        case 3:
            system("clear");
            categoria();
            pausa();
            break;

        case 4:
            system("clear");
            presencial_virtual();
            pausa();
            break;

        case 5:
            system("clear");
            guardar_info();
            break;

        case 6:
            system("clear");
            agregarCarreras();
            break;    
        
        // Finalizacion de la instruccion "do".
        case 0:
            cout << "\n\t¡Exitos en tu proxima carrera!" << endl;
            
            cin.ignore(1);
            repetir = false;
            break;
        }
    
    } while (repetir);
}

void oferta_academica()
{
// Muestra la principal oferta academica de la ciudad de Bahía Blanca.
// ifstream permite la lectura del archivo 
    ifstream archivo;
    string texto;
    // Abro el archivo en modo lectura
    // ios::in me permite realizar operaciones de lectura
    archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/ofertaacademica.txt", ios::in);

    if(archivo.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
    }
    // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
    while (!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    // Cierro el archivo.
    archivo.close();

}

void tipo_carrera()
{
// Funcion que explica el tipo de carreras que existen en nustra ciudad, ya sean de grado o licenciaturas, tecnicaturas o profesorados.
// Declaracion de variables y arreglos
    int seleccion;

    cout << "\t\t\t*************************************************" ;
    cout << "\n\t\t\t|                 TIPO DE CARRERA               |" << endl;
    cout << "\t\t\t*************************************************" << endl;
    cout << "\n\tLas carreras se pueden distinguir y agrupar en diversos tipos según factores."; 
    cout << "\n\tEs importante tener en cuenta las características para tu elección, ya que puede variar considerablemente el contenido, la duración y el título que podés obtener.\n";
    cout << "\n\tQue tipo de carrera estas pensando en estudiar? " <<endl;
    cout << "\n\t1) Licenciatura 2) Tecnicatura 3) Profesorado: ";
    cout << "\n\tSelecciona una opcion: ";
    cin >> seleccion;
    cin.ignore(1);
    
    if (seleccion == 1){

        
        ifstream archivo;
        string texto;
        // Abro el archivo en modo lectura
        archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/degrado.txt", ios::in);

        if(archivo.fail()){
            cout<<"Error al abrir el archivo"<<endl;
            exit(1);
            }
        // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
        while (!archivo.eof()){
            getline(archivo,texto);
            cout<<texto<<endl;
            }
         // Cierro el archivo.
         archivo.close();

    }
    
    if (seleccion == 2){
       
     
        ifstream archivo;
        string texto;
        // Abro el archivo en modo lectura
        archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/tecnicaturas.txt", ios::in);

        if(archivo.fail()){
            cout<<"Error al abrir el archivo"<<endl;
            exit(1);
            }
        // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
        while (!archivo.eof()){
            getline(archivo,texto);
            cout<<texto<<endl;
            }
         // Cierro el archivo.
         archivo.close();
        
    }
   
    if (seleccion == 3){
       
    
        ifstream archivo;
        string texto;
        // Abro el archivo en modo lectura
        archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/profesorados.txt", ios::in);

        if(archivo.fail()){
            cout<<"Error al abrir el archivo"<<endl;
            exit(1);
            }
        // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
        while (!archivo.eof()){
            getline(archivo,texto);
            cout<<texto<<endl;
            }
         // Cierro el archivo.
         archivo.close();
       
    }
    
}

void presencial_virtual()
{
// Con esta funcion muestro la principal oferta academica que se ofrece en las modalidades de estudio presencial o virtual
// Declaracion de variables y arreglos
int opcion;

    cout << "\t\t\t*************************************************" ;
    cout << "\n\t\t\t               MODALIDAD DE ESTUDIO"    << endl;
    cout << "\t\t\t*************************************************" << endl;
    // Preguntamos que modalidad de estudio es la que prefiere el usuario 
    cout << "\n\tQuieres estudiar una carrera en forma: ¿1) Presencial o  2) Virtual?. " <<endl;
    cout << "\n\t1) Selecciona una opcion.(1-2): ";
    cout << "\n\tSelecciona una opcion: ";
    cin >> opcion;
    cin.ignore(1);
    
   // Dependiendo de la opcion se le mostrara la oferta academica disponible
if (opcion == 1){


        ifstream archivo;
        string texto;
        // Abro el archivo en modo lectura
        archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/presencial.txt", ios::in);

        if(archivo.fail()){
            cout<<"Error al abrir el archivo"<<endl;
            exit(1);
            }
        // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
        while (!archivo.eof()){
            getline(archivo,texto);
            cout<<texto<<endl;
            }
         // Cierro el archivo.
         archivo.close();
   
}

if (opcion == 2){


        ifstream archivo;
        string texto;
        // Abro el archivo en modo lectura
        archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/virtual2.txt", ios::in);

        if(archivo.fail()){
            cout<<"Error al abrir el archivo"<<endl;
            exit(1);
            }
        // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
        while (!archivo.eof()){
            getline(archivo,texto);
            cout<<texto<<endl;
            }
         // Cierro el archivo.
         archivo.close();
     
}


}

void categoria()
{
// Funcion que permite al usuario que aun no sabe que estudiar, pero si en que area se sentiria mas comodo haciendolo, ver la oferta academica correspondiente. 
// Declaracion de variables y arreglos
 int seleccion;

        cout << "\t\t\t*************************************************" ;
        cout << "\n\t\t\t                    CATEGORIAS"            << endl;
        cout << "\t\t\t*************************************************" << endl;
        cout << "\n\t Seleccione la categoria:" << endl; 
        cout << "\t1. Ciencias sociales general." << endl;
        cout << "\t2. Ciencias economicas y empresariales." << endl;
        cout << "\t3. Informatica y tecnologia." << endl;
        cout << "\n\tSelecciona una opcion: ";
        cin >> seleccion;
        cin.ignore(1);

        if (seleccion == 1){
             ifstream archivo;
             string texto;
             // Abro el archivo en modo lectura
            archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/sociales.txt", ios::in);

            if(archivo.fail()){
                cout<<"Error al abrir el archivo"<<endl;
                exit(1);
                }
            // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
            while (!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
         // Cierro el archivo.
         archivo.close();

        }

        if (seleccion == 2){
             ifstream archivo;
             string texto;
             // Abro el archivo en modo lectura
            archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/economicas.txt", ios::in);
 
            if(archivo.fail()){
                cout<<"Error al abrir el archivo"<<endl;
                exit(1);
            }
            // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
            while (!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
         // Cierro el archivo.
         archivo.close();

        }

        if (seleccion ==3){
             ifstream archivo;
             string texto;
            // Abro el archivo en modo lectura
            archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/tecnologicas.txt", ios::in);

            if(archivo.fail()){
                cout<<"Error al abrir el archivo"<<endl;
                exit(1);
            }
            // Recorro todo el archivo mediante la utilizacion de eof y con el While mientras no sea el final del archivo.
            while (!archivo.eof()){
                getline(archivo,texto);
                cout<<texto<<endl;
            }
        // Cierro el archivo.
         archivo.close();

        }
    
}

void guardar_info()
{    
    // Esta funcion permite guardar info especifica del usuario y sobre sus gustos y preferencias para poder trabajar en una estadistica a futuro con los datos recolectados.
    // Declaracion de variables
        int seleccion;
        bool repetir = true;
    //Con un "DO-WHILE" ejecuto el menu  
    do
    {
        cout << "\t\t\t*************************************************" ;
        cout << "\n\t\t\t                     ENCUESTA" << endl;
        cout << "\t\t\t*************************************************" << endl;
        
        cout << "\n\t1. ¿Prefieres estudiar una carrera de grado, tecnicatura o profesorado?" << endl;
        
        cout << "\t2. ¿Cual es fue la categoria que mas te resulto interesante?" << endl;
        
        cout << "\t3. ¿Prefieres cursar de manera presencial o virtual?" <<endl;
        
        cout << "\t4. ¿Universidad/Instituto publico o privado?" << endl;
        
        cout << "\t0. SALIR." << endl;

        //Solicitar al usuario una opcion  
        cout << "\n\tSelecciona una pregunta: ";
        cin >> seleccion;
        

        // Ejecutar opciones del menu
        switch (seleccion)
        {
        case 1:
             preferencias();
            break;
              
        case 2:
            categoriaInteresante();
            break;

        case 3:
            modalidadEstudio();
            break;

        case 4:
            publicaPrivada();
            break;
        
        case 0:
            repetir = false;
            break;   
        }

    } while (repetir);

}

void preferencias()
{
    // Creo un objeto de una clase para administrar archivos (escribir informacion) con 'ofstream' y creo el archivo 'tipocarrera.txt'
    ofstream archivoTipoCarrera("tipocarrera.txt");
     // Creo la variable 
    string carrera;

    cout << "Tipo de carrera ¿LICENCIATURA, TECNICATURA, PROFESORADO? (Escriba la opcion que desea): " ;
    cout << "\n\tSelecciona una opcion: ";
    cin >>carrera;
    // Agrego al archivo lo que el usuario escribe
    archivoTipoCarrera<<carrera;
    // Cerramos el archivo
    archivoTipoCarrera.close();

}

void categoriaInteresante()
{   
    // Creo un objeto de una clase para administrar archivos (escribir informacion) con 'ofstream' y creo el archivo 'categoria.txt'
    ofstream archivoCategoria("categoria.txt");
    // Creo la variable preferencia
    string categoria;

    cout << "Categoria ¿SOCIALES, ECONOMIA, INFORMATICA? (Escriba la opcion que desea): " ;
    cout << "\n\tSelecciona una opcion: ";
    cin >> categoria;
    // Agrego al archivo lo que el usuario escribe
    archivoCategoria<<categoria;
    // Cerramos el archivo
    archivoCategoria.close();

}

void modalidadEstudio()
{
    // Creo un objeto de una clase para administrar archivos (escribir informacion) con 'ofstream' y creo el archivo 'modalidad.txt'
    ofstream archivoModalidad("modalidad.txt");
    // Creo la variable preferencia
    string modalidad;

    cout << "Tipo de modalidad ¿PRESENCIAL, VIRTUAL? (Escriba la opcion que desea): " ;
    cout << "\n\tSelecciona una opcion: ";
    cin >> modalidad;
    // Agrego al archivo lo que el usuario escribe
    archivoModalidad<<modalidad;
    // Cerramos el archivo
    archivoModalidad.close();
}

void publicaPrivada()
{
    // Creo un objeto de una clase para administrar archivos (escribir informacion) con 'ofstream' y creo el archivo 'pubpriv.txt'
    ofstream archivoPublicaPrivada("pubpriv.txt");
    // Creo la variable 
    string pub_priv;

    cout << "Universidad/Intituto ¿PUBLICO, PRIVADO? (Escriba la opcion que desea): " ;
    cout << "\n\tSelecciona una opcion: ";
    cin >> pub_priv;
    // Agrego al archivo lo que el usuario escribe
    archivoPublicaPrivada<<pub_priv;
    // Cerramos el archivo
    archivoPublicaPrivada.close();

}

void pausa()
{
    cout << "\n\tPresione ENTER para volver al menu principal..";
    cin.ignore(1);

}

void agregarCarreras()
{
    // Funcion que permite agregar nuevas carreras (segun el tipo de carrera: Licenciatura, Tecnicatura o profesorado) a los archivos ya existentes 
   int seleccion;
   bool repetir = true;
     do
    {
        cout << "\t\t\t*************************************************" ;
        cout << "\n\t\t\t               AGREGAR NUEVA CARRERA"            << endl;
        cout << "\t\t\t*************************************************" << endl;
        
        cout << "\n\t1. Agregar nueva licenciatura" << endl;
        
        cout << "\t2. Agregar nueva tecnicatura" << endl;
        
        cout << "\t3. Agregar nuevo profesorado" <<endl;
        
        cout << "\t0. SALIR." << endl;

        //Solicitar al usuario una opcion  
        cout << "\n\tSelecciona una opcion: ";
        cin >> seleccion;
        

        // Ejecutar opciones del menu
        switch (seleccion)
        {
        case 1:
             agregarLicenciatura();
             break;
              
        case 2:
             agregarTecnicatura();
             break;

        case 3:
             agregarProfesorado();
             break;
        
        case 0:
            repetir = false;
            break;   
        }

    } while (repetir);
        


}

void agregarLicenciatura()
{
    
    ofstream archivo;
    string frase;
    // Abrimos el archivo y agregamos texto justo donde se quedo el marcador por el uso de ios::app
    archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/degrado.txt",ios::app);

    if(archivo.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
        }

    cout << "\nEscriba el nombre de la nueva carrera: ";
    // Utilizo ignore a la espera de una entrada por teclado.
    cin.ignore();
    getline(cin,frase);
         
    archivo<<"NUEVA CARREA: "<<frase<<endl;

    archivo.close();

}

void agregarTecnicatura()
{
    ofstream archivo;
    string frase;
    // Abrimos el archivo y agregamos texto justo donde se quedo el marcador por el uso de ios::app
    archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/tecnicaturas.txt",ios::app);

    if(archivo.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
        }

    cout << "\nEscriba el nombre de la nueva carrera: ";
    // Utilizo ignore a la espera de una entrada por teclado.
    cin.ignore();
    getline(cin,frase);
         
    archivo<<"NUEVA CARREA: "<<frase<<endl;

    archivo.close();

}

void agregarProfesorado()
{
    ofstream archivo;
    string frase;
    // Abrimos el archivo y agregamos texto justo donde se quedo el marcador por el uso de ios::app
    archivo.open("/Users/sebastiangomez/Desktop/TrabajoFinalC++/profesorados.txt",ios::app);

    if(archivo.fail()){
        cout<<"Error al abrir el archivo"<<endl;
        exit(1);
        }

    cout << "\nEscriba el nombre de la nueva carrera: ";
    // Utilizo ignore a la espera de una entrada por teclado.
    cin.ignore();
    getline(cin,frase);
         
    archivo<<"NUEVA CARREA: "<<frase<<endl;

    archivo.close();

}



