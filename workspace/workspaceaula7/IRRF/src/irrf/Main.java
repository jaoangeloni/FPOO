package irrf;

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
		float taxa = 0;

		System.out.println("Digite seu nome");
		nome = scan.next();
		System.out.println("Digite seu salário");
		salario = scan.nextFloat();

		if(salario <= 1903.98f) {
			n = 0;
			taxa = 0;
		}else if(salario <= 2826.65f) {
			n = 7.5f;
			taxa = 142.80f;
		}else if(salario <= 3751.05f) {
			n = 15;
			taxa = 354.80f;
		}else if(salario <= 4664.68f) {
			n = 22.5f;
			taxa = 636.13f;
		}else {
			n = 27.5f;
			taxa = 869.36f;
		}
		
		float irrf = (salario * n) / 100 - taxa;
		String header = String.format("Nome;Salario;Porcentagem;Taxa;IRRF\r\n");
		String saida = String.format("%s;R$%.2f;%.1f%%;R$%.2f;R$%.2f\r\n\n",nome ,salario ,n , taxa, irrf);

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

