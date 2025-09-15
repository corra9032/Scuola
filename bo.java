import java.util.Scanner;
class min_max{
    public void mi_ma(int[] num){

        int min=num[0];
        int max=num[0];

        for (int i=0;i<(num.length);i++){
            if (num[i]>max) {
                max = num[i];
            }
            if (num[i]<min){
                min = num[i];
            }
        }
        if (min>max){
            min = max;
        }
        if (max<min){
            max = min;
        }
        System.out.println("Il numero piu piccolo e: "+ min);
        System.out.println("Il numero piu grande e: "+ max);
    }
}
public class bo {
    public static void main(String[] argv) {
        Scanner input = new Scanner(System.in);
        System.out.println("Inserisci quanti numeri vuoi inserire> ");
        int lun_arr = input.nextInt();
        int[] num = new int[lun_arr];
        System.out.println("Inserisci "+ lun_arr +" numeri>" );
        for (int i=0;i<(num.length);i++){
            num[i] = input.nextInt();
        }

        min_max mm = new min_max();
        mm.mi_ma(num);
    }
}