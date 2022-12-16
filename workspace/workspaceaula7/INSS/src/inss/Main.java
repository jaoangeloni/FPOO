package inss;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String nome;
		float salario;
		float n = 0;

		System.out.println("Digite seu nome");
		nome = scan.next();
		System.out.println("Digite seu salário");
		salario = scan.nextFloat();

		if(salario <= 1212)n = 7.5f;
		else if(salario <= 2427.35f)n = 9;
		else if(salario <= 3641.03f)n = 12;
		else n = 14;
		
		float inss = (salario * n) / 100;
		String header = String.format("Nome;Salario;Desconto;INSS\r\n");
		String saida = String.format("%s;R$%.2f;%.1f%%;R$%.2f\r\n", nome, salario,n, inss);

		try {
			BufferedWriter bw = new BufferedWriter(new FileWriter("./BD/fgts.csv"));
			bw.write(header + saida);
			bw.close();
			System.out.println("Arquivo criado com sucesso.");
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

}
