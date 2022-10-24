package padrao;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		float total = 0,total2 = 0, barato = 0, caro = 0, vendido;
		String caros, baratos, vendidos;
		Venda produtos[] = new Venda[10];
		
		System.out.println("Digite 10 produtos, quantidade e precos:");
		for(int i = 0; i < 10; i++)
			produtos[i] = new Venda(scan.next(), scan.nextInt(), scan.nextFloat());
		
		System.out.println("\nProduto\t\tQtd.\tPreço\t\tSubtotal");
		
		barato = produtos[0].preco;
		caro = produtos[0].preco;
		vendido = produtos[0].quantidade;
		baratos = produtos[0].produto;
		caros = produtos[0].produto;
		vendidos = produtos[0].produto;
		
		for(int i = 0; i < 10; i++) {
			System.out.println(produtos[i].toString());
			total = total + produtos[i].subtotal();
			total2 = total2 + produtos[i].preco;
			   if (produtos[i].preco < barato) baratos = produtos[i].produto;
			   if (produtos[i].preco > caro) caros = produtos[i].produto;
			   if (produtos[i].quantidade > vendido) vendidos = produtos[i].produto;
		}
		
		float media = total2/ 10;
		
		System.out.printf("\nTotal\t\t\t[R$%.2f]", total2);
		System.out.printf("\nMedia\t\t\t[R$%.2f]", media);
		System.out.printf("\nProduto mais caro\t[%s]", caros);
		System.out.printf("\nProduto mais barato\t[%s]", baratos);
		System.out.printf("\nProduto mais vendido\t[%s]", vendidos);
	}

}

