package DAO;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class DoadorDAO {
		BufferedWriter bw;
		String arquivo = "./bd/doadores.csv";
		public void salvar (String dados){
				try {
					bw = new BufferedWriter(new FileWriter(arquivo));
					bw.write(dados);
					bw.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
		}

	}


