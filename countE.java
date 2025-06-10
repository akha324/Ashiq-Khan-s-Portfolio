// Project 0 By Ashiq Khan
// CS212-21E[54376]
/* This program will prompt the user to enter a sentence. Once the user
types a string, the program will examine each letter of it to count the
number of lower-case and lower-case e's. Afterward, the program
will display a window, telling the user the number of upper-case and 
lower-case e's in the input. */
   
import javax.swing.JOptionPane;

public class Project0 {
    public static void main (String[] args){
         while (true){                                                                  // This loop is placed here because it will allow to type as many sentences as he or she wants until the word "Stop" has beeen entered.
         	int count1 = 0;                                                             // The purpose of this variable is to count the number of lower-case e's.
         	int count2 = 0;                                                             // The purpose of this variable is to count the number of upper-case E's.
         	String sentence = JOptionPane.showInputDialog("Enter a sentence: ");        // The purpose of this variable is to store the sentence the user inputs.
          
         	if ("Stop".equalsIgnoreCase(sentence)) return;                              // This if-statement is placed here to tell if the user enters "stop". As a result, the program will terminate.         
 
         	for (int i = 0; i <= sentence.length() - 1; i++){                           // This for-loop is placed because it's the best way to examine each character of the string.
         		if (sentence.charAt(i) == 'e') count1++;                                // This if-statement is placed because it will increment count1 by 1 if a lower-case e is found.
         		if (sentence.charAt(i) == 'E') count2++;                                // This if-statement is placed because it will increment count2 by 1 if an upper-case E is there.
         	}
 
          
         	JOptionPane.showMessageDialog(null, "There are " + count1 + " lower case e's in the sentence.\n" + "There are " + count2 + " upper case E's in the sentence.");  // This line is placed because it will print out the number of upper-case and lower-case letter e's.
         }
    }
}
   

