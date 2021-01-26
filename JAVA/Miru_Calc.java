//import java.util.Scanner;

import javax.swing.JOptionPane;

public class Miru_Calc {
    public static void main(String[] args) {
       
       Calc myCalc=new Calc();
       myCalc.gesan();
       
       
    }
 }
 
class Calc{
   String input;
   int ans=0;
   int temp1;
   String temp2;
   int temp3;
   void gesan() {
   while(true) {
      input=JOptionPane.showInputDialog(input);
      

   
      if(input.equals("+")) {
         temp2=JOptionPane.showInputDialog(temp2);
         temp3=Integer.parseInt(temp2);
         ans=temp1+temp3;
         JOptionPane.showInputDialog(ans);
      }
      else {
         temp1=Integer.parseInt(input);
         ans=temp1;
      }
   if(input.equals("exit"))
      break;
   }
}
}


