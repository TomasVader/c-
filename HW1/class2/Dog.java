//新建类
//每个类都有函数
public class Dog {
    void Dog(){}//当你没有任何函数不在类里面是，系统自己创造一个无参函数
    //名字(属性）；
    String name;
    //年龄（属性）；
    int age;
    //方法:int(返回值类型）getAge(方法名)（填参数）{方法体；return返回值；}
    int getAge()//取得年龄（行为）；
    {
        System.out.println(age);
        return age;//方法的结束，返回值必须与声明的一样；
        //return还可以在函数里加入分支提前跳出函数；
        //void类的方法可以不返回；
        //可以有多个return 但只有一个可用；
    }
    int Dog (String name){
        this.name=name;
        return 0;
    }


}
