package MainPack;

import static java.lang.Math.cbrt;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
import java.util.Scanner;

public class MainClass {

    private static double Addition(double one, double two) {
        return one + two;
    }

    private static double Subtraction(double one, double two) {
        return one - two;
    }

    private static double Multiplication(double one, double two) {
        return one * two;
    }

    private static double Division(double one, double two) {
        return one / two;
    }

    private static double Power(double one, double two) {
        return pow(one, two);

    }

    private static double Lognumber(double one) {
        for (int i = 0; i < 12; ++i) {
            one = sqrt(one);
        }
        one = (one) - 1;
        one = (one * (1780.1892));
        return one;
    }

    private static double Squareroot(double one) {
        return sqrt(one);
    }

    private static double Cubicroot(double one) {
        return cbrt(one);
    }

    public static void main(String[] args) {
        Scanner cin;
        cin = new Scanner(System.in);
        double one;
        double two;
        char ch, continu;
        boolean loopn;
        loopn = true;
        while (loopn) {
            System.out.print("We Can Calculate in only these opreation\n\n");
            System.out.print("\'a\' For Addition");
            System.out.print("\t\t\'s\' For Subtraction");
            System.out.print("\t\'m\' For Multiplication");
            System.out.print("\n\'d\' For Division");
            System.out.print("\t\t\'w\' For Power");
            System.out.print("\t\t\'l\' For Log number");
            System.out.print("\n\'q\' For Square root");
            System.out.print("\t\t\'c\' For Cubic root");
            System.out.print("\t\'x\' To Exit The Program\n");
            System.out.print("\nType a characters : ");
            ch = cin.next().charAt(0);

            boolean continuation = true;
            switch (ch) {
                case 'a':
                    System.out.print("\nEnter the first number : ");
                    one = cin.nextDouble();
                    System.out.print("\nEnter the second number : ");
                    two = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Addition(one, two) + "\n");
                    break;
                case 's':
                    System.out.print("\nEnter the first number : ");
                    one = cin.nextDouble();
                    System.out.print("\nEnter the second number : ");
                    two = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Subtraction(one, two) + "\n");
                    break;
                case 'm':
                    System.out.print("\nEnter the first number : ");
                    one = cin.nextDouble();
                    System.out.print("\nEnter the second number : ");
                    two = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Multiplication(one, two) + "\n");
                    break;
                case 'd':
                    System.out.print("\nEnter the first number : ");
                    one = cin.nextDouble();
                    System.out.print("\nEnter the second number : ");
                    two = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Division(one, two) + "\n");
                    break;
                case 'w':
                    System.out.print("\nEnter  a number : ");
                    one = cin.nextDouble();
                    System.out.print("\nEnter The Velue of power : ");
                    two = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Power(one, two) + "\n");
                    break;
                case 'l':
                    System.out.print("\nEnter a number : ");
                    one = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Lognumber(one) + "\n");
                    break;
                case 'q':
                    System.out.print("\nEnter a number : ");
                    one = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Squareroot(one) + "\n");
                    break;
                case 'c':
                    System.out.print("\nEnter a number : ");
                    one = cin.nextDouble();
                    System.out.print("The Results are : ");
                    System.out.print(Cubicroot(one) + "\n");
                    break;
                case 'x':
                    loopn = false;
                    continuation = false;
                    System.out.print("\nGoodBay \n");
                    break;
                default:
                    System.out.print("\nYou Have Typed A wrong Enterd ");
                    loopn = true;
                    continuation = false;
                    System.out.print("\nplease try again");
                    break;
            }
            if (continuation == true) {
                System.out.print("\nDo You Want To Calculate SomeThing eles ?: ");
                continu = cin.next().charAt(0);
                if (continu != 'Y' || continu != 'y') {
                    loopn = true;
                }
            }
        }
    }
}
