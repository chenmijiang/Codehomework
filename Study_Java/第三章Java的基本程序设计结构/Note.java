import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Scanner;
 
public class Note {
public static void main(String[] args) throws IOException, FileNotFoundException{
Scanner reader = new Scanner(System.in);
System.out.println("Please input file name:");
String filename = reader.nextLine();
 
PrintWriter pw = new PrintWriter(
new BufferedWriter(
new OutputStreamWriter(
new FileOutputStream(filename),"UTF-8"
)
),true
);
System.out.println("Please input something:");
while(true)
{
String line = reader.nextLine();

if("exit".equals(line))
{
break;
}
//pw.write(line);
pw.println(line);
//pw.flush();
}
pw.close();
System.out.println("Thanks for Inputting");
}
 
}