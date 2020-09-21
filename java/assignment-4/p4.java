// Create a class SalesTaxCalculator which has two instance variables amount and taxRate.
// Use an instance method calculateTax() to calculate the taxable amount and another
// method setAmtRate() to initialize instance variables of the class.

class SalesTaxCalculator {
    double amount;
    double taxRate;

    public double calculateTax() {
        return amount - taxRate / 100 * amount;
    }
    public void setAmtRate(double amt, double rate) {
        amount = amt;
	taxRate = rate;
    }
}

class Main {
	public static void main(String []args) {
		SalesTaxCalculator obj = new SalesTaxCalculator();
		double amount = 500;
		double rate = 40;
		obj.setAmtRate(amount, rate);
		double taxableAmount = obj.calculateTax();
		System.out.println("The taxable amount with amount: Rs." + amount + " and rate: " + rate + "% is: Rs." + taxableAmount);
	}
}
