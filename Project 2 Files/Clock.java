// The purpose of this class is to create the strings being printed out.
public class Clock {
       private int hour;
       private int minute;
       private int second;

// The purpose of these set methods is to set the value of the hour, minute, and seconds.
void setHour (int hour){
	    this.hour = hour;
}
void setMinute (int minute){
	    this.minute = minute;
}
void setSecond (int second){
	    this.second = second;
}

// The purpose of these get methods is to get the value of the hour, minute, and seconds.
int getHour (){
	    return hour;
}

int getMinute (){
	    return minute;
}

int getSecond (){
	    return second;
}

// This class wil be used to get the real hours, minutes, and seconds.
public Clock (int hour, int minute, int second){
	    this.hour = hour;
	    this.minute = minute;
	    this.second = second;
}

// This purpose of this function is to create the contents of the string being printed out.
public String toString() {
	    String string = hour + ":";
       
		if (minute <= 9) {
		   string += "0"+ minute + ":";
        }
        
		else {
		   string += minute + ":";
	    }
	
	    if (second <= 9){
		   string += "0"+ second ;
	    }
	
       else {
		  string += second;
	   }
	    
       return string;	
}
}

