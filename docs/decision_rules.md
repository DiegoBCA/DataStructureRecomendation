# Reglas de Decisión y Lógica del Sistema

Este documento describe el árbol de decisión lógico utilizado por el sistema para recomendar una estructura de datos. El proceso sigue un enfoque de descarte jerárquico: primero se evalúa la naturaleza de los datos (relacional vs. lineal), luego los requisitos de ordenamiento y finalmente las restricciones de acceso y memoria.

## Diagrama de Flujo Lógico

El sistema evalúa las respuestas en el siguiente orden de prioridad:

1.  **¿Son Relaciones Complejas?** (Grafos)
2.  **¿Es Jerárquico/Ordenado?** (Árboles/Heaps)
3.  **¿Es Lineal Restrictivo?** (Stacks/Queues)
4.  **¿Es Lineal de Almacenamiento General?** (Arrays/Listas)

## Mapeo de Reglas (Input -> Output)

A continuación se detalla la lógica específica para cada recomendación y su justificación (Rationale).

### 1. Rama de Relaciones

- **Regla:** Si el usuario indica que los datos representan conexiones múltiples (redes, mapas).
- **Recomendación:** **GRAFO (Graph)**
- **Racional:** Los grafos son la única estructura capaz de modelar relaciones N:M (muchos a muchos) de manera eficiente.

### 2. Rama de Jerarquía y Prioridad

Si los datos no son grafos, pero requieren ordenamiento o jerarquía:

- **Regla:** Si se requiere acceso inmediato al elemento de _mayor prioridad_.

  - **Recomendación:** **MAX HEAP (Montículo)**
  - **Racional:** Provee acceso O(1) al máximo elemento, ideal para colas de prioridad.

- **Regla:** Si se requiere ordenamiento garantizado y búsquedas rápidas, y se teme el desbalanceo.

  - **Recomendación:** **ÁRBOL AVL**
  - **Racional:** Mantiene el árbol balanceado automáticamente, garantizando operaciones en O(log n) incluso en el peor caso.

- **Regla:** Si se requiere ordenamiento pero la implementación debe ser más simple o el desbalanceo no es crítico.
  - **Recomendación:** **BST (Árbol Binario de Búsqueda)**
  - **Racional:** Estructura estándar para mantener datos ordenados y permitir búsquedas binarias.

### 3. Rama Lineal Restrictiva

Si los datos son lineales y el orden de procesamiento es estricto:

- **Regla:** Si el comportamiento es LIFO (Last-In, First-Out).

  - **Recomendación:** **STACK (Pila)**
  - **Racional:** Ideal para historiales (undo/redo), llamadas a funciones y recursión.

- **Regla:** Si el comportamiento es FIFO (First-In, First-Out).
  - **Recomendación:** **QUEUE (Cola)**
  - **Racional:** Ideal para buffers, colas de impresión y procesamiento de tareas en orden de llegada.

### 4. Rama de Almacenamiento y Acceso

Para colecciones lineales generales:

- **Regla:** Si el tamaño es conocido/fijo y se necesita acceso rápido por índice.

  - **Recomendación:** **ARRAY (Arreglo)**
  - **Racional:** Ofrece el acceso más rápido posible O(1) y eficiencia de memoria (sin punteros extra), pero es estático.

- **Regla:** Si la estructura debe ser cíclica.

  - **Recomendación:** **CIRCULAR LINKED LIST**
  - **Racional:** Permite recorrer los datos indefinidamente sin reiniciar punteros, útil para turnos o playlists.

- **Regla:** Si no se cumple ninguna de las anteriores (inserciones frecuentes, tamaño dinámico, no cíclico).
  - **Recomendación:** **LINKED LIST (Lista Enlazada)**
  - **Racional:** Permite crecimiento dinámico y operaciones de inserción/borrado eficientes sin reasignar toda la memoria.
