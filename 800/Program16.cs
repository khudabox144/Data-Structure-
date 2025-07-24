using System;

class Program16 {
    static void Main() {
        int t = int.Parse(Console.ReadLine());
        while (t-- > 0) {
            long n = long.Parse(Console.ReadLine());
            long[] arr = Array.ConvertAll(Console.ReadLine().Split(), long.Parse);
            long operations = int.MaxValue;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] <= arr[i + 1]) {
                    long diff = arr[i + 1] - arr[i];
                    long req_operations = (diff / 2) + 1;
                    operations = Math.Min(req_operations, operations);
                } else {
                    operations = 0;
                }
            }
            Console.WriteLine(operations);
        }
    }
}