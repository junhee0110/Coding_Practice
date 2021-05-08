public class uush2
{
    public static void main(String[] args)
    {
        // 2-1
        System.out.println("Random array (5 * 5)");
        int num_array[][] = new int[5][5];

        for (int i = 0; i < num_array.length; i++)
        {
            for (int j = 0; j < num_array[i].length; j++)
                num_array[i][j] = (int) (Math.random() * 99 + 1);
        }

        for (int i = 0; i < num_array.length; i++)
        {
            for (int j = 0; j < num_array[i].length; j++)
                System.out.print(String.format("%4d", num_array[i][j]));
            
            System.out.println();
        }

        // 2-2
        System.out.println("\nReversed array");
        int reversed_array[][] = new int[5][5];
        for (int i = 0; i < reversed_array.length; i++)
        {
            for (int j = 0; j < reversed_array[i].length; j++)
                reversed_array[i][j] = num_array[j][i];
        }

        for (int i = 0; i < reversed_array.length; i++)
        {
            for (int j = 0; j < reversed_array[i].length; j++)
                System.out.print(String.format("%4d", reversed_array[i][j]));
            
            System.out.println();
        }
    }
}