using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace Figures
{
    class Program
    {
        static void Main(string[] args)
        {
            Rect rect = new Rect(6, 4);
            Square square = new Square(5);
            Circle circle = new Circle(7);

            // ArrayList

            Console.WriteLine("\nArrayList");
            ArrayList arrayList = new ArrayList();
            arrayList.Add(circle);
            arrayList.Add(rect);
            arrayList.Add(square);

            foreach (var x in arrayList) Console.WriteLine(x);

            Console.WriteLine("\nArrayList - отсортированный");
            arrayList.Sort();
            foreach (var x in arrayList) Console.WriteLine(x);

            // List<Figure>

            Console.WriteLine("\nList<AbstractFigure>");
            List<AbstractFigure> figureList = new List<AbstractFigure>();
            figureList.Add(circle);
            figureList.Add(rect);
            figureList.Add(square);

            foreach (var x in figureList) Console.WriteLine(x);

            Console.WriteLine("\nList<AbstractFigure> - отсортированный");
            arrayList.Sort();
            foreach (var x in arrayList) Console.WriteLine(x);

            Console.ReadKey();

        }
    }
}
