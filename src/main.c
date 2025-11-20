#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "results.h" // Importante: Conecta con tu archivo results.c

// Función auxiliar para hacer preguntas de Sí/No
int askQuestion(const char *question) {
    char response;
    printf("%s (s/n): ", question);
    scanf(" %c", &response);
    return (tolower(response) == 's');
}

int main() {
    printf("==================================================\n");
    printf(" SISTEMA DE DECISIÓN DE ESTRUCTURAS DE DATOS (C)\n");
    printf("==================================================\n\n");
    printf("Responde las siguientes preguntas para encontrar tu estructura ideal.\n\n");

    // --- RAMA 1: ¿Relaciones complejas o lineales? ---
    // Pregunta 1
    if (askQuestion("1. ¿Los datos representan relaciones complejas tipo red (conexiones múltiples entre elementos)?")) {
        showResult_Graph();
        return 0;
    }

    // --- RAMA 2: Jerarquía y Orden ---
    // Pregunta 2
    if (askQuestion("2. ¿Los datos tienen una estructura jerárquica (padres/hijos) o requieren ordenamiento rápido?")) {
        
        // Pregunta 3
        if (askQuestion("3. ¿Necesitas acceder siempre al elemento de MAYOR prioridad/valor rápidamente?")) {
            showResult_Heap();
        } else {
            // Es un árbol de búsqueda
            // Pregunta 4
            if (askQuestion("4. ¿Te preocupa que el árbol se desbalancee y degrade el rendimiento (quieres O(log n) garantizado)?")) {
                showResult_AVL();
            } else {
                showResult_BST();
            }
        }
        return 0;
    }

    // --- RAMA 3: Estructuras Lineales ---
    // Si llegamos aquí, es una estructura lineal
    
    // Pregunta 5
    if (askQuestion("5. ¿El orden de inserción y eliminación es estricto (LIFO o FIFO)?")) {
        // Pregunta 6
        if (askQuestion("6. ¿Necesitas que el ÚLTIMO elemento en entrar sea el PRIMERO en salir (LIFO/Pila)?")) {
            showResult_Stack();
        } else {
            showResult_Queue();
        }
        return 0;
    }

    // --- RAMA 4: Almacenamiento y Acceso ---
    // Pregunta 7
    if (askQuestion("7. ¿Conoces el tamaño exacto de datos y necesitas acceso rápido por índice (ej. dato[5])?")) {
        showResult_Array();
    } else {
        // Es una lista enlazada
        // Pregunta 8
        if (askQuestion("8. ¿Los datos deben recorrerse en un ciclo continuo (el último conecta con el primero)?")) {
            showResult_CircularLinkedList();
        } else {
            showResult_LinkedList();
        }
    }

    return 0;
}