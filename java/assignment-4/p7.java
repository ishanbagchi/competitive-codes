// Write a program in java to print System date and time using instance method.

import java.time.format.DateTimeFormatter;  
import java.time.LocalDateTime; 

class SystemDateTime {
    public void currentDateTime() {
        DateTimeFormatter date = DateTimeFormatter.ofPattern("yyyy/MM/dd");  
        DateTimeFormatter time = DateTimeFormatter.ofPattern("HH:mm:ss");
        LocalDateTime now = LocalDateTime.now();  
        System.out.println("The current date is: " + date.format(now) + "\nThe current time is: " + time.format(now)); 
    } 
}

class Main {
    public static void main(String[] args) {
        SystemDateTime obj = new SystemDateTime();
        obj.currentDateTime();
    }
}