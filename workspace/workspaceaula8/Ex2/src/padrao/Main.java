package padrao;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
public class Main {

	static BufferedReader br;
	
	public static void main(String[] args) {
		
		try {
			br = new BufferedReader(new FileReader("./bd/dados2.csv"));
			String linha  = br.readLine();
			int qlinha = 0;
			while(linha != null) {
				String colunas[] = linha.split(";");
				System.out.print(colunas[0]+"\t\t"+colunas[1]+"\t\t"+colunas[2]+"\n");
				linha = br.readLine();
				qlinha++;
			}
			System.out.printf("\nQuantidade de linhas = %d\n",qlinha);
			System.out.println("Quantidade de colunas = 3");
			br.close();
		} catch (FileNotFoundException e) {
			System.out.println("Arquivo não encontrado, erro: "+e);
		} catch (IOException e) {
			System.out.println("Erro ao ler o arquivo, erro: "+e);
		}
	}

}
