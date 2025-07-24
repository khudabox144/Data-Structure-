import java.util.Scanner;

public class Practise {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        int t=scanner.nextInt();
        while (t-- > 0) {
            long n = scanner.nextLong();
            long [] arr = new long[(int)n];
            for (int i = 0; i < n; i++) {
                arr[i]=scanner.nextLong();
            }
            long operations =Integer.MAX_VALUE;
            for (int i = 0; i < n-1; i++) {
                if(arr[i]<=arr[i+1]){
                    long diff = arr[i+1]-[i];
                    long req_operations=(diff/2)+1;
                    operations =Math.min(req_operations, operations);
                }
                else{
                    operations=0;
                }
            }
            System.out.println(operations);
        }
    }
}