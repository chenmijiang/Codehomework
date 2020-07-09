import java.util.Scanner;

public class Retirement {
    public static void main(String[] args){
        //read input
        Scanner in=new Scanner(System.in);

        //System.out.print("How much money do you need to retire?");
        //double goal=in.nextDouble();
        System.out.print("How much money will you contribute every year?");
        double payment=in.nextDouble();
        System.out.print("Interest rate in %: ");
        double InterestRate=in.nextDouble();
        double balance=0;
        int years=0;

        //update account balance while goal isn't reached
        // while(balance<goal){
        //     //add this year's payment and interest
        //     balance+=payment;
        //     double interest=balance*InterestRate/100;
        //     balance+=interest;
        //     years++;
        // }

        // System.out.println("You can retire in "+years+" years.");

        String input;
        //update account balance while user isn't ready to retire
        do{
            //add this year's payment snd interest
            balance+=payment;
            double interest=balance*InterestRate/100;
            balance+=interest;

            years++;

            //print current balance
            System.out.printf("After year %d,your balance is %,.2f%n",years,balance);

            //ask if ready to retire and get input
            System.out.print("Ready to retire?(Y/N)");
            input=in.next();
        }while(input.equals("N"));
    }
}