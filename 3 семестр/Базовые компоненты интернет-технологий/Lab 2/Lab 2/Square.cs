using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Figures
{
    class Square : Rect, IPrint
    {
        public Square(double size)
            : base(size, size) 
        {
            this.Type = "Квадрат";
        }
    }
}
