package aulas;

import java.util.Scanner;
import java.util.ArrayList;
public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		ArrayList<Turma> turmas = new ArrayList<>();
		float total = 0;
		
		System.out.println("Digite quantas turmas:");
		int n = scan.nextInt();
		System.out.println("nomeTurma\tperiodo\tDia Sem.\tNum.Alunos\tHrs. Sem.\tMensalidade");
		for (int i = 0; i < n; i++) {
			turmas.add(new Turma(scan.next(),scan.next(),scan.next(),scan.nextInt(),scan.nextInt(),scan.nextFloat()));
			total += turmas.get(i).faturamentoMensal();
		}
		System.out.println("nomeTurma\tperiodo\tDia Sem.\tNum.Alunos\tHrs. Sem.\tMensalidade");
		for(Turma t:turmas)System.out.println(t.toString());
		System.out.printf("Total\t%.2f",total);
	}

}
