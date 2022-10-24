package padrao;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Operacao produtos[] = new Operacao[10];
		float totalI = 0,totalF = 0;
		
		System.out.println("Digite 10 produtos, quantidade comprada, quandidade vendida, preco de compra e preco de venda:");
		for(int i = 0; i < 10; i++)
			produtos[i] = new Operacao(scan.next(), scan.nextInt(), scan.nextInt(), scan.nextFloat(), scan.nextFloat());
		
		System.out.println("\nProduto\t\tQtd.Compra\tQtd.Venda\tPrecoCompra\tPrecoVenda\tInvestimento\tFaturamento\tLucro(R$)\tLucro(%)");
		for(int i = 0; i < 10; i++) {
			System.out.println(produtos[i].toString());
			totalF = totalF + produtos[i].faturamento();
			totalI = totalI + produtos[i].investimento();
		}
		
		float totalL = totalF-totalI;
		
		System.out.printf("\nTotalinvestimento\t[R$%.2f]", totalI);
		System.out.printf("\nTotalFaturamento\t[R$%.2f]", totalF);
		System.out.printf("\nTotalLucro\t\t[R$%.2f]", totalL);
		if(totalL > 0)System.out.printf("\t[ESTÁ NO LUCRO!]");
	}

}
