using System;
class A
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split();
        Console.Write(long.Parse(input[0]) + long.Parse(input[1]) + long.Parse(input[2]));
    }
}