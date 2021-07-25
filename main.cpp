/*Actividad 2 – Estudio de caso "Definición de variables, prueba de entrada y salida de datos. 
 *Desarrollo de Aplicación en C Parte II"
 */


/*desarrollar una aplicación en el lenguaje C++ 
 *que le ofrezca realizar cálculos para determinar
 *costos, margen de ganancias y proyectar sus ventas
 */
#include <iostream>  // se incluye la librería iostream que maneja los flujos de entrada/salida
#include <stdlib.h> //Contiene funciones de C++ para gestión de memoria dinámica, control de procesos y otras
#include <math.h>  //Contiene las funciones para operaciones matemáticas básicas


using namespace std; //se usa el espacio de nombre std para poder hacer uso de las palabras reservadas (cin, cout)
int main() //la función principal
{
long referencia_Calsado; //Se declara referencia tipo entera largo
char respuesta, descripcion_Calzado[30];   //Se declara Variable tipo char con un tamaño de 30.
int talla, i, cantidad_Calzado; //Se declara tipo int para indicar nuemro de notas
float  precio_Costo_Calzado, precio_Venta_Calzado, costo_total, precio_total, utilidad_unidad;//se declaran las variables tipo float para los precios.
float  utilidad_total, porcentaje_utilidad;

cout<<" -------------------------------" <<endl;
cout<<"/ ADMINISTRAR VENTA DE ZAPATOS /" <<endl;
cout<<"------------------------------"   <<endl;

//solicitamos al usuario ingresar la REFERENCIA del clazado.
cout<<"Digite la referencia del zapato..."<<endl;
cin>>referencia_Calsado; //guardamos el valor en la variable referncia_Calzado
//cin.ignore(256,'\n');
//solicitamos al usuario ingresar la DESCRIPCIÓN del clazado.
cout<<"Digite la descripción del zapato..."<<endl;
cin.getline(descripcion_Calzado,30); //guardamos el valor en la variable descripcion_Calzado

//solicitamos al usuario digitar la Talla del clazado.
cout<<"Digite la talla del Zapato..."<<endl;
cin>>talla;


//Preguntamos al usuario si la referncia esta siponible para la venta.
cout<<"Digita la letra si esta disponible o no para la venta (S/N)..."<<endl;
cin>>respuesta;

if(respuesta == 'S')
{
//solicitamos al usuario digitar la cantidad del clazado.
cout<<"Digite la Cantidad de Zapatos..."<<endl;
cin>>cantidad_Calzado;
	
	//solicitamos al usuario digitar el precio costo del clazado.
cout<<"Digite el costo del Zapato..."<<endl;
cin>>precio_Costo_Calzado;

//solicitamos al usuario digitar el precio de venta del clazado.
cout<<"Digite el precio de venta del Zapato..."<<endl;
cin>>precio_Venta_Calzado;

//Se realizan las operaciones solicitadas

costo_total = precio_Costo_Calzado * cantidad_Calzado;
precio_total = precio_Venta_Calzado * cantidad_Calzado;
utilidad_unidad = precio_Venta_Calzado - precio_Costo_Calzado;
utilidad_total = (precio_Venta_Calzado - precio_Costo_Calzado)*cantidad_Calzado;
porcentaje_utilidad = ((precio_total* costo_total)/(precio_total))*(100);

system("cls"); // Usamos el comando cls para limpiar pantalla

cout<<"REFERENCIA:"<<referencia_Calsado<<endl;
cout<<"DESCRIPCIÓN:"<<descripcion_Calzado<<endl;
cout<<"TALLA:."<<talla<<endl;
cout<<"DISPONIBILIDAD:"<<respuesta<<endl;
cout<<"CANTIDAD DE ZAPATOS:. "<<cantidad_Calzado<<endl;
cout<<"COSTO UNIDAD: "<<precio_Costo_Calzado<<endl;
cout<<"COSTO TOTAL: "<< costo_total <<endl;
cout<<"PRECIO UNIDAD: "<<precio_Venta_Calzado<<endl;
cout<<"PRECIO TOTAL DE "<< cantidad_Calzado << " UNIDADES: " << precio_total  <<endl;
cout<<"UTILIDAD POR UNIDAD: "<< utilidad_unidad <<endl;
cout<<"UTILIDAD TOTAL: "<< utilidad_total <<endl;
cout<<"PORCENTAJE DE UTILIDAD TOTAL: "<< porcentaje_utilidad<<endl;



}else
{
	//No hace nada
}


system("pause");
return EXIT_SUCCESS;
// Jamith Garcia Arrieta CC. 19.618.834 ESTRUCTURA DEL LENGUAJE DE PROGRAMACION C++ (NIVEL I) (2362028)
}
