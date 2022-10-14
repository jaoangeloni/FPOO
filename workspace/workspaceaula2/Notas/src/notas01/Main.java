package notas01;

public class Main {
	

	public static void main(String[] args) {
		Boletim boletim[] = new Boletim[4];
		
		boletim[0] = new Boletim("Jair", 10f, 5f, 10f);
		
		boletim[1] = new Boletim("José", 8f, 7f, 3f);
		
		boletim[2] = new Boletim("Humberto",6f , 5.5f, 7f);
	
		boletim[3] = new Boletim("Zeroberto", 8.8f, 10f, 10f);

		
		for(int i=0; i<4 ; i++) {
			System.out.println(boletim[i].toString());
		}
	}

}
