package vendas01;

public class Main {
	
	static Venda v1,v2,v3,v4;//Instâncias da classe Venda

	public static void main(String[] args) {
		v1 = new Venda();//objeto
		v2 = new Venda();//objeto
		v3 = new Venda();//objeto
		v4 = new Venda();//objeto
		
		v1.produto = "Camiseta";
		v1.preco = 19.9f;
		v1.quantidade = 5;
		
		v2.produto = "Bermuda";
		v2.preco = 39.9f;
		v2.quantidade = 2;
		
		v3.produto = "boné";
		v3.preco = 23.4f;
		v3.quantidade = 1;
		
		v4.produto = "calça";
		v4.preco = 56.3f;
		v4.quantidade = 3;
		
		
		System.out.println("Vendas");
		System.out.println("[Produto][Preço][Qtd][Subtotal]");
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v1.produto,v1.preco,v1.quantidade,v1.subtotal());
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v2.produto,v2.preco,v2.quantidade,v2.subtotal());
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v3.produto,v3.preco,v3.quantidade,v3.subtotal());
		System.out.printf("[%s][%.2f][%d][%.2f]\n", v4.produto,v4.preco,v4.quantidade,v4.subtotal());
		float total = v1.subtotal()+v2.subtotal()+v3.subtotal()+v4.subtotal(); 
		System.out.printf("[Total][%.2f]\n",total);
	}
}
