class Pattern1 {
    public static void main(String[] args) {
        int n = 0;
        for(int i = 0; i < 8; i++) {
            if(n == 2){
                n = 0;
                System.out.println();
            }
            n++;
            System.out.print("* ");
            continue;
        }
    }
}

class Pattern2 {
    public static void main(String[] args) {
        for(int i = 4; i >= 0; i--) {
            for(int j = i; j > 0; j--) {
                System.out.print(" ");
            }
            for(int k = (5-i); k > 0; k--) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

class Pattern3 {
    public static void main(String[] args) {
        for(int i = 4; i >= 0; i--) {
            for(int j = i; j > 0; j--) {
                System.out.print(" ");
            }
            for(int j = 1; j <= (5-i); j++) {
                System.out.print(j);
            }
            for(int j = (4-i); j >= 1; j--) {
                System.out.print(j);
            }
            System.out.println();
        }
    }
}

class Pattern4 {
    public static void main(String[] args) {
        for(int i = 4; i >= 0; i--) {
            for(int j = i; j > 0; j--) {
                System.out.print("  ");
            }
            for(int j = (4-i); j > 1; j--) {
                if(j % 2 == 0) 
                    System.out.print("0 ");
                else
                    System.out.print("1 ");
            }
            for(int j = 1; j < (5-i); j++) {
                if(j % 2 == 0) 
                    System.out.print("0 ");
                else
                    System.out.print("1 ");
            }
            System.out.println();
        }
    }
}