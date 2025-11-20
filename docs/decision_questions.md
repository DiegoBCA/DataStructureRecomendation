# Cuestionario del Sistema de Decisión de Estructuras de Datos

Este documento detalla las preguntas clave utilizadas por el sistema para determinar la estructura de datos más adecuada. El enfoque es descartar opciones progresivamente basándose en las propiedades fundamentales de las estructuras: linealidad, acceso, ordenamiento y relaciones.

## Justificación del Diseño

Las preguntas fueron diseñadas para dividir el espacio de decisión en categorías lógicas:

1.  **Naturaleza de los datos:** ¿Son lineales o relacionales?
2.  **Requisitos de orden:** ¿Se requiere ordenamiento estricto o prioridad?
3.  **Restricciones de acceso:** ¿LIFO, FIFO o acceso aleatorio?

## Lista de Preguntas

A continuación se presentan las preguntas tal como aparecen en el flujo de ejecución del programa:

**Pregunta 1:**
¿Los datos representan relaciones complejas tipo red (conexiones múltiples entre elementos, como mapas o redes sociales)?

- **Propósito:** Diferenciar entre estructuras lineales/jerárquicas y Grafos.
- **Opciones:** Sí / No

**Pregunta 2:**
¿Los datos tienen una estructura jerárquica (padres/hijos) o requieren mantenerse ordenados para búsquedas rápidas?

- **Propósito:** Identificar la necesidad de Árboles (BST, AVL, Heap) frente a estructuras lineales simples.
- **Opciones:** Sí / No

**Pregunta 3:**
(Si es jerárquico) ¿Necesitas acceder siempre al elemento de MAYOR prioridad o valor rápidamente (ej. colas de prioridad)?

- **Propósito:** Distinguir entre un Heap (Montículo) y árboles de búsqueda (BST/AVL).
- **Opciones:** Sí / No

**Pregunta 4:**
(Si es árbol de búsqueda) ¿Te preocupa que el árbol se desbalancee y degrade el rendimiento (quieres O(log n) garantizado)?

- **Propósito:** Decidir entre un BST simple y un árbol autobalanceado (AVL).
- **Opciones:** Sí / No

**Pregunta 5:**
¿El orden de inserción y eliminación es estricto y limitado (solo por los extremos)?

- **Propósito:** Identificar pilas (Stacks) y colas (Queues).
- **Opciones:** Sí / No

**Pregunta 6:**
(Si es estricto) ¿Necesitas que el ÚLTIMO elemento en entrar sea el PRIMERO en salir (comportamiento de Pila/LIFO)?

- **Propósito:** Diferenciar Stack (LIFO) de Queue (FIFO).
- **Opciones:** Sí / No

**Pregunta 7:**
¿Conoces el tamaño exacto de datos (es fijo) y necesitas acceso rápido directo por índice (ej. dato[5])?

- **Propósito:** Recomendar Arrays estáticos para máxima velocidad de acceso frente a estructuras dinámicas.
- **Opciones:** Sí / No

**Pregunta 8:**
(Si es lista dinámica) ¿Los datos deben recorrerse en un ciclo continuo (el último elemento conecta de nuevo con el primero)?

- **Propósito:** Distinguir entre una Lista Enlazada simple y una Lista Circular.
- **Opciones:** Sí / No
