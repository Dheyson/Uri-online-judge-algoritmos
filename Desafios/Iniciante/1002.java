/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.io.IOException;
import java.util.Scanner;


public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        double area,raio;
             
        raio = input.nextDouble();
        
        area = 3.14159 * raio * raio;
        
        System.out.printf("A=%.4f\n",area);
 
    }
 
}