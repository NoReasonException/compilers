class SematicallyErroneousJavaMain{
    public static void main(String[] a){
        System.out.println(new SematicallyErroneousJava().test());
    }
}
class SematicallyErroneousJava {
    public int test(){
        boolean a;
        int b;
        b=10;
        a=true||b;
        return 1;
    }
}