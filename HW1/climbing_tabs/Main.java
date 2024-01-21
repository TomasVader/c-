import java.util.Scanner;
public class Main {
    public static void main(String[]args){
        System.out.println("请输入一个整数,输入回车继续：\n");
        Scanner scanner=new Scanner(System.in);
        int  n=scanner.nextInt();
            int c,d,m;
            int a=1,b=2;
            for(int i=0;i<n;i++){
                c=a+b;
                d=b+c;
                a=b;b=c;
                System.out.println(a);
            }








    }
}
