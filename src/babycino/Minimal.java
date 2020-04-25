class Minimal{
    public static void main(String[] a){
        System.out.println(new ShortCircut().test());
    }
}

class LeftAsc{
    public boolean condition(int id, boolean result){
        System.out.println(id);
        return result;
    }
    public int test(){
        int retval;
        if(this.condition(1,false) || this.condition(2,false) || this.condition(3,false) ){
            retval=1;
        }else{
            retval=0;
        }
        return retval;
    }
}
class ShortCircut{
    public boolean condition(int id, boolean result){
        System.out.println(id);
        return result;
    }
    public int test(){
        int retval;
        if(this.condition(1,true) || this.condition(2,false) || this.condition(3,false) ){
            retval=1;
        }else{
            retval=0;
        }
        return retval;
    }
}
class Test{
    public boolean condition(int id, boolean result){
        System.out.println(id);
        return result;
    }
    public int test(){
        int retval;
        if(this.condition(1,true) && this.condition(2,true) || this.condition(3,true) && this.condition(4,false) ){
            retval=1;
        }else{
            retval=0;
        }
        return retval;
    }
}

class Tesa{
    public boolean condition(int id, boolean result){
        System.out.println(id);
        return result;
    }
    public int test(){
        int retval;
        if(this.condition(1,false) || this.condition(2,false) && this.condition(3,false) || this.condition(4,true) ){
            retval=1;
        }else{
            retval=0;
        }
        return retval;
    }
}