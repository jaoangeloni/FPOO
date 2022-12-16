package padrao;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
public class Main {

	static BufferedReader br;
	
	public static void main(String[] args) {
		
		try {
			br = new BufferedReader(new FileReader("./bd/dados1.txt"));
			String linha  = br.readLine();
			int qlinha = 0;
			while(linha != null) {
				String palavras[] = linha.split(" ");
				if(palavras.length == 2)System.out.print(palavras[0]+" "+palavras[1]);
				else System.out.print(palavras[0]+" "+palavras[1]+" "+palavras[2]);
				System.out.printf(" - A linha possui %d letras e %d palavras\n", linha.length(),palavras.length);
				linha = br.readLine();
				qlinha++;
			}
			System.out.printf("\nQuantidade de linhas é %d",qlinha);
			br.close();
		} catch (FileNotFoundException e) {
			System.out.println("Arquivo não encontrado, erro: "+e);
		} catch (IOException e) {
			System.out.println("Erro ao ler o arquivo, erro: "+e);
		}
	}

}
