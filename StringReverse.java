import java.util.*;
public class StringReverse
 {
  public static void main(String args[])
   {
String strori="hello";
        System.out.println("Original String : " + strori);
           strori=new StringBuffer(strori).reverse().toString();
System.out.println(strori);
 }
}
