using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_1
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Бдумс, щас будем решать квадратные уравнениеца\n");

            double valueA = ReadDouble("Введите коэффициент А: ");
            double valueB = ReadDouble("Введите коэффициент B: ");
            double valueC = ReadDouble("Введите коэффициент C: ");

            double discriminant = System.Math.Pow(valueB, 2) - 4 * valueA * valueC;

            Console.WriteLine("Вот это дискриминантище: " + discriminant + "\n");

            if (discriminant > 0)
            {
                // Типа действительные корни
                double root1 = (-valueB + Math.Pow(valueB, 1 / 2)) / (2 * valueA);
                double root2 = (valueB + Math.Pow(valueB, 1 / 2)) / (2 * valueA);

                Console.WriteLine("Корень 1: " + root1);
                Console.WriteLine("Корень 2: " + root2 + "\n");
            }
            else if (discriminant == 0)
            {
                // Типа одинаковые действительные корни
                double root = (valueB + Math.Pow(valueB, 1 / 2)) / (2 * valueA);

                Console.WriteLine("Корень 1,2: " + root + "\n");
            }
            else
            {
                // Типа мнимые корни, которых нет
                Console.WriteLine("Корней нет\n");
            }

            Console.ReadLine();
        }

        static double ReadDouble(string message)
        {
            string resultString;
            double resultDouble;
            bool flag;

            do
            {
                Console.Write(message);

                resultString = Console.ReadLine();

                flag = double.TryParse(resultString, out resultDouble);
                if (!flag)
                {
                    Console.WriteLine("Надо бы ввести вещественное число");
                }

            }
            while (!flag);

            return resultDouble;
        }

    }
}
