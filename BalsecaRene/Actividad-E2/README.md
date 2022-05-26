
# PROGRAMA DE C++ DE RENÉ BALSECA

------------

###### INFORMACIÓN  DEL PROGRAMADOR:
- CARLOS RENE BALSECA NEVAREZ
- TENGO 22 AÑOS
- Estudio En La Universidad De LUIS VARGAS TORRES
- carlos.balseca.nevarez@utelvt.edu.ec
- https://www.youtube.com/watch?v=Hf5hjW515Zc

------------
##ESPECIFICACIONES DE LOS PROGRAMAS

------------
### Compara
1. Declaramos las librerías de entrada y salida también ponemos el std  motivo de esta línea, using namespace std, es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.:  

		<iostream> 
		using namespace std;

1. Lo primero que hacemos es declarar dos variables de tipo entero llamadas RB_a Y RB_b, estas variables serán usadas para almacenar los números que ingrese el usuario.

		int a,b

2. Luego con el comando escribir mostramos un  mensajes al usuario indicando que digite los dos números; seguidamente de cada mensaje utilizamos el comando leer para capturar los datos que ingresa  el usuario.

		" que numero vas a comparar "

3. Con el condicional si entonces, comparamos los dos números para saber si son iguales, en caso de cumplirse la condición enviaremos un mensaje que dirá: “ambos números son iguales”..

		si (a==b){
		 "mbos números son iguales " 

4. En caso de no cumplirse la condición, nuevamente hacemos una comparación y es para saber si el primer número es mayor que el segundo, en caso de cumplirse esa condición lo que hacemos es mostrar un mensaje indicando que el número mayor es el RB_a. 
		" El numero mayor es : "
		" El numero menor es : "

5. No habiéndose cumplido las dos primeras condiciones el algoritmo pasaría a la opción "else", en ese caso lo que ocurriría es que el número mayor es el segundo y por lo tanto lo mostraremos en pantalla  .

		" El numero mayor es: " 
		" El numero menor es: " 

#### diagrama de flujo de compara
![Image text](https://github.com/RGV2105/PRO-001/blob/main/BalsecaRene/ACTIVIDAD-B2-C2/Suma-N/BalsecaRene_SumaN.jpg)


------------

### Cuenta Moneda

1. Declaramos las librerías de entrada y salida también ponemos el std  motivo de esta línea, using namespace std, es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.:  

		<iostream> 
		using namespace std;

1. Lo segundo que hacemos es declarar dos variables de tipo entero y flotante.

			int di,ve,ci;
			float diez,vein,ciq,total

1. Luego con el comando escribir mostramos un mensajes al usuario indicando que digite los números de la moneda y siendo almacenada en este caso serían de 10 ctv, 25 ctv, 50 ctv.
 
		 "cuantas monedas de 10 ctv son "
		"cuantas monedas de 25 ctv son"
		"cuantas monedas de 50 ctv son "

1. Clasificadora de un tipo de moneda: Los números se introducen en una variable del tipo entero, el programa dice la suma total del número de monedas que hay de ese tipo ya sea de 10 ctv, 25 ctv, 50 ctv
luego se hace una suma total en la que se suma el total de las monedas

		diez=di* 0.10 ;
		vena=ve* 0.25 ;
		ciq=ci* 0,50 ;
		total=diez+vena+ciq;

1. por último se presenta en pantalla

		" el tolal de las monedas de 10ctv "
		" el tolal de las monedas de 25ctv "
		" el tolal de las monedas de 50ctv "
		" el valor total"

####diagrama de flujo de cuenta monedas

![Image text](https://github.com/RGV2105/PRO-001/blob/main/BalsecaRene/ACTIVIDAD-B2-C2/Cuenta-Moneda/BalsecaRene_CuentaMoneda.jpg)

------------
###  La Edad
-  Declaramos las librerías de entrada y salida también ponemos el std motivo de esta línea, using namespace std, es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar:

		<iostream> 
		using namespace std;

-  Lo segundo que hacemos es declarar dos variables de tipo entero en la que vamos a almacenar los datos:


		int aa,an,da,dn,edad,ma,mn;

-   El programa pide que se introduzca por teclado la fecha de nacimiento de la persona y la fecha actual. La lectura por teclado de las dos fechas consiste en leer 6 valores enteros correspondientes al día, mes y año de nacimiento y al día, mes y año actual.

		" ingrese su fecha actual "
		" formato de dia, mes, año "
		 " ingrese su fecha de nacimiento "
		 " formato de dia, mes, año "

-  La primera operación que hay que realizar para calcular la edad de la persona es restar el año actual al año de nacimiento. Ese valor en principio es la edad de la persona, pero debemos comprobar si el mes de nacimiento ya ha pasado. Si el mes de nacimiento aún no ha llegado habrá que restarle uno a la edad obtenida porque aún no ha cumplido los años. Lo mismo sucede con el día de nacimiento.
- Por ejemplo, si se introducen estas fechas:

1. Fecha actual: 18/2/2022
1. Fecha nacimiento: 20/10/2000

- Para calcular la edad primero restamos los años:  2022 - 2000 = 22
- La persona tendría 22 años pero según la fecha actual estamos en febrero y su mes de nacimiento es octubre por lo que aún no tiene 22. En ese caso hay que restarle uno a la edad obtenida.
- Algo similar hay que hacer con el día de nacimiento ya que puede darse el caso de que el mes actual coincida con el de nacimiento pero el día de nacimiento aún no haya llegado. En ese caso también habría que restarle uno a la edad calculada.


		edad=aa-an;
		
		if(ma<mn){
		edad=edad-1;
		}
		else{
		if(ma==mn){
			if(da<dn)
			edad=edad-1;
			
		}
			else{
				if(dn==da){
				"felicidades es tu cumpleaños"
			}
		}
		}
		if(edad<0){
		"no se puede calcular la edad"
		}
		else{
			edad=edad-1;
			"tu edad"
		}
#### diagrama de flujo de la edad
![Image text](https://github.com/RGV2105/PRO-001/blob/main/BalsecaRene/ACTIVIDAD-B2-C2/La-Edad/BalsecaRene_LaEdad.jpg)

------------
### punto venta

1. Declaramos las librerías de entrada y salida también ponemos el std motivo de esta línea, using namespace std, es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar:

		<iostream> 
		using namespace std;

1. una vez declarada la librería y el namespace debemos declarar los tipos enteros y flotante

		int i=0;
		float num,des,iva,subt,t,total;

1. después debemos poner cuantos productos van a registrar en la factura

		"cuantos productos vas a reregistrar para tu factura"

1. creamos un bucle en la cual podemos poner el valor de cada producto 

		do {
		"cual es el valor de los productos:"
		t=num+t;
		}while

1. después ponemos si queremos hacerle un descuento en este caso sí en mayor a 1 se realiza el descuento en porcentaje, pero si es menor a 1 solo se transforma en el sub total

		"porsentaje del descueno"
		if 
		des=t*des/100;
		subt=t-des;
		}
		else{
		subt=t;
		}

1. después se le hace la sumatoria del iva que es este caso sería del 12% y se le suma al subtotal

		iva=subt*12/100;
		total=subt+iva;

1. luego de esto se le presenta en pantalla en total

		"el subtotal"
		"el descuento"
		"el iva ";
		"total de la factura"

####diagrama de flujo de punto venta

![Image text](https://github.com/RGV2105/PRO-001/blob/main/BalsecaRene/ACTIVIDAD-B2-C2/Punto-Venta/BalsecaRene_PuntoVenta.jpg)

------------
### Suma N
1. Declaramos las librerías de entrada y salida también ponemos el std motivo de esta línea, using namespace std, es el de dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar:

	 	iostream
		using namespace std;

1. Con este programa podemos ingresar varios números de los cuales se pueden sumar ingresando el total de números de que a cuantos numeros va a sumar y con eso ya hecho podemos poner que numeros son los que quieres ingresar.

- la descripción del archivo es:

1. Declaramos las variables de tipo entero

		int i=0,a,s;

1. Se muestra en pantalla la cantidad de números a sumar y la almacenamos.

		"cuantos numeros va a sumar";

1. Mediante un While creamos una condición, donde el contador debe ser menor que la cantidad de números ingresados, luego ingresamos cada uno de los números, para luego calcular la suma de cada número ingresado por teclado.

		do {
		"cual es el numero q vas a sumar:"
		cin>>a;
		}while

1. Finalmente se debe mostrar el resultado de la suma en pantalla.

		"el resultado de la suma es"

####diagrama de flujo de Suma N

![Image text](https://github.com/RGV2105/PRO-001/blob/main/BalsecaRene/ACTIVIDAD-B2-C2/Suma-N/BalsecaRene_SumaN.jpg)

------------

## COMO DESCARGAR EL REPOSITORIO
##### Clonando un repositorio existente
Si deseas obtener una copia de un repositorio Git existente — por ejemplo, un proyecto en el que te gustaría contribuir — el comando que necesitas es git clone.

Puedes clonar un repositorio con "git clone [url]"
Por ejemplo, si quieres clonar la librería de Git  puedes hacer algo así:

	 $ git clone https://github.com/RGV2105/PRO-001.git

como es un repositorio publico no vas a tener problemas con descargarlo de esta forma puedes descargar un clon del repositorio en el cual están todos los archivos creados.
>puedes ingresar con:  cd PRO-001 
>y revisar con ls

una vez hecho encontraras todos los archivos hechos
------------
## Como Copilar En C++
### ejemolo de como crear y copilr en la terminal linux 

####  Paso # 1 – Crear el archivo holaMundo.cpp 
para crearlos utilizaremos:

	 vim holamundo.cpp
	y presionamos la tecla i

una una vez creado el vim pondremos lo siguiente:

	#include<iostream> //Biblioteca donde se encuentra la función cout
	using namespace std;  //uso del espacio de nombre std
	int main(){           //inicio de la función main
	 cout << "Hola mundo, bienvenidos!" << endl;   //Imprimir en la consola
	return 0;                     //Al terminar, retornar 0.
	}
para poder salir del programa y guardarlo utilizaremos:

>presionamos la tecla Esc
después ponemos :wq

con eso salimos y guardamos 

### Paso # 2 – Compilar un programa en C++
 Para realizar esta acción se utilizará el compilador g++ que es un compilador de código abierto y de uso libre para el lenguaje c++.
	  g++ holaMundo.cpp -o holaMundo

Si escribimos el código de forma correcta, no aparecerá ningún mensaje. De lo contrario si el código tiene errores, se mostrarán en la terminal.
El comando que compila el programa está compuesto de 4 elementos:

>-  g++: Es el programa compilador.
- -o: Es una bandera que le indica al compilador que el siguiente elemento es el archivo ejecutable y como se llamará.
- ejecutable es el nombre del archivo que se ejecutará.
- holaMundo.cpp es el nombre del código fuente.

### Paso # 3 – Ejecutar un programa en terminal con g++
Para ejecutar el programa anterior, se realizará con la siguiente instrucción:

	 ./holaMundo

con esto terminamos y tenemos un proceso funcional el cual se muestra como crear y ejecutar un programa en c++

------------

como ejecutar los archivos guardados  en BalsecaRene
------------

1. entramos en la terminal
1. ls
1. cd PRO-001
1. cd BalsecaRene
1. cd Actividad-E2
- con cada archivo tienes q ver que nombre tiene el ejecutable y poner:

		./BalsecaRene-compara
		./BalsecaRene-CuentaMoneda
		./BalsecaRene-LaEdad
		./BalsecaRene-PuntoVenta
		./BalsecaRene-SumaN

