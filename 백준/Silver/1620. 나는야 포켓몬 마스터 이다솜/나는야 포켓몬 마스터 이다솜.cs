using System;
using System.Collections.Generic;

namespace Ninza_Class
{
    internal class Program
    {
        private static Dictionary<string, int> intContainer = new Dictionary<string, int>();
        private static Dictionary<int, string> stringContainer = new Dictionary<int, string>();
        
        static void Main(string[] args)
        {
            string[] arr = Console.ReadLine().Split();
            int[] iarr = Array.ConvertAll(arr, int.Parse);
            string[] pArr = new string[iarr[0]];

            for(int i = 0; i<iarr[0]; i++)
            {
                pArr[i] = Console.ReadLine();
            }

            for(int i = 0; i < iarr[0]; i++)
            {
                stringContainer.Add(i, pArr[i]);
                intContainer.Add(stringContainer[i], i);
            }

            string[] check = new string[iarr[1]];
            int result = 0;
            for(int i=0; i<iarr[1]; i++)
            {
                check[i] = Console.ReadLine();
            }

            for(int i = 0; i < iarr[1]; i++)
            {
                if(int.TryParse(check[i], out result))
                {
                    Console.WriteLine(stringContainer[result-1]);
                }
                else
                {
                    Console.WriteLine($"{intContainer[check[i]] + 1}");
                }
            }
        }
    }
}