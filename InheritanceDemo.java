class Calc{                 //Super, Parent, Base class
    public int add(int i, int j){
        return i+j;
    }
}

class CalcAdv extends Calc{ //Sub, Child, Derived class

    public int sub(int i, int j){
        return i-j;
    }
}

class CalcVeryAdv extends CalcAdv{
    public int mul(int i, int j){
        return i*j;
    }
}

public class InheritanceDemo{
    public static void main(String args[]){
        CalcAdv c1 = new CalcAdv();
        System.out.println(c1.add(3, 4));
        System.out.println(c1.sub(5, 2));
    }
}













