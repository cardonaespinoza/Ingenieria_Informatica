#include <iostream>
#include <string>

using namespace std;

string operacion(string mensaje)
{
    int contador=0;
    int codigo=0;

    //mensaje[contador] es la cadena como vector
    //el ciclo se detiene hasta que encuentre el final de cadena
    while(mensaje[contador] != '\0')
    {
        //obtiene la parte entera del caracter y se almacena en codigo
        codigo = (int) mensaje[contador];

        //comparacion para excluir los caracteres que no sean letras
        if ((codigo>96) and (codigo<123))

        //se opera el codigo al restarle 32 que es la diferencia existente entre mayusculas y minusculas
        //se le suman 3 posiciones para cumplir con el cifrado cesar, desplazamiento de carateres
        mensaje[contador]=(char) (codigo-32)+3;

        //hace el corrimiento
        contador++;
    }
    //retorna el mensaje en MAYUSCULAS
    return mensaje;
}


int main()
{
    string cadena_ingresada;
    cout<<"Ingrese la cadena a texto: ";
    getline(cin,cadena_ingresada);
    cout<<"La cadena cifrada seria: "<<operacion(cadena_ingresada);
    return 0;
}
