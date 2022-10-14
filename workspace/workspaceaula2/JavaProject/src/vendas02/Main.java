package vendas02;

public class Main {

	public static void main(String[] args) {
		Venda vendas[] = new Venda[10];
		
		vendas[0]= new Venda();
		vendas[0].produto = "Camiseta";
		vendas[0].preco = 19.9f;
		vendas[0].quantidade = 1;
		
		vendas[1]= new Venda();
		vendas[1].produto = "Bermuda";
		vendas[1].preco = 39.9f;
		vendas[1].quantidade = 2;
		
		vendas[2]= new Venda();
		vendas[2].produto = "Boné";
		vendas[2].preco = 12.2f;
		vendas[2].quantidade = 1;
		
		vendas[3]= new Venda();
		vendas[3].produto = "calça";
		vendas[3].preco = 56.3f;
		vendas[3].quantidade = 2;
		
		vendas[4]= new Venda();
		vendas[4].produto = "moletom";
		vendas[4].preco = 76.3f;
		vendas[4].quantidade = 1;
		
		vendas[5]= new Venda();
		vendas[5].produto = "luva";
		vendas[5].preco = 5.1f;
		vendas[5].quantidade = 4;
		
		vendas[6]= new Venda();
		vendas[6].produto = "Tenis";
		vendas[6].preco = 402.6f;
		vendas[6].quantidade = 1;
		
		vendas[7]= new Venda();
		vendas[7].produto = "ssd";
		vendas[7].preco = 89.4f;
		vendas[7].quantidade = 3;
		
		vendas[8]= new Venda();
		vendas[8].produto = "fone";
		vendas[8].preco = 65.3f;
		vendas[8].quantidade = 1;
		
		vendas[9]= new Venda();
		vendas[9].produto = "celular";
		vendas[9].preco = 3034.3f;
		vendas[9].quantidade = 1;
		
		float total = 0;
		for(int i = 0; i < 10; i++) {
			System.out.printf("%s\t%.2f\t%d\t%.2f\n", vendas[i].produto, vendas[i].preco, vendas[i].quantidade, vendas[i].subtotal());
			total += vendas[i].subtotal();
		}
		System.out.printf("Total: R$ %.2f\n", total);
	}

}
