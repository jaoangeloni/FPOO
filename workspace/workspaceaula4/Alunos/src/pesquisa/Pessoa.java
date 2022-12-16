package pesquisa;

public class Pessoa {
	String nome;
	String sobrenome;
	int idade;
	
	Pessoa() {
	}

	Pessoa(String n, String sn, int i) {
		nome = n;
		sobrenome = sn;
		idade = i;
	}
	
	public String faseDaVida(){
		if(idade < 14)return "Criança";
		else if(idade < 30)return "Jovem";
		else if(idade < 65)return "Adulto";
		else return "Idoso";
	}

	@Override
	public String toString() {
		return "Pessoa [nome=" + nome + ", sobrenome=" + sobrenome + ", idade=" + idade + ", faseDaVida()="
				+ faseDaVida() + "]\n";
	}
	
}
