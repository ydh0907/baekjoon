using System;
class A
{
    static void Main()
    {
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        Console.WriteLine(a * (int)(b - ((b / 10) * 10)));
        Console.WriteLine(a * (int)(b / 10 - ((b / 100) * 10)));
        Console.WriteLine(a * (int)(b / 100));
        Console.WriteLine(a * b);
    }
}