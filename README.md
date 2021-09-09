# Algorithms

## Algoritmos para Comparativa de Rendimiento "Benchmarks - Nodos de Cómputo"

En este repositorio encontrará los siguientes 3 algoritmos para utilizar en el parcial #1 de Computación Paralela y Distribuida:
1. enteros: algoritmo de multiplicación de matrices simple
2. punteros: algoritmo de multiplicación de matrices utilizando punteros y referencia de memoria
3. threads: algoritmo de multiplicación de matrices utilizando paralelismo a nivel de threads

##Instrucciones de uso y ejecución:

* Al ingresar a cada carpeta de algoritmos, verificar que la carpeta **Soluciones** esté creada y vacía (ignorar el archivo oculto .gitignore)
* Modifique en el fichero del **lanzador.pl** (según corresponda al algoritmo), la ruta que le corresponde (línea 10). Encontrará un comentario al final de la línea con instrucciones. 
* En el algoritmo de **threads**, modifique en el fichero del **lanzador.pl** el número de hilos a utilizar en la ejecución (línea 11).
* Para compilar el algoritmo, ejecute el comando **make matricesApp**. No debe imprimir ningún error, de lo contrario favor comunique este evento al grupo de trabajo.
* Ejecute el lanzador correspondiente del algoritmo. Ej: **./lanzadorEnteros.pl**

###NOTA:
* En el algoritmo 1 lo más probable es que su procesador alcance a realizar la multiplicación de matrices de tamaño máximo 800. Es normal que arroje *error de segmentación* en los últimos tamaños de matrices.
* Recuerde que el algoritmo de **threads** lo debe ejecutar la cantidad de veces como la cantidad de hilos que tenga su CPU, modificando en cada ejecución el número de hilos.
