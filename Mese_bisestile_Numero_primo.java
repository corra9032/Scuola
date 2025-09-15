import java.util.Scanner;
 
public class Es_1 {
	public static void main(String[] argv) 	{
		Scanner input = new Scanner(System.in);
		System.out.println("Inserisi 1 per controllare se un anno è bisestile o 2 per controllare se un numero è primo o 3 per uscire> ");
		int scelta= input.nextInt();
		switch(scelta){
			case 1:
			System.out.println("Hai scelto l'anno bisestile");
			System.out.println("Inserisi un anno> ");
			int anno = input.nextInt();
			if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)){
				System.out.println("L'anno è bisestile");
			}
			else 
				System.out.println("L'anno non è bisestile");
			
			break;
			
			case 2:
			System.out.println("Hai scelto il numero primo");
			int num = 0;
			do{
			System.out.println("Inserisci un numero> ");
			num = input.nextInt();
			} while (num < 0);
			if (num == 0 || num == 1){
				System.out.println(num +" non è primo");
				return;
			}
			int cont = 0;
			for(int i=2;i <= Math.sqrt(num);i++){
				
				if(num % i == 0){
					cont=1;
					break;
				}
			}
			if(cont == 1)
				System.out.println(num +" non è primo");
			else
				System.out.println(num +" è primo");
			 
			break;
			
			case 3:
			return;
			
			default : 
			System.out.println("Inserisci solo 1 o 2 o 3");
		}
		
			
		
			
		input.close();
	}
}
