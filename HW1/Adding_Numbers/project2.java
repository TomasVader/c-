//引入Scanner类
import java.util.Scanner;

public class project2 {
    public static void main(String[]args){
        Scanner scanner_1=new Scanner(System.in);
        Scanner scanner_2=new Scanner(System.in);
        //输入整数
        System.out.println("请输入一个整数，按回车继续");
        int target= scanner_1.nextInt();
        //输入数组
        System.out.println("请输入一个数组，并用','分隔每个元素，按回车继续");
        String nums_before=scanner_2.nextLine();//先输入字符串
        String[] numbers_Array= nums_before.split(",");//存入字符串数组
        int [] nums=new int[numbers_Array.length];//转换成整型数组
        //将数字存入数组
        for (int i=0;i<numbers_Array.length;i++){
            nums[i]=Integer.parseInt(numbers_Array[i]);
        }
        //（调试用）读取数组
        /*for (int i=0;i<numbers_Array.length;i++){
        System.out.println(nums[i]);}*/
        //(主程序)读取数组中的数字并进行加法和判断
        int size=nums.length;
        System.out.println("数组中加和与整数相等的数字下标为：\n");
        //遍历外层（被加数）
        for (int j=0;j<size;j++){
            int J=nums[j];
            //遍历内层（加数）
            for(int k=0;k<size;k++){
                int K=nums[k];
                int sum=K+J;
                if(sum==target) {
                    if (k == j) {
                        break;
                    } else  {
                        System.out.print("["+j+","+k+"],");
                    }
                }else{
                    continue;
                }
            }//内层循环的

        }//外层循环的

    }//main函数的

}//总的
