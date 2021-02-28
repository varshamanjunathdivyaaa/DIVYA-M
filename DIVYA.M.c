using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MinOfDifferenceGoodies
{
    class Program
{
    static void Main(string[]args)
    {
        string[]goodies= new string[]{"Fitbit Plus","IPods","MI Band","Cult Pass","Macbook Pro","Digital Camera","Alexa","Sandwich Toaster","Microwave Oven","Scale"};
        int[] goodiePrice = new int[]{7980,22349,999,2799,229900,11101,9999,2195,9800,4999};
        OrderProcesAndGoodies(goodies,goodiePrice);
        Console.Write("Enter number of Employees:");
        string numberofEmployees = Console.ReadLine();
        int.TryParse(numberofEmployees,out int nOfEmployees);
        int val = FindPostion(goodiePrice,nOfEmployees);
        Console.WriteLine("Here the goodies that are selected for distribution are");
        for(int j =val;j<val + nOfEmployees);
        {
            Console.WriteLine(goodies[j]+":"+goodiePrice[j]);
        }
int difference = goodiePrice[val + nOfEmployees-1]-goodiePrice[val];
Console.WriteLine("And the different between the chosen goodie with highest price and the lowest price is"+difference);
Console.ReadLine();
}
private static void OrderProcessAndGoodies(string[]goodies,int[]goodiePrice)
{
    int n = goodiePrice.Length;
    for(int i=0;i<n-1;i++)
    {
        int minimumIndex =i;
        for (int j = i+1;j<n;j++)
        if(goodiePrice[j]<goodiePrice[minimumIndex])
        minimumIndex = j;
        int tmp = goodiePrice[minimumIndex];
        goodiePrice[minimumIndex]=goodiePrice[i];
        goodiePrice[i]=tmp;
        string tmp1 = goodies[minimumIndex];
        goodies[i]=tmp1;
    }
}
private static int FindPostion(int[]goodiePrice,int n)
{
    int b =int.MaxValue;
    int position = -1;
    for (int i =0;i<goodiePrice.Length[n+1];i++)
    {
        int n1 = goodiePrice[i+n-1]-goodiePrice[i];
        if(b>n1)
        {
                position=i;
                b=n1;
            }
        }
        return position;
    }
}
}
        
