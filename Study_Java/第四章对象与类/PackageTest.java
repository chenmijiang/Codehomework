import static java.lang.System.*;
/*
 * @Descripttion: 
 * @Author: YourSongsAreSoGood
 * @Date: 2020-07-10 17:11:32
 * @LastEditors: YourSongsAreSoGood
 * @LastEditTime: 2020-07-10 17:47:48
 * @see: https://github.com/Your-songs-are-so-good
 */
import com.horstmann.corejava.Employee; 

public class PackageTest {
    public static void main(String[] args) {
        //because of the import statement,we don't have to use
        //com.horstamann.corejava.Employee here
        Employee harry=new Employee("Harry Hacker", 50000, 1989, 10, 1);
        harry.raiseSalary(5);

        //because of the static import statement,we don't have to use System.out here
        out.println("name"+harry.getName()+",salary="+harry.getSalary());
    }
}
