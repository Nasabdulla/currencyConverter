import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
    
    
    System.out.println("number one: convert from US dollars to Canadian dollars");
    System.out.println("number two: convert from US dollars to Euros");
    System.out.println("number three: convert from US dollars to Australian dollars");
    System.out.println("number four: convert from US dollars to Japanese Yens");
    System.out.println("number five: convert from US dollars to British pounds");
    System.out.println("number six: convert from US dollars to Chinese Yuans");
    System.out.println("number seven: convert from US dollars to Mexican pesos\n");
    
     System.out.print("pick one of the following numbers: ");
     int number = input.nextInt();
    
    // checks if the number is between 1 and 7 to print the correct conversion
    
    if (number == 1){
        System.out.print("Enter the amount of US Dollars to conver to Canadian Dollars: ");
        double usd = input.nextDouble();
        System.out.print("$"+usd+" US Dollars is equivalent to $"+CurrencyConverter.USDollarToCanadianDollars(usd)+" Canadian Dollars");
    }else if (number == 2){
        System.out.print("Enter the amount of US Dollars to conver to Euros: ");
        double usd = input.nextDouble();
      System.out.print("$"+usd+" US Dollars is equivalent to $"+CurrencyConverter.USDollarToCanadianDollars(usd)+" Euros");
    }else if (number == 3){
        System.out.print("Enter the amount of US Dollars to conver to Australian dollars: ");
        double usd = input.nextDouble();
      System.out.print("$"+usd+" US Dollars is equivalent to $"+CurrencyConverter.USDollarToCanadianDollars(usd)+" Australian Dollars");
    }else if (number == 4){
        System.out.print("Enter the amount of US Dollars to conver to Japanese Yens: ");
        double usd = input.nextDouble();
      System.out.print("$"+usd+" US Dollars is equivalent to $"+CurrencyConverter.USDollarToCanadianDollars(usd)+" Japanese Yens");
    }else if (number == 5){
        System.out.print("Enter the amount of US Dollars to conver to British Pounds: ");
        double usd = input.nextDouble();
      System.out.print("$"+usd+" US Dollars is equivalent to $"+CurrencyConverter.USDollarToCanadianDollars(usd)+" British Pounds");
    }else if (number == 6){
        System.out.print("Enter the amount of US Dollars to conver to Chinese Yuans: ");
        double usd = input.nextDouble();
      System.out.print("$"+usd+" US Dollars is equivalent to $"+CurrencyConverter.USDollarToCanadianDollars(usd)+" Cinese Yuans");
    }else if (number == 7){
        System.out.print("Enter the amount of US Dollars to conver to Mexican pesos: ");
        double usd = input.nextDouble();
      System.out.print("$"+usd+" US Dollars is equivalent to $"+CurrencyConverter.USDollarToCanadianDollars(usd)+" Mecican pesos");
    }

    input.close();


    
  }
}