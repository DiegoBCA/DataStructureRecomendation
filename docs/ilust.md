# Catálogo de Ilustraciones de Estructuras de Datos

Este documento recopila las representaciones visuales generadas por el sistema para ayudar al usuario a entender la arquitectura de cada estructura de datos recomendada.

## 1. Estructuras Lineales

### Array (Arreglo)
Representa un bloque de memoria contigua donde los elementos son accesibles directamente mediante índices numéricos.
```text
Index:  0   1   2   3   4
Value: [10][25][37][41][53]

Linked List (Lista Enlazada)
Muestra una secuencia de nodos donde cada uno contiene un dato y un puntero (*) al siguiente nodo. Termina en NULL.

Plaintext

HEAD -> [10|*] -> [25|*] -> [37|*] -> NULL
Circular Linked List (Lista Circular)
Similar a la lista enlazada, pero muestra explícitamente cómo el último nodo apunta de regreso al primero (Head), creando un ciclo infinito.

Plaintext

HEAD -> [A|*] -> [B|*] -> [C|*] --+
         ^------------------------+
Stack (Pila)
Ilustra el concepto LIFO (Last-In, First-Out) con una estructura vertical donde el acceso solo es posible por la cima (TOP).

Plaintext

TOP -> [45]
        [33]
        [12]
Queue (Cola)
Ilustra el concepto FIFO (First-In, First-Out) mostrando los punteros front (frente) y rear (final) para indicar dónde salen y entran los datos.

Plaintext

front -> [10][15][22][30][ ] <- rear
2. Estructuras Jerárquicas (Árboles)
Binary Search Tree (BST)
Muestra la jerarquía padre-hijo y la propiedad de orden: los valores menores (30, 20) están a la izquierda y los mayores (70, 60, 80) a la derecha.

Plaintext

        [50]
       /    \
    [30]    [70]
    / \     / \
 [20][40][60][80]
AVL Tree (Árbol Balanceado)
Representa un subárbol perfectamente equilibrado, donde la diferencia de altura entre las ramas izquierda y derecha es mínima, garantizando eficiencia.

Plaintext

        [30]
       /    \
    [20]    [40]
Max Heap (Montículo)
Muestra un árbol binario completo donde el nodo raíz (42) es siempre mayor que sus hijos, ilustrando la propiedad de prioridad.

Plaintext

          [42]
        /      \
     [35]      [23]
3. Estructuras Relacionales
Graph (Grafo)
Muestra dos perspectivas:

Visual: Los nodos (vértices) conectados por líneas (aristas).

Lógica: La representación en memoria mediante una "Lista de Adyacencia".

Visual:

Plaintext

a -- b
|  /|
c -- d
Lista de Adyacencia:

Plaintext

a -> b -> c
b -> a -> c -> d
c -> a -> b -> d
d -> b -> c
