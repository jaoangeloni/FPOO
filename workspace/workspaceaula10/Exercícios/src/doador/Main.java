package doador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;

	public class Main extends JFrame implements ActionListener{
		JPanel painel;
		JLabel rotuloNome, rotuloIdade, rotuloSexo, rotuloPeso, rotuloResultado;
		JTextField campoNome, campoIdade, campoSexo, campoPeso;
		JButton calcular, limpar;
		JTextArea areaResultado;
	
		Main(){
			setTitle("Doação de sangue");
			setBounds(50, 50, 450, 600);
			setDefaultCloseOperation(EXIT_ON_CLOSE);
			painel = new JPanel();
			setContentPane(painel);
			setLayout(null);
			
			rotuloNome = new JLabel("Nome:");
			rotuloNome.setBounds(20, 20, 200, 30);
			painel.add(rotuloNome);

			rotuloIdade = new JLabel("Idade:");
			rotuloIdade.setBounds(20, 50, 200, 30);
			painel.add(rotuloIdade);
			
			rotuloSexo = new JLabel("Sexo:");
			rotuloSexo.setBounds(20, 80, 200, 30);
			painel.add(rotuloSexo);
			
			rotuloPeso = new JLabel("Peso:");
			rotuloPeso.setBounds(220, 80, 200, 30);
			painel.add(rotuloPeso);
						
			rotuloResultado = new JLabel("Resultado:");
			rotuloResultado.setBounds(20, 180, 200, 30);
			painel.add(rotuloResultado);
			
			campoNome = new JTextField();
			campoNome.setBounds(120, 20, 300, 30);
			painel.add(campoNome);
			
			campoIdade = new JTextField();
			campoIdade.setBounds(120, 50, 300, 30);
			painel.add(campoIdade);
			
			campoSexo = new JTextField();
			campoSexo.setBounds(120, 80, 100, 30);
			painel.add(campoSexo);
			
			campoPeso = new JTextField();
			campoPeso.setBounds(320, 80, 100, 30);
			painel.add(campoPeso);
			
			calcular = new JButton("Calcular");
			calcular.setBounds(120, 150, 100, 30);
			painel.add(calcular);
			calcular.addActionListener(this);
			
			limpar = new JButton("Limpar");
			limpar.setBounds(320, 150, 100, 30);
			painel.add(limpar);
			limpar.addActionListener(this);
			
			areaResultado = new JTextArea();
			areaResultado.setBounds(20, 210, 400, 330);
			painel.add(areaResultado);
			
			
		}
	public static void main(String[] args) {
		System.out.println("Teste");
		new Main().setVisible(true);
		
	}


	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == calcular) {
			Doador p = new Doador(campoNome.getText(),campoPeso.getText(), campoSexo.getText(),campoIdade.getText());
			areaResultado.setText(p.toString());
		}
		if(e.getSource() == limpar) {
			campoNome.setText("");
			campoPeso.setText("");
			campoSexo.setText("");
			campoIdade.setText("");
			areaResultado.setText("");
		}
	}

}
