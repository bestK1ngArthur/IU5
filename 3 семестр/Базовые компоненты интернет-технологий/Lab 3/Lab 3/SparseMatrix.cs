using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace SparseMatrix
{
    public class Matrix<T>
    {
        /// <summary>
        /// Словарь для хранения значений
        /// </summary>
        Dictionary<string, T> _matrix = new Dictionary<string, T>();

        /// <summary>         
        /// Количество элементов по горизонтали (максимальное количество столбцов)
        /// </summary>        
        int maxX; 
  
        /// <summary>         
        /// Количество элементов по вертикали (максимальное количество строк)         
        /// </summary>        
        int maxY; 
 
        /// <summary>         
        /// Пустой элемент, который возвращается если элемент с нужными координатами не был задан      
        /// </summary>         
        T nullElement; 
 
        /// <summary>    
        /// Конструктор  
        /// </summary> 
        public Matrix(int px, int py, T nullElementParam) 
        {
            this.maxX = px;
            this.maxY = py;
            this.nullElement = nullElementParam;
        } 
 
        /// <summary>
        /// Индексатор для доступа к данных
        /// </summary>
        public T this[int x, int y]
        {
            get {
                CheckBounds(x, y);
                string key = DictKey(x, y);
                if (this._matrix.ContainsKey(key)) {
                    return this._matrix[key];
                }
                else
                {
                    return this.nullElement;
                }
            }
            set
            {
                CheckBounds(x, y);
                string key = DictKey(x, y);
                this._matrix.Add(key, value);
            }
        } 
 
        /// <summary>
        /// Проверка границ
        /// </summary>
        void CheckBounds(int x, int y)
        {
            if (x < 0 || x >= this.maxX) throw new Exception("x=" + x + " выходит за границы"); 
            if (y< 0 || y >= this.maxY) throw new Exception("y=" + y + " выходит за границы");
        }

        /// <summary>  
        /// Формирование ключа
        /// </summary>   
        string DictKey(int x, int y)
        {
            return x.ToString() + "_" + y.ToString();
        } 

        /// <summary> 
        /// Приведение к строке   
        /// </summary>  
        /// <returns></returns>        
        public override string ToString()
        {
            // Класс StringBuilder используется для построения длинных строк      
            // Это увеличивает производительность по сравнению с созданием и склеиванием большого количества обычных строк 

            StringBuilder b = new StringBuilder(); 
 
            for (int j = 0; j < this.maxY; j++)
            {
                b.Append("[");
                for (int i = 0; i< this.maxX; i++)
                {
                    if (i > 0) b.Append("\t");
                    b.Append(this[i, j].ToString());
                }
                b.Append("]\n");
            } 
 
            return b.ToString();
        } 

    }
}