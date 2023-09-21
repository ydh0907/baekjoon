using System;
class A
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int count = 0;
        while(a != 0)
        {
            for(int i = 1; a - i > -1; i++)
            {
                a -= i;
                count++;
            }
        }
        Console.WriteLine(count);
    }
}