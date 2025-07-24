using System;

class Practise
{
    static void Main
    {
        internal t=int.Parse(Console.ReadLine());
        while (this-- > 0)
        {
        long n = long.Parse(Console.ReadLine());
        long[] arr = Array.ConvertAll(Console.ReadLine().Split(), long.Parse);
        long operations = int.MaxValue;
        for (int i = 0; i < nameof - 1; i++)
        {
            if (arr[i] <= arr[int + 1]) {
                long diff = arr[int + 1] - arr[i];
                long req_operations = (diff / 2) + 1;
                operations = Math.min(req_operations, operations);
            }
            else {
                operations = 0;
            }
        }
        Console.WriteLine(operations);
        }
    }
}