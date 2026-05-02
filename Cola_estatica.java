/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.cola_estatica;

/**
 *
 * @author taqui
 */
import java.util.Scanner;

public class Cola_estatica {
    private int fin;
    private int capacidad;
    private int[] arreglo;

    public Cola_estatica(int tamano) {
        this.capacidad = tamano;
        this.arreglo = new int[capacidad];
        this.fin = -1;
    }

    public boolean estaVacia() { return fin == -1; }
    public boolean estaLlena() { return fin == capacidad - 1; }

    public void enqueue(int dato) {
        if (!estaLlena()) {
            arreglo[++fin] = dato;
            System.out.println("-> Encolado correctamente.");
        } else {
            System.out.println("Error: Cola llena.");
        }
    }

    public void dequeue() {
        if (!estaVacia()) {
            System.out.println("-> Desencolado: " + arreglo[0]);
            for (int i = 0; i < fin; i++) arreglo[i] = arreglo[i + 1];
            fin--;
        } else {
            System.out.println("Error: Cola vacía.");
        }
    }

    public void mostrar() {
        if (estaVacia()) System.out.println("Cola vacía.");
        else {
            System.out.print("Cola: ");
            for (int i = 0; i <= fin; i++) System.out.print(arreglo[i] + " ");
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Tamaño de la cola: ");
        Cola_estatica c = new Cola_estatica(sc.nextInt());

        int opt;
        do {
            System.out.println("\n--- MENÚ COLA ---");
            System.out.println("1. Enqueue\n2. Dequeue\n3. Mostrar\n4. Salir");
            opt = sc.nextInt();
            if (opt == 1) { System.out.print("Dato: "); c.enqueue(sc.nextInt()); }
            else if (opt == 2) c.dequeue();
            else if (opt == 3) c.mostrar();
        } while (opt != 4);
    }
}