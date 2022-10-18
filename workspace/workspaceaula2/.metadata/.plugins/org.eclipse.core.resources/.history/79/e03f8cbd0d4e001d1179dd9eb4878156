package programa;

public class Paciente {
	String nome;
	float peso, altura;
	
	Paciente(){}
	Paciente(String nomec, float pesoc, float alturac){
		nome = nomec;
		peso = pesoc;
		altura = alturac;
	}
	
	float imc(){
		return peso/(altura*altura);
	}
	String diagnostico(){
		if(peso/(altura*altura)<16f)return "Subpeso Severo";
		else if(peso/(altura*altura)<=19.9f)return "Subpeso";
		else if(peso/(altura*altura)<=24.9f)return "Normal";
		else if(peso/(altura*altura)<=29.9f)return "Sobrepeso";
		else if(peso/(altura*altura)<39.9f)return "Obeso";
		else return "Obeso Mórbido";
	}
	public String toString() {
		return String.format("[%s] [%.2f] [%.2f] [%.2f] [%s]\n",nome,peso,altura,imc(),diagnostico());
	}
}


