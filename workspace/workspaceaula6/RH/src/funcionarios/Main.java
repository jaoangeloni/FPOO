package funcionarios;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	static Scanner scan = new Scanner(System.in);
	static ArrayList<Funcionario> funcionario = new ArrayList<>();
	static int menu = 0;
	static String opcoes[] = { "1. Casastrar", "2. Listar Todas", "3. Alterar", "4. Excluir", "5. Buscar por nome",
			"6. Buscar por Matrícula", "7. Buscar por Nascimento", "8. Sair" };

	public static void itens(String[] itens) {
		for (String i : itens)
			System.out.println(i);
	}

	public static void main(String[] args) throws ParseException {
		while (menu != 8) {
			itens(opcoes);
			menu = scan.nextInt();
			switch (menu) {
			case 1:
				cadastrar();
				break;
			case 2:
				listarTodas();
				break;
			case 3:
				alterar();
				break;
			case 4:
				excluir();
				break;
			case 5:
				buscarNome();
				break;
			case 6:
				buscarMat();
				break;
			case 7:
				buscarNasc();
				break;
			case 8:
				System.out.println("Adios");
				break;
			default:
				System.out.println("Opção inválida");
			}
		}
	}
	public static void cadastrar() throws ParseException {
		
	}
	public static void listarTodas() {
		
	}
	public static void alterar() throws ParseException {
		
	}
	public static void excluir() {
		
	}
	public static void buscarNome(){
		
	}
	public static void buscarMat(){
		
	}
	public static void buscarNasc(){
		
	}
}
