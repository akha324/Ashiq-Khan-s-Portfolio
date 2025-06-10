// Project 2 By Ashiq Khan
// CS212-21E(54376)
/* The purpose of this program is to read a text file
to display two sets of clock data. One set of clock data is ordered
properly while the other is not. It accomplishes that by taking each
line of an input text file, rearranging each two-digit number, and storing
it in a string which is to be printed out in a GUI. */

// The libraries are there b/c they are needed to run the rest of the program.
import java.io.File; 
import java.util.Scanner;
import java.io.FileNotFoundException;
import java.util.*; 

// The purpose of this function is to decalre arrays to store both clock lists, read the input file, store each line in both lists, and print them out in a GUI.
public class Project2 {
		 public static void main (String []args) {
		 UnsortedClockList unsortedClockList = new UnsortedClockList();
		 SortedClockList sortedClockList = new SortedClockList();
			
		 File file = new File ("project1.txt");
		 Scanner inputStream = null;

// The purpose of this block of code is to detect whether the input file is present.		
		 try {
		     inputStream = new Scanner (file);
		 }

// The purpose of this block of code is to terminate the program if the file isn't found.
        catch (FileNotFoundException e){
		       throw new IllegalArgumentException ("File not found!!");
		}

		int index = 0;
		
// The purpose of this loop is to store each line in a string.
		 while (inputStream.hasNextLine()){
		       String line = inputStream.nextLine(); 
		       if (line == null || line =="") break;
		       StringTokenizer string = new StringTokenizer(line, ":");
		       if (string.countTokens() == 3){
                  int h = 0;
                  int m = 0;
                  int s = 0;
		          Clock firstClock = new Clock(h,m,s);
		          Clock secondClock = new Clock(h,m,s);
				
		          h = Integer.parseInt(string.nextToken());
                  m = Integer.parseInt(string.nextToken());
                  s = Integer.parseInt(string.nextToken());
						
                  firstClock.setHour(h);
		          firstClock.setMinute(m);
		          firstClock.setSecond(s);
		          unsortedClockList.add(firstClock); 
			
		          secondClock.setHour(h);
		          secondClock.setMinute(m);
		          secondClock.setSecond(s);
			
		          sortedClockList.add(secondClock);
			      index++;
		 }
			
         else {
			  System.out.println(line);
         }
}
		
         ClockNode time = unsortedClockList.getFirst().next;

// The purpose of this loop is to print out the data of the unsorted clock list.		
      while (time != null){
			System.out.println(time.data);
			time = time.next;
      }
		
	  ClockNode newTime = sortedClockList.getFirst().next;
		
// The purpose of this loop is to print out the data of the sorted clock list.      
      while (newTime != null){
			System.out.println(newTime.data);
			newTime = newTime.next;
	  }

// The purpose of this block of code is to display the GUI.
		ClockGUI gui = new ClockGUI();
		gui.display(unsortedClockList, sortedClockList);
		inputStream.close();
		}  
}


