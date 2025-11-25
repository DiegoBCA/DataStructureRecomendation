# Plan de Pruebas Manuales (Test Plan)

Este documento describe dos casos de prueba diseñados para validar que el sistema recomienda la estructura correcta basándose en diferentes caminos lógicos.

---

## 🧪 Test Case 1: Validación de Estructura de Grafo
**Objetivo:** Verificar que el sistema detecta correctamente la necesidad de una estructura relacional compleja.

**Pasos de Ejecución:**
1. Iniciar el programa (`./decision_system`).
2. Aparece la **Pregunta 1**: "¿Los datos representan relaciones complejas tipo red...?"
3. **Acción del Usuario:** Ingresar `s` (Sí) y presionar Enter.

**Resultado Esperado:**
* El sistema no debe hacer más preguntas.
* El sistema debe mostrar el bloque "STRUCTURE: GRAPH".
* Debe aparecer la ilustración ASCII de nodos conectados.
* Debe mostrar la justificación: "Data describes relationships instead of sequences".

**Estado:** [PASSED]

---

## 🧪 Test Case 2: Validación de Pila (Stack) - Ruta LIFO
**Objetivo:** Verificar que el sistema navega correctamente por las ramas de descarte (No es Grafo -> No es Árbol) hasta llegar a una estructura lineal estricta.

**Pasos de Ejecución:**
1. Iniciar el programa (`./decision_system`).
2. **Pregunta 1** (Relaciones): Ingresar `n` (No).
3. **Pregunta 2** (Jerárquico/Orden): Ingresar `n` (No).
4. **Pregunta 5** (Orden estricto LIFO/FIFO): Ingresar `s` (Sí).
5. **Pregunta 6** (¿Último en entrar es primero en salir - LIFO?): Ingresar `s` (Sí).

**Resultado Esperado:**
* El sistema debe recomendar "STRUCTURE: STACK".
* Debe mostrar la ilustración de una pila vertical.
* Debe mostrar el pseudocódigo de `push` y `pop`.
* La justificación debe mencionar: "Most recent element must be removed first".

**Estado:** [PASSED]
