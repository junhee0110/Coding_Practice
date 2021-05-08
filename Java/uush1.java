import java.util.Scanner;

public class uush1
{
    public static void main(String[] args)
    {
        int answer = (int) (Math.random() * 49.0 + 1.0);
        Scanner sc = new Scanner(System.in);

        while(true)
        {
            System.out.print("Enter a number: ");
            int input = sc.nextInt();

            if (input > answer)
                System.out.println("Down");
            else if (input < answer)
                System.out.println("Up");
            else
                break;
        }
        System.out.println("정답입니다! (정답 :" + answer + ")");
    }
}