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

            // Matrix<Figure>

            Console.WriteLine("\nMatrix<AbstractFigure>");
            Matrix<AbstractFigure> matrix = new Matrix<AbstractFigure>(2, 2, 2, rect);
            Console.WriteLine(matrix.ToString());

            // SimpleList<AbstractFigure>

            Console.WriteLine("SimpleList<AbstractFigure>");
            SimpleList<AbstractFigure> list = new SimpleList<AbstractFigure>();
            list.Add(square);
            list.Add(rect);
            list.Add(circle);

            foreach (var x in list) Console.WriteLine(x);

            Console.WriteLine("\nSimpleList<AbstractFigure> - отсортированный");
            list.Sort();

            foreach (var x in list) Console.WriteLine(x);

            // SimpleStack<AbstractFigure>

            Console.WriteLine("\nSimpleStack<AbstractFigure>");
            SimpleStack<AbstractFigure> stack = new SimpleStack<AbstractFigure>();
            stack.Push(rect);
            stack.Push(square);
            stack.Push(circle);
            
            while (stack.Count > 0)
            {
                AbstractFigure f = stack.Pop();
                Console.WriteLine(f);
            }
           
            Console.ReadKey();

        }
    }
}
