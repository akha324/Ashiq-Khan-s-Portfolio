// The purpose of this class is to call to another method called SortedClockList.
public class SortedClockList extends ClockList {
	    public SortedClockList() {
		       super();
	    }

// The purpose of this function is to sort the sort of the clock data.
public void add (Clock dummyNode){
         ClockNode newNode = new ClockNode(dummyNode);
		 ClockNode nextNode = first ;

// A while loop is placed because it's the most efficient way to do that.		 
         while (nextNode.next != null){
		       if (dummyNode.getHour() < nextNode.next.data.getHour()) break;
               nextNode = nextNode.next;
		 }
		 
         length++;
		 newNode.next = nextNode.next;
		 nextNode.next = newNode;
		 }
}