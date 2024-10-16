##findroots##
Este algoritmo consiste en la obtencion de las raizes reales de un polinomio con la forma ax2 + b x + c, en caso de que este no cuente con 
raices reales, se imprimirá {}

#Funcionamiento#
El funcionamiento de este algoritmo toma como base la formula general, con lo que el mismo se separa en 3 partes
#1-. Obtencion de datos#
Se reciben los datos a, b y c del polinomio 

#2-. Validaciones#
Se valida que a no sea 0 o que el valor de la raíz sea mayor a 0, de ser el caso entra en el if y pasa al final y para finalizar en caso 
que sea 0 se realiza la operacion sin la raíz

#3-. Caso de raíz real
De pasar las validaciones, significa que el polinomio tiene raices reales, por lo que haciendo uso de una busqueda binaria, buscaremos el valor 
aproximado de la raiz en un rango de 0 a n, siendo n la raíz, el funcionamiento de la busqueda binara es interesante ya que utilizando un valor tolerancia de 0.1x10-6 
puedo buscar 2 numeros, l y r que promediados será justo la raíz, esto funciona debido a que uso la capacidad de la busqueda binaria para abarcar un rango e ir disminuyendolo
de forma gradual, y con su complejidad de O(log(n)), la raíz se consigue de forma eficiente y con una baja diferencia. Con el valor de la raíz, se realiza el resto de la 
formula general.


##Compilacion##
#Requerimentos#
1-. Un compilador de C/C++ como MinGW o Microsoft visual studio y verificar que se encuentre en las variables del entorno
2-. Cmake 3.27 minimo

#Pasos de la instalacion#
1-. Viajar a la carpeta raiz del proyecto utilizando la terminal
2-. Crear una carpeta llamada debug (mkdir debug)
3-. Entrar a la carpeta (cd debug)
4-. Generar los archivos de compilacion con cmake (cmake ..)
4.1-. En caso de que cmake no detecte el compilador de MinGW puede usarse "cmake -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ .."
5-. Una vez terminado, compilar el proyecto (cmake --build .)

Dependiendo del compilador, el archivo final findroots.exe puede estar en debug o dentro de una segunda carpeta "Debug".





