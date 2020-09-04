class PrintCLA1 {
    public static void main(String args[]){  
        System.out.println("Hello "+args[0]);  
    }  

}

class PrintCLA2 {
    public static void main(String args[]){  
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        System.out.println("The Sum is: "+ (a + b));  
    }  
}

class PrintCLA3 {
    public static void main(String[] args) {
        for(int i = 0; i < 3; i++) {
            System.out.println(i + " HELLO " + args[i]); 
        }
    }
}

class PrintCLA4 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int fn = 0, a = 0, b = 1;
        for(int i = 0; i < n; i++) {
            System.out.print(a + " ");
            b =  a + b;
            a = b - a;
        }
        System.out.println();
    }
}