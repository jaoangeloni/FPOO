package programa;

import java.util.Scanner;

public class Main {

	public static void main(String[] args){
		Paciente pacientes[] = new Paciente[10];
		Scanner scan = new Scanner(System.in);
		
		System.out.printf("Digite o nome,peso e altura de 10 pacientes:\n");
		for(int i = 0; i < 10; i++){
			pacientes[i] = new Paciente();
			pacientes[i].nome = scan.next();
			pacientes[i].peso = scan.nextFloat();
			pacientes[i].altura = scan.nextFloat();
		}
		System.out.println("Paciente | Peso | Altura | IMC | Diagnóstico:");
		for(int i = 0; i < 10; i++){
			System.out.println(pacientes[i].toString());
		}
	}

}
