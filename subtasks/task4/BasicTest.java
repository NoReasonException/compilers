class Testing{
    public static void main(String[] a){
        System.out.println(new BasicTest().test());
    }
}

class BasicTest{
    public int test(){
        int retval;
        retval=0;
        if(true||true){
            if(true||false){
                if(false||true){
                    if(false||false){
                        retval=0;
                    }
                    else{
                        retval=1;
                    }
                }
                else{
                    retval=0;
                }
            }else{
                retval=0;
            }
        }else{
            retval=0;
        }
        return retval;
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
class ShortCircut{
    public boolean condition(int id, boolean result){
        System.out.println(id);
        return result;
    }
    public int test(){
        int retval;
        if(this.condition(1,true) ||
                this.condition(2,false) ||
                this.condition(3,false) ){
            retval=1;
        }else{
            retval=0;
        }
        return retval;
    }
}
class Precedence{
    public boolean condition(int id, boolean result){
        System.out.println(id);
        return result;
    }
    public int test(){
        int retval;
        if(this.condition(1,false) ||
                this.condition(2,false) &&
                this.condition(3,false) ||
                this.condition(4,true) ){
            retval=1;
        }else{
            retval=0;
        }
        return retval;
    }
}