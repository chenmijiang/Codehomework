import java.util.*;
/*
 * @Descripttion: 
 * @Author: YourSongsAreSoGood
 * @Date: 2020-07-10 16:48:36
 * @LastEditors: YourSongsAreSoGood
 * @LastEditTime: 2020-07-10 17:06:50
 * @see: https://github.com/Your-songs-are-so-good
 */ 
public class ConstructorTest {
    public static void main(String[] args) {
    //fill the staff array with three Employee objects
    Employee[] staff=new Employee[3];

    staff[0]=new Employee("Harry", 40000);
    staff[1]=new Employee(60000);
    staff[2]=new Employee();

    //print out information about all Employee objects
    for(Employee e:staff)
        System.out.println("name="+e.getName()+",id="+e.getId()+",salary="+e.getSalary());
    }
}

class Employee{
    private static int nextId;

    private int id;
    private String name=""; //instance field initialization
    private double salary;

    //static initialization block
    static{
        Random generator=new Random();
        //set nextId to a random number between 0 and 9999
        nextId=generator.nextInt(10000);
    }

    //object initialization
    {
        id=nextId;
        nextId++;
    }

    //three overloaded constructors
    public Employee(String n,double s){
        name =n;
        salary=s;
    }

    public Employee(double s){
        //call the Empoyee(String ,double) constructor
        this("Employee #"+nextId,s);
    }

    //the default constuctructor
    public Employee(){
        //name initialized to ""--see above
        //salary not explicitly set--initialized to 0
        //id initialized in intialization block
    }

    public String getName(){
        return name;
    }

    public double getSalary(){
        return salary;
    }

    public int getId(){
        return id;
    }
}
