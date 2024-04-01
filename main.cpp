#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

//Logo UMG

cout<<"\n###   ### ###   ### #########\n###   ### ######### ##\n###   ### ## ### ## ##   ####\n######### ##  #  ## #########\n"<<endl;

    // Ciclo while para mostrar el menu continuamente hasta que se elija salir
    while (true) {
        // Mostrar opciones del menu
        //Bienvenida
        cout<<"¡Bienvenido!"<<endl;
        cout<<"¿Que programa deseas ejecutar?"<<endl;
        cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
        cout<<"2. Determinar si un numero es par o impar"<<endl;
        cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
        cout<<"4. Determinar si una palabra o un numero es palondromo."<<endl;
        cout<<"5. Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
        cout<<"6. Conversion de numeros enteros a letras"<<endl;
        cout<<"7. Conversion de numeros enteros con decimal a letras"<<endl;
        cout<<"8. Una tabla de multiplicar"<<endl;
        cout<<"9. Todas las tablas de multiplicar del 1 al 10 "<<endl;
        cout<<"10. Crear de forma grafica la multiplicacion manual"<<endl;        
        cout<<"11. Conversion de nimeros decimales a binario "<<endl;
        cout<<"12. Conversion de numeros decimales a hexadecimales"<<endl;
        cout<<"13. Crear Figuras Geometricas Basicas."<<endl;
        cout<<"14. Mover un punto en toda la pantalla"<<endl;
        cout<<"15. Simulacion de un Cajero (Automata)"<<endl;
        cout<<"16. Calcular la hipotenusa"<<endl;
        cout<<"17. Programa que cuenta chistes"<<endl;
        cout<<"18. Libre (pueden realizar el programa que ustedes quieran)"<<endl;
        cout<<"19. Libre (pueden realizar el programa que ustedes quieran)"<<endl;
        cout<<"20. Libre (pueden realizar el programa que ustedes quieran)"<<endl;
 
        // Solicitar entrada al usuario
        int opcion;
        cout << "Seleccione el numero de programa a ejecutar: ";
        cin >> opcion;

        // Evaluar la opcion seleccionada
        switch (opcion) {

            case 1:
                cout<<"Ha seleccionado el programa 1"<<endl;
                system("OperacionesBasicas");
                return 0;
                break;

            case 2:
                cout<<"Ha seleccionado el programa 2"<<endl;
                system("Impar");
                return 0;
                break;

            case 3:
                cout<<"Ha seleccionado el programa 3"<<endl;
                system("ConversionesBasicas");
                return 0;
                break;

            case 4:
                cout<<"Ha seleccionado el programa 4"<<endl;
                system("Palindromo");
                return 0;
                break;
            case 5: 
                cout<<"Ha seleccionado el programa 5"<<endl;
                system("ConversionDeNumerosArabigosARomanos");
                return 0;
                break;
            
             case 6: 
                cout<<"Ha seleccionado el programa 6"<<endl;
                system("NumerosEnterosALetras");
                return 0;
                break;
            
            case 7: 
                cout<<"Ha seleccionado el programa 7"<<endl;
                system("ConversionDeNumerosEnterosConDecimalALetras");
                return 0;
                break;
            
             case 8: 
                cout<<"Ha seleccionado el programa 8"<<endl;
                system("TablaDeMultiplicar");
                return 0;
                break;
            
            case 9: 
                cout<<"Ha seleccionado el programa 9"<<endl;
                system("TablasDeMultiplicarDel1Al10");
                return 0;
                break;

            case 16:
                cout<<"Ha seleccionado el programa 16"<<endl;
                system("CalculoHipotenusa");
                return 0;
                break;
            case 17:
                cout<<"Ha seleccionado el programa 17"<<endl;
                system("ProgramaChistes");
                return 0;
                break;
            default:
                cout << "Error, por favor escriba un numero correcto" << endl; 
                break;
        }
    }

}
