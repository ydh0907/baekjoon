using System;
class A
{
    static void Main()
    {
        for(int i = 1; i <= 10000; i++)
        {
            bool isSelf = false;
            for(int j = 1; j < i; j++)
            {
                int temp, k;
                for(temp = j, k = j; k >= 1; k /= 10)
                {
                    temp += k % 10;
                }
                if(temp == i) isSelf = true;
            }
            if(!isSelf) Console.WriteLine(i);
        }
    }
}