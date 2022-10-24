package padrao;

public class Venda {
	String produto;
	int quantidade;
	float preco;
	
	Venda(){}
	Venda(String pr, int q, float p){
		produto = pr;
		quantidade = q;
		preco = p;
		
	}
	float subtotal(){
		return quantidade * preco;
	}
	public String toString() {
		return String.format("[%s]\t[%d]\t[R$%.2f]\t[R$%.2f]", produto, quantidade, preco, subtotal());
	}
}
