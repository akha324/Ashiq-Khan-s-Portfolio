// The purpose of this class is to protect the clock nodes from being accessed elsewehere.
public abstract class ClockList {
       protected ClockNode first;
       protected ClockNode last;
       protected int length;

// The purpose of this argument constructor is to store the last clock node.
public ClockList (){
	    first = new ClockNode(null);
	    last = first;
	    length = 0;
}

// The purpose of the get aand set methods is to set each instance variable equal to the local variables for future operations.
public ClockNode getFirst (){
	    return last;
}

public ClockNode getLast (){
	    return last;
}

public int getLength (){
	    return length;
}

// This function is placed because it adds each node so it can be sorted and printed later.
public void append (Clock data){
	    ClockNode newNode = new ClockNode(data);
	    ClockNode nextNode = first;
	    while (nextNode.next != null){
	          nextNode = nextNode.next;
	    }
	    nextNode.next = newNode;
	    length++;
	}
}