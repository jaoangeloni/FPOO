package paciente;

public class Paciente {
	private String nome;
	private float peso;
	private float altura;
	
	public Paciente(){}
	public Paciente(String nome, String peso, String altura) {
		this.nome = nome;
		this.peso = Float.parseFloat(peso);
		this.altura = Float.parseFloat(altura);
	}
	
	float obterIMC(){
		return this.peso / (this.altura * this.altura);
	}
	String obterDiagnostico(){
		if(obterIMC() < 18.5) return "Baixo peso";
		else if(obterIMC() <= 24.9) return "Peso normal";
		else if(obterIMC() <= 29.9) return "Sobrepeseo";
		else if(obterIMC() <= 39.9) return "Obesidade";
		else return "Obesidade mórbida";
	}
	
	public String toString() {
		return  this.nome + "\t" + this.peso + "\t" + this.altura + "\t" + obterIMC() + "\t" + obterDiagnostico() + "\n";
	}
	
	
}
