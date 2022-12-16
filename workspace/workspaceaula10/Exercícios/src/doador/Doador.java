package doador;

public class Doador {

	private String nome;
	private int idade;
	private char sexo;
	private float peso;
	
	public Doador(){}
	public Doador(String nome, String idade, String sexo, String peso) {
		this.nome = nome;
		this.idade = Integer.parseInt(idade);
		this.sexo = sexo.charAt(0);
		this.peso = Float.parseFloat(peso);
	}

	String obterDiagnostico(){
		if(idade > 18 && idade < 69 && peso > 50) return "Está apto para doar";
		else return "Não está apto para doar";
	}
	
	public String toString() {
		return  this.nome + "\t" + obterDiagnostico() + "\n";
	}
}
