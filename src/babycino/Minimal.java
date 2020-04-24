class Minimal{
    public static void main(String[] a){
        System.out.println(new Test().test(19));
    }
}
class Test{
    public int test(int num){
        int num_aux ;
        if (num < 9 || num < 15)
            num_aux = 1 ;
        else
            num_aux = 0 ;
        return num_aux ;
    }
}