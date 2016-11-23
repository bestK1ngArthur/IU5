using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_6
{
    /// <summary> 
    /// Класс атрибута    
    /// </summary>  
    [AttributeUsage(AttributeTargets.Property, AllowMultiple=false, Inherited=false)]
    public class NewAttribute : Attribute
    {
        public NewAttribute() {}
        public NewAttribute(string DescriptionParam)
        {
            Description = DescriptionParam;
        } 

    public string Description { get; set; }
}
}
