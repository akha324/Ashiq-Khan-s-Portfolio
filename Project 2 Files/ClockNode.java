package project3;

// The purpose of this class to define the behaviors and characteristics of a clock node.
public class ClockNode {
	    Clock dataNode;
	    ClockNode nextNodes;
	
// The purpose of this argument constructor is to refer to clock nodes in other files.   
public ClockNode (Clock clock){
		dataNode = clock;
		nextNodes = null;
	 }
}