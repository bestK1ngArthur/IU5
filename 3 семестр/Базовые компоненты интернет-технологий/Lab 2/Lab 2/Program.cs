using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Figures
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Тестирование работы классов\n");

            Rect rect = new Rect(12, 14);
            rect.Print();

            Square square = new Square(50);
            square.Print();

            Circle circle = new Circle(12);
            circle.Print();

            Console.ReadKey();
        }
    }
}
