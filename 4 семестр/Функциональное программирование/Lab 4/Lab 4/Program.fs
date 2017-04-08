// Лабораторная работа №4

open System

let printTask(number: int, description: string) = printfn "\nЗадание %i\n%A\n" number description

type IPrint = interface
    //абстрактный метод Print
    abstract member Print: unit -> unit
    end

// Класс геометрической фигуры

type Figure() =
    //виртуальный метод для вычисления площади
    abstract CalculateSquare: unit -> float
    default this.CalculateSquare() = 0.0
    //виртуальный метод ToString
    default this.ToString() = "Fifure()"
    //реализация интерфейса IPrint
    interface IPrint with
      member this.Print() = printfn "Fifure()"

type Rect(width: float, height: float) =
    //наследование
    inherit Figure()
    //поля инициализируются параметрами конструктора
    member this.width: float = width
    member this.height: float = height
    //перегрузка виртуального метода вычисления площади
    override this.CalculateSquare() = this.width * this.height
    //перегрузка виртуального метода ToString
    override this.ToString() = String.Format("Rect({0}, {1})", this.width, this.height)
    //реализация интерфейса IPrint
    interface IPrint with
      member this.Print() = printfn "Rect(%f, %f)" this.width this.height

type Square(width: float) =
    //наследование
    inherit Rect(width, width)
    //поля инициализируются параметрами конструктора
    member this.width: float = width
    member this.height: float = width
    //перегрузка виртуального метода вычисления площади
    override this.CalculateSquare() = this.width * this.width
    //перегрузка виртуального метода ToString
    override this.ToString() = String.Format("Square({0})", this.width)
    //реализация интерфейса IPrint
    interface IPrint with
      member this.Print() = printfn "Square(%f)" this.width

type Circle(radius: float) =
    //наследование
    inherit Figure()
    //поля инициализируются параметрами конструктора
    member this.radius: float = radius
    //перегрузка виртуального метода вычисления площади
    override this.CalculateSquare() = this.radius * this.radius * System.Math.PI
    //перегрузка виртуального метода ToString
    override this.ToString() = String.Format("Circle({0})", this.radius)
    //реализация интерфейса IPrint
    interface IPrint with
      member this.Print() = printfn "Circle(%f)" this.radius

// Тип геометрической фигуры

type AFigure =
      | ARect of float * float
      | ASquare of float
      | ACircle of float

let CalculateSquare(t: AFigure):float =
    let result =
        match t with
        | ARect(width, height) -> width * height
        | ASquare(width) -> width * width
        | ACircle(radius) -> radius * radius
    result

[<EntryPoint>]
let main argv =
    printfn "Лабораторная работа №4"

    printfn "Часть 1\n"

    // Задание 1
    printTask(1, "Программа должна быть разработана в виде консольного приложения на языке F#.")

    // Задание 2
    printTask(2, "Абстрактный класс «Геометрическая фигура» содержит виртуальный метод для вычисления площади фигуры.")

    // Задание 3
    printTask(3, "Класс «Прямоугольник» наследуется от класса «Геометрическая фигура». Ширина и высота объявляются как свойства (property). Класс должен содержать конструктор по параметрам «ширина» и «высота».")

    let rect = Rect(10.0, 5.0)
    let irect = rect :> IPrint
    irect.Print()
    let rectSquare = rect.CalculateSquare()
    printfn "Square = %f" rectSquare

    // Задание 4
    printTask(4, "Класс «Квадрат» наследуется от класса «Прямоугольник». Класс должен содержать конструктор по длине стороны.")

    let square = Square(10.0)
    let isquare = square :> IPrint
    isquare.Print()
    let squareSquare = square.CalculateSquare()
    printfn "Square = %f" squareSquare

    // Задание 5
    printTask(5, "Класс «Круг» наследуется от класса «Геометрическая фигура». Радиус объявляется как свойство (property). Класс должен содержать конструктор по параметру «радиус».")

    let circle = Circle(10.0)
    let icircle = circle :> IPrint
    icircle.Print()
    let circleSquare = circle.CalculateSquare()
    printfn "Circle = %f" circleSquare

    // Задание 6
    printTask(6, "Для классов «Прямоугольник», «Квадрат», «Круг» переопределить виртуальный метод Object.ToString(), который возвращает в виде строки основные параметры фигуры и ее площадь.")

    let rectString = rect.ToString()
    let squareString = square.ToString()
    let circleString = circle.ToString()

    printfn "%s\n" rectString
    printfn "%s\n" squareString
    printfn "%s\n" circleString

    // Задание 7
    printTask(7, "Разработать интерфейс IPrint. Интерфейс содержит метод Print(), который не принимает параметров и возвращает void. Для классов «Прямоугольник», «Квадрат», «Круг» реализовать наследование от интерфейса IPrint. Переопределяемый метод Print() выводит на консоль информацию, возвращаемую переопределенным методом ToString().")

    printfn "Часть 2\n"

    // Задание 1
    printTask(1, "Реализуйте класс геометрическая фигура в виде алгебраического типа (discriminated union), который содержит варианты (дискриминаторы) «Прямоугольник», «Квадрат», «Круг» с необходимыми параметрами.")

    // Задание 2
    printTask(2, "Разработайте для данного класса функцию вычисления площади. Функция должна принимать параметр типа «геометрическая фигура» и вычислять различные варианты площади в зависимости от дискриминатора. Необходимо использовать механизм сопоставления с образцом. (Используйте пример вычисления корней квадратного уравнения).")

    let arect = ARect(10.0, 4.0)
    let arectSquare = CalculateSquare(arect)
    printfn "arectSquare = %f" arectSquare

    //|> ignore - перенаправление потока с игнорирование результата вычисления
    Console.ReadLine() |> ignore
    0 // возвращение целочисленного кода выхода
