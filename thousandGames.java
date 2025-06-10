import java.lang.Math;

public class Assignment1 {
  public static void main(String[] args){
    int lower, upper;
    lower = Integer.parseInt(args[0]);
    upper = Integer.parseInt(args[1]);
    testEachInteger(lower, upper);
    System.out.println();
    playOneThousandGames(lower, upper);
    System.out.println();
    playOneThousandGames(lower, upper);
    }
  
public static String playGame(int chosenNumber, int lower, int upper){
    String output = "";
    
    while (upper >= lower){
          double middle = (upper + lower) / 2;
          if (chosenNumber > middle) output += "1";
          else output += "0";
          upper /= 2;
    }

    return output;
    }

public static void testEachInteger(int lower, int upper){
      int a = 0, b = 0, zeroCount = 0, aCount = 0, bCount = 0, questionCount = 0, temp = upper;
      
      while (temp > 0){
             b++;
             temp /= 2;
      }

      a = b - 1;
      
      for (int i = lower; i <= upper; i++){
          System.out.format("Chosen integer %3d: ", i);
          System.out.print(playGame (i, lower, upper) + "\n");
          
          for (int j = 0; j < playGame (i, lower, upper).length(); j++)
              if (playGame (i, lower, upper).charAt(j) == '0'){
                zeroCount++;
                questionCount++;
              }

          if (zeroCount == a) aCount++;
          if (zeroCount == b) bCount++;
          zeroCount = 0;
      }

      System.out.print(aCount + "\n" + bCount + "\n" + (double) questionCount / upper);
      }   

public static void playOneThousandGames(int lower, int upper){
       int a = 0, b = 0, zeroCount = 0, aCount = 0, bCount = 0, questionCount = 0, temp = upper;
       
       for (int i = 1; i <= 1000; i++){
           int chosenNumber = (int) Math.random() * (upper - lower + 1) + lower;
           
           for (int j = 0; j < playGame (i, lower, upper).length(); j++)
               if (playGame (i, lower, upper).charAt(j) == '0'){
                  zeroCount++;
                  questionCount++;
               }

               if (zeroCount == a) aCount++;
               if (zeroCount == b) bCount++;
               zeroCount = 0;
       }

       System.out.print(aCount + "\n" + bCount + "\n" + (double) questionCount / upper);
       }
}