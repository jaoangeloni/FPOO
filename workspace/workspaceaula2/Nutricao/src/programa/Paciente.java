package programa;

public class Paciente {
	String nome;
	float peso, altura;
	float mediapeso = 1;
	float mediaaltura = 1;
	float mediaimc = 1;
	
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
		if(imc()<16f)return "Subpeso Severo";
		else if(imc()<=19.9f)return "Subpeso";
		else if(imc()<=24.9f)return "Normal";
		else if(imc()<=29.9f)return "Sobrepeso";
		else if(imc()<39.9f)return "Obeso";
		else return "Obeso Mórbido";
	}
	public String toString() {
		return String.format("%s\t\t%.2f\t%.2f\t%.2f\t%s", nome, peso, altura, imc(), diagnostico());
	}
}


