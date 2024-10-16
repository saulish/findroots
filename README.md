# FindRoots

Este programa calcula las **raíces reales** de un polinomio cuadrático de la forma **ax^2 + bx + c**. Si no existen raíces reales, el programa imprimirá **{}**.

## Funcionamiento

El algoritmo se basa en la **fórmula general** de las raíces cuadráticas y se organiza en los siguientes pasos:

### 1. Entrada de datos:
Se reciben los valores de los coeficientes **a**, **b** y **c** del polinomio desde la línea de comandos.

### 2. Validaciones:
- Si **a** es igual a 0, el polinomio no es cuadrático, por lo que el programa imprime **{}**.
- Si el discriminante **(b^2 - 4ac)** es negativo, quiere decir que no hay raíces reales, y se imprime **{}**.
- Si el discriminante es igual a 0, hay una única raíz real (doble), y se calcula utilizando la fórmula **-b / (2a)**.

### 3. Cálculo de las raíces reales:
Si el discriminante es positivo, se calculan las dos raíces reales utilizando la fórmula general. Para obtener la raíz cuadrada del discriminante, se utiliza una búsqueda binaria, con una tolerancia de **1e-6**, lo que garantiza precisión en el cálculo. La búsqueda binaria tiene una complejidad de **O(log n)**, lo que la hace eficiente para encontrar el valor aproximado de la raíz.

## Compilación

### Requisitos
1. Un compilador de C/C++ (como **MinGW** o **Microsoft Visual Studio**) correctamente configurado en las variables del entorno.
2. **CMake 3.27** o superior.

## Pasos para la compilación
1. Abre una terminal y navega a la carpeta raíz del proyecto.
2. Crea una carpeta llamada **build**:
```
mkdir build
```
3. Entra a la carpeta
```
cd build
```
4. Genera los archivos usando CMake
```
cmake ..
```
**NOTA**
En caso de que CMake no detecte el compilador de MinGW puedes utilizar
```
cmake -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ ..
```
5. Una vez generados los archivos, compila el proyecto
```
cmake --build .
```
## Ejecución
Dependiendo el compilador, el archivo **findroots.exe** puede encontrarse en la carpeta **build** creada al principio o en la subcarpeta **Debug**. 
Esto sucede ya que, al compilarlo con **Microsoft Visual Studio**, este creó una subcarpeta **Debug** mientras que al compilarlo con **MinGW**, este dejo el archivo en build.<br>
Y se usa de la siguiente forma:
```
findroots.exe a b c
```
