package funcionarios;

import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Funcionario {
	private int matricula;
	private String nome;
	private Calendar data = Calendar.getInstance();
	
	private SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
	
	public Funcionario(int matricula, String nome, Calendar data) {
		this.matricula = matricula;
		this.nome = nome;
		this.data = data;
	}

	public int getMatricula() {
		return matricula;
	}

	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Calendar getData() {
		return data;
	}

	public void setData(Calendar data) {
		this.data = data;
	}
	
	public String toString() {
		return String.format("%d\t%s\t%s", matricula, nome, sdf.format(data.getTime()));
	}
	
}



