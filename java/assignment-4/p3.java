// Create a class Circle. It has a variable radius. Use a method setRadius() 
// for setting the value of radius and another method  calArea() to return 
// the calculated area of Circle. 

class Circle {
    private double radius;
    private final double PI = 3.14159;

    public void setRadius(double r) {
        radius = r;
    }
    public double calArea() {
        return PI * radius * radius;
    }
}

class Main {
    public static void main(String[] args) {
        Circle obj = new Circle();
        double radius = 3;
        obj.setRadius(radius);
        double area = obj.calArea();
        System.out.println("The Area with the circle of " + radius +"cm radius is: " + area + "cm^2.");
    }
}