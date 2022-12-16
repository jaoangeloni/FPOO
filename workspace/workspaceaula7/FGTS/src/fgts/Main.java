package fgts;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String nome;
		float salario;

		System.out.println("Digite seu nome");
		nome = scan.next();
		System.out.println("Digite seu salário");
		salario = scan.nextFloat();

		float fgts = (salario * 8) / 100;
		String header = String.format("Nome;Salario;FGTS\r\n");
		String saida = String.format("%s;R$%.2f;R$%.2f\r\n", nome, salario, fgts);

		try {
			BufferedWriter bw = new BufferedWriter(new FileWriter("./BD/fgts.csv", true));
			bw.write(header + saida);
			bw.close();
			System.out.println("Arquivo criado com sucesso.");
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

}

