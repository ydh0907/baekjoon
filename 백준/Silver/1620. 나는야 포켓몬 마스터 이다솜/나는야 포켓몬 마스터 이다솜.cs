using System;
using System.Collections.Generic;
class A
{
    static void Main()
    {
        Dictionary<int, string> a = new Dictionary<int, string>();
        Dictionary<string, int> b = new Dictionary<string, int>();
        string[] inputint = Console.ReadLine().Split(' ');
        int D = int.Parse(inputint[0]);
        int Q = int.Parse(inputint[1]);
        string[] inputQ = new string[Q];
        string s;
        int i;
        for(i = 1; i <= D; i++){
            s = Console.ReadLine();
            a.Add(i, s);
            b.Add(s, i);
        }
        for(i = 0; i < Q; i++){
            inputQ[i] = Console.ReadLine();
        }
        for(i = 0; i < Q; i++){
            if (int.TryParse(inputQ[i], out D)) Console.WriteLine(a[D]);
            else Console.WriteLine(b[inputQ[i]].ToString());
        }
    }
}