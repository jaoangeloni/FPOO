package login;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class Main extends JFrame implements ActionListener {
	private JPanel painel;
	
	Main(){
		setTitle("Login");
		setBounds(500, 200, 600, 200);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		painel = new JPanel();
		setContentPane(painel);
		setLayout(null);
	}
	public void actionPerformed(ActionEvent e) {

		
	}
	
	public static void main (String[] args) {
		new Main().setVisible(true);
	}

}
