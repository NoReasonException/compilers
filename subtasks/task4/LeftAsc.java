class Testing{
    public static void main(String[] a){
        System.out.println(new LeftAsc().test());
    }
}
class LeftAsc{
    public boolean condition(int id, boolean result){
        System.out.println(id);
        return result;
    }
    public int test(){
        int retval;
        if(this.condition(1,false) ||
                this.condition(2,false) ||
                this.condition(3,false) ){
            retval=1;
        }else{
            retval=0;
        }
        return retval;
    }
}