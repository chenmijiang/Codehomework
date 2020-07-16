import java.time.DayOfWeek;
import java.time.LocalDate;

/*
 * @Descripttion: 
 * @Author: YourSongsAreSoGood
 * @Date: 2020-07-10 15:22:15
 * @LastEditors: YourSongsAreSoGood
 * @LastEditTime: 2020-07-10 15:39:16
 * @see: https://github.com/Your-songs-are-so-good
 */ 

public class CalendarTest{
    public static void main(String[] args) {
        LocalDate date=LocalDate.now();
        int month=date.getMonthValue();
        int today=date.getDayOfMonth();

        date=date.minusDays(today-1);//Set to start of month
        DayOfWeek weekday=date.getDayOfWeek();
        int value=weekday.getValue();  //1=Monday,...7=Sunday
        
        System.out.println("Mon Tue Wed Thu Fri Sat Sun");
        for(int i=1;i<value;i++){
            System.out.print("    ");
        }
        while(date.getMonthValue()==month){
            System.out.printf("%3d",date.getDayOfMonth());
            if(date.getDayOfMonth()==today)
                System.out.print("*");
            else
                System.out.print(" ");
            date=date.plusDays(1);
            if(date.getDayOfWeek().getValue()==1) System.out.println();
        }
        if(date.getDayOfWeek().getValue()!=1) System.out.println();
    }
}