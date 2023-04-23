using System;
class a{
    static void Main(){
        string[] b = Console.ReadLine().Split();
        decimal[] a = {decimal.Parse(b[0]), decimal.Parse(b[1])};
        Console.WriteLine(a[0] / a[1]);
    }
}