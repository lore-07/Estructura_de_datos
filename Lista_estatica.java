/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.lista_estatica;

/**
 *
 * @author taqui
 */
import java.util.Scanner;

public class Lista_estatica {
    private int[] arreglo;
    private int tamanoActual, capacidad;

    public Lista_estatica(int cap) {
        this.capacidad = cap;
        this.arreglo = new int[cap];
        this.tamanoActual = 0;
    }

    public void insertar(int dato, int pos) {
        if (tamanoActual < capacidad && pos >= 0 && pos <= tamanoActual) {
            for (int i = tamanoActual; i > pos; i--) arreglo[i] = arreglo[i - 1];
            arreglo[pos] = dato;
            tamanoActual++;
            System.out.println("-> Insertado.");
        } else System.out.println("Error: Posición inválida o lista llena.");
    }

    public void eliminar(int pos) {
        if (pos >= 0 && pos < tamanoActual) {
            for (int i = pos; i < tamanoActual - 1; i++) arreglo[i] = arreglo[i + 1];
            tamanoActual--;
            System.out.println("-> Eliminado.");
        } else System.out.println("Error: Posición no válida.");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Lista_estatica l = new Lista_estatica(10);
        int op, d, p;
        do {
            System.out.println("\n--- MENÚ LISTA ---");
            System.out.println("1. Insertar\n2. Eliminar\n3. Mostrar\n4. Salir");
            op = sc.nextInt();
            if (op == 1) {
                System.out.print("Dato: "); d = sc.nextInt();
                System.out.print("Posición: "); p = sc.nextInt();
                l.insertar(d, p);
            } else if (op == 2) {
                System.out.print("Posición a eliminar: "); p = sc.nextInt();
                l.eliminar(p);
            } else if (op == 3) {
                for(int i=0; i<l.tamanoActual; i++) System.out.print(l.arreglo[i] + " ");
                System.out.println();
            }
        } while (op != 4);
    }
}