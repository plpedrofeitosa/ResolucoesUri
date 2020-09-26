import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		sc.useLocale(Locale.ENGLISH);
		Locale.setDefault(new Locale("en", "US"));
		
		int n=1, aux, maior=0, posicao = 0;
		
		while (n <= 100){
			aux = sc.nextInt();
			if (aux > maior){
				maior = aux;
				posicao = n;
			}
			n++;
		}
		System.out.println(maior);
		System.out.println(posicao);
		
		sc.close();
	}
}
