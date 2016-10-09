using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Figures
{
    class Rect : AbstractFigure, IPrint
    {
        /// <summary>
        /// Высота
        /// </summary>
        double height;

        /// <summary>
        /// Ширина
        /// </summary>
        double width;

        /// <summary>
        /// Основной конструктор
        /// </summary>
        /// <param name="height">Высота</param>
        /// <param name="width">Ширина</param>
        public Rect(double height, double width)
        {
            this.height = height;
            this.width = width;
            this.Type = "Прямоугольник";
        }

        /// <summary>
        /// Вычисление площади
        /// </summary>
        public override double Area()
        {
            return this.width * this.height;
        }

        public void Print()
        {
            Console.WriteLine(this.ToString());
        }
    }
}
