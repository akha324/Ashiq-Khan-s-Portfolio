package project3;

// The purpose of this library is to ensure that the following code that creates the GUI run.
import javax.swing.*;

// The purpose of this class is to define the behaviors and characteristics of a ClockGUI.
public class ClockGUI extends JFrame {
       long number = 1L;

// The purpose of this argument constructor is to describe the title, size, and location of the GUI. Otherwise, it can't be printed out.
public ClockGUI (UnsortedClockList unsortedList,SortedClockList sortedList){
	setTitle("Sorted and Unsorted Clock Lists: "); 
	setLocation(450,450);
       setSize(500,500);
       setVisible(true);
       setDefaultCloseOperation(EXIT_ON_CLOSE);
       menuBuilder();
} 

// The purpose of this function is to add a menu bar to the GUI and the items that are on it.
public void menuBuilder (){
      JMenuItem menuItem;
      JMenuBar menuBar = new JMenuBar();
      JMenu fileMenu = new JMenu("File");
      FileMenuHandler fileMenuHandler = new FileMenuHandler(this);

      menuItem = new JMenuItem("Open");   
      menuItem.addActionListener(fileMenuHandler);
      fileMenu.add(menuItem);        
    
      menuItem = new JMenuItem("Exit");       
      menuItem.addActionListener(fileMenuHandler);
      fileMenu.add(menuItem);

      setJMenuBar(menuBar);
      menuBar.add(fileMenu);
      } 
} 