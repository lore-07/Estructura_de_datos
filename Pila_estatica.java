/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.pila_estatica;

/**
 *
 * @author taqui
 */
import java.util.Scanner;

public class Pila_estatica {
    private int top;
    private int capacidad;
    private int[] arreglo;

    public Pila_estatica(int tamano) {
        this.capacidad = tamano;
        this.arreglo = new int[capacidad];
        this.top = -1;
    }

    public boolean estaVacia() { return top == -1; }
    public boolean estaLlena() { return top == capacidad - 1; }

    public void push(int dato) {
        if (!estaLlena()) {
            arreglo[++top] = dato;
            System.out.println("-> Insertado con éxito.");
        } else {
            System.out.println("Error: Stack Overflow (Pila llena)");
        }
    }

    public void pop() {
        if (!estaVacia()) {
            System.out.println("-> Sacado: " + arreglo[top--]);
        } else {
            System.out.println("Error: Stack Underflow (Pila vacía)");
        }
    }

    public void mostrar() {
        if (estaVacia()) {
            System.out.println("La pila está vacía.");
        } else {
            System.out.print("Contenido: ");
            for (int i = top; i >= 0; i--) System.out.print("[" + arreglo[i] + "] ");
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        System.out.print("Define el tamaño de la pila: ");
        int tam = teclado.nextInt();
        Pila_estatica p = new Pila_estatica(tam);

        int opcion;
        do {
            System.out.println("\n--- MENÚ PILA ---");
            System.out.println("1. Push (Insertar)\n2. Pop (Sacar)\n3. Mostrar\n4. Salir");
            System.out.print("Opción: ");
            opcion = teclado.nextInt();

            switch (opcion) {
                case 1:
                    System.out.print("Valor a insertar: ");
                    p.push(teclado.nextInt());
                    break;
                case 2: p.pop(); break;
                case 3: p.mostrar(); break;
            }
        } while (opcion != 4);
    }
}