package visao;

import java.util.Scanner;
import java.util.ArrayList;

import modelo.Venda;

public class Main {

	static Scanner scan = new Scanner(System.in);
	static ArrayList<Venda> vendas = new ArrayList<>();
	static int menu = 0;

	public static void main(String[] args) {
		while (menu != 5) {
			System.out.println("\n1.Cadastrar venda");
			System.out.println("2.Consultar venda");
			System.out.println("3.Alterar venda");
			System.out.println("4.Excluir venda");
			System.out.println("5.Terminar rograma");
			menu = scan.nextInt();
			switch (menu) {
			case 1:
				System.out.println("Produto\tQuantidade\tPreco");
				create();
				break;
			case 2:
				System.out.println("Produto\tQuantidade\tPreco\tsubTotal");
				read();
				break;
			case 3:
				System.out.println("Digite qual item quer alterar");
				update(scan.nextInt());
				break;
			case 4:
				System.out.println("Digite qual item quer excluir");
				delete(scan.nextInt());
				break;
			case 5:
				System.out.println("Obrigado por utilizar nosso sistema. Tchau.");
				break;
			default:
				System.out.println("Opção inválida.");
				break;
			}
		}

	}

	public static void create(){

		Venda v = new Venda();
		v.setProduto(scan.next());
		v.setQuantidade(scan.nextInt());
		v.setPreco(scan.nextFloat());
		vendas.add(v);
	}
	
	public static void read() {
		float total = 0;
		for(Venda v: vendas) {
			System.out.println(v.toString());
			total += v.subtotal();
		}
		System.out.printf("Total = %.2f\n", total);
	}
	
	public static void update(int indice){
		if(indice >= 0 && indice< vendas.size()) { 
			vendas.remove(indice);
			Venda v = new Venda();
			v.setProduto(scan.next());
			v.setQuantidade(scan.nextInt());
			v.setPreco(scan.nextFloat());
			vendas.add(v);
			System.out.println("Item alterado");
		}
		else System.out.println("Item inválido");
	}
	
	public static void delete(int indice){
		if(indice >= 0 && indice< vendas.size()) { 
			vendas.remove(indice);
			System.out.println("Item excluído");
		}
		else System.out.println("Item inválido");
	}
}
