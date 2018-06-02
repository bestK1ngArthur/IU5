using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Figures
{
    class Circle : AbstractFigure, IPrint
    {
        /// <summary>
        /// Ширина
        /// </summary>
        double radius;
        
        /// <summary>
        /// Основной конструктор
        /// </summary>
        /// <param name="pr">Радиус</param>
        public Circle(double pr)
        {
            this.radius = pr;
            this.Type = "Круг";
        }

        public override double Area()
        {
            double Result = Math.PI * this.radius * this.radius;
            return Result;
        }

        public void Print()
        {
            Console.WriteLine(this.ToString());
        }
    }
}
