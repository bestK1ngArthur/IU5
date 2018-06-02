using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Figures
{
    class SimpleStack<T> : SimpleList<T>
        where T : IComparable
    {
        /// <summary>
        /// Добавление в стек
        /// </summary>
        public void Push(T element)
        {
            Add(element);
        } 

        /// <summary>
        /// Чтение с удалением из стека
        /// </summary>
        public T Pop()
        {
            T element = Get(Count-1);

            SimpleListItem<T> listItem = GetItem(Count - 1);
            listItem = null;

            Count--;

            return element;
        }
    }
}
