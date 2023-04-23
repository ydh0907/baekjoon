using System;
class gagamseongje {
    static void Main()
    {
        string[] b = Console.ReadLine().Split();
        int[] a = { int.Parse(b[0]), int.Parse(b[1]) };
        Console.WriteLine(a[0] + a[1]);
        Console.WriteLine(a[0] - a[1]);
        Console.WriteLine(a[0] * a[1]);
        Console.WriteLine(a[0] / a[1]);
        Console.WriteLine(a[0] % a[1]);
    }
}