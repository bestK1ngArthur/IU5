using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Figures
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
        /// Количество элементов в глубину
        /// </summary>        
        int maxZ;

        /// <summary>         
        /// Пустой элемент, который возвращается если элемент с нужными координатами не был задан      
        /// </summary>         
        T nullElement; 
 
        /// <summary>    
        /// Конструктор  
        /// </summary> 
        public Matrix(int px, int py, int pz, T nullElementParam) 
        {
            this.maxX = px;
            this.maxY = py;
            this.maxZ = pz;
            this.nullElement = nullElementParam;
        } 
 
        /// <summary>
        /// Индексатор для доступа к данных
        /// </summary>
        public T this[int x, int y, int z]
        {
            get {
                CheckBounds(x, y, z);
                string key = DictKey(x, y, z);
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
                CheckBounds(x, y, z);
                string key = DictKey(x, y, z);
                this._matrix.Add(key, value);
            }
        } 
 
        /// <summary>
        /// Проверка границ
        /// </summary>
        void CheckBounds(int x, int y, int z)
        {
            if (x < 0 || x >= this.maxX) throw new Exception("x=" + x + " выходит за границы"); 
            if (y < 0 || y >= this.maxY) throw new Exception("y=" + y + " выходит за границы");
            if (z < 0 || z >= this.maxZ) throw new Exception("z=" + z + " выходит за границы");
        }

        /// <summary>  
        /// Формирование ключа
        /// </summary>   
        string DictKey(int x, int y, int z)
        {
            return x.ToString() + "_" + y.ToString() + "_" + z.ToString();
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
 
            for (int k = 0; k < this.maxY; k++)
            {
                b.Append("[");
                for (int j = 0; j< this.maxY; j++)
                {
                    if (j > 0) b.Append("\t");
                    b.Append("[");
                    for (int i = 0; i < this.maxX; i++)
                    {
                        b.Append(this[i, j, k].ToString());
                        if (i != (this.maxX - 1)) b.Append(", ");
                    }
                    b.Append("]");
                }
                b.Append("]\n");
            } 
 
            return b.ToString();
        } 

    }
}