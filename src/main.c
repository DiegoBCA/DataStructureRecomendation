#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //libreria para usar tolower, etc
#include "results.h" // nos permite usar showresult, es decir llamar a otros archivos con funciones

// Función auxiliar, sirve para recibir la entrda, s = si / n = no
int askQuestion(const char *question) {
    char response; //var para guardar la respuesta
    printf("%s (s/n): ", question); //mensaje de question
    scanf(" %c", &response); //input
    return (tolower(response) == 's'); //retorna 1 si es true o 0 si es false (usa tolower para convertir a minusculas)
}

int main() {
    printf("==================================================\n");
    printf(" SISTEMA DE DECISIÓN DE ESTRUCTURAS DE DATOS (C)\n");
    printf("==================================================\n\n");
    printf("Responde las siguientes preguntas para encontrar tu estructura ideal.\n\n");



    // --- RAMA 1: ¿Relaciones complejas o lineales? ---
    // Pregunta 1
    if (askQuestion("1. ¿Los datos representan relaciones complejas tipo red (conexiones múltiples entre elementos)?")) {
        showResult_Graph(); //si la respuesta es Si, recomienda grafos
        return 0; //termina el programa si la respuesta fue si
    }

    


    // --- RAMA 2: Jerarquía y Orden ---
    // Pregunta 2 (en caso de que la respuesta anterior sea no)
    if (askQuestion("2. ¿Los datos tienen una estructura jerárquica (padres/hijos) o requieren ordenamiento rápido?")) {
        
        // Pregunta 3
        if (askQuestion("3. ¿Necesitas acceder siempre al elemento de MAYOR prioridad/valor rápidamente?")) {
            showResult_Heap(); //en caso de que sea si, recomienda un heap
        } else {
            // Es un árbol de búsqueda
            // Pregunta 4 (en caso de que sea no la pregunta anterior)
            if (askQuestion("4. ¿Te preocupa que el árbol se desbalancee y degrade el rendimiento (quieres O(log n) garantizado)?")) {
                showResult_AVL(); //en caso de poner si, recomienda AVL
            } else {
                showResult_BST(); //en caso de que sea no, recomienda BST
            }
        }
        return 0; //acaba el programa
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
