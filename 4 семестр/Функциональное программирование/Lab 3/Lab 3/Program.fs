// Лабораторная работа №3

open System

let printTask(number: int, description: string) = printfn "\nЗадание %i\n%A\n" number description

[<EntryPoint>]
let main argv = 
    printfn "Лабораторная работа №3"

    // Задание 1
    printTask(1, "Разработайте функцию, которая принимает три параметра обобщенных типов и возвращает их в виде кортежа. Модифицируйте функцию: не указывая явно типы параметров, задавая выражения в теле функции, сделайте так, чтобы параметры были типов int, float, string.")
    // ..скоро будет

    // Задание 2
    printTask(2, "С использованием двухэтапного создания обобщенных функций реализуйте функции, которые осуществляют сложение:\n\t* трех аргументов типа int;\n\t* трех аргументов типа float;\n\t* трех аргументов типа string.")
    // ..скоро будет

    // Задание 3
    printTask(3, "С использованием list comprehension для списка [1..10] верните список кортежей. Каждый кортеж содержит элемент списка, его квадрат и куб.")

    let list = [for x in [1..10] do yield (x, x*x, x*x*x)]
    printfn "%A" list

    // Задание 4
    printTask(4, "Напишите два варианта функции, которая принимает на вход список и возвращает квадраты его значений. Необходимо использовать свойства списка Head и Tail. Первый вариант функции использует оператор if, второй вариант использует сопоставление с образцом на уровне функции.")

    let rec SquareList1(list: int list): int list = 
        if list.IsEmpty then []
        else (list.Head*list.Head)::SquareList1(list.Tail)
    let squareList1Test = SquareList1([1..4])
    printfn "SquareList1([1..4]) = %A" squareList1Test

    let rec SquareList2 = function
        | [] -> []
        | x::xs -> x*x::SquareList2(xs)
    let squareList2Test = SquareList2([1..4])
    printfn "SquareList2([1..4]) = %A" squareList2Test

    // Задание 5
    printTask(5, "Последовательно примените к списку функции map, sort, filter, fold, zip, функции агрегирования. Функции применяются в любом порядке и произвольно используются в трех комбинациях.\n\t* Первая комбинация заканчивается функцией агрегирования (например, сумма элементов списка). Cписок предварительно может быть отсортирован, отфильтрован и т.д.\n\t* Вторая комбинация заканчивается функцией fold, которая осуществляет свертку списка. Вторая комбинация выполняет те же действия, что и первая комбинация и должна возвращать такой же результат.\n\t* Третья комбинация заканчивается функцией zip, которая соединяет два списка.")

    let testList = [1..10]
    printfn "testList = %A" testList

    let mapList = List.map(fun x->x*x*x) testList // Map
    printfn "..map.. %A" mapList

    let sortList = List.rev (List.sort mapList) // Sort
    printfn "..sort.. %A" sortList

    let filterList = List.filter(fun x->x % 2 = 0) sortList // Filter
    printfn "..filter.. %A" filterList

    let foldValue = List.fold(fun acc x -> acc + x) 0 filterList // Fold
    printfn "..fold.. %A" foldValue

    let zipList = List.zip testList mapList // Zip
    printfn "..zip.. %A" zipList

    // Задание 6
    printTask(6, "Реализуйте предыдущий пункт с использованием оператора потока \'|>\'")

    let newList = testList |> List.map(fun x->x*x*x) |> List.rev |> List.filter(fun x->x % 2 = 0)
    printfn "..map..sort..filter.. %A" newList

    // Задание 7
    printTask(7, "Реализуйте предыдущий пункт с использованием оператора композиции функций \'>>\'")

    let ListFunc = List.map(fun x->x*x*x) >> List.rev >> List.filter(fun x->x % 2 = 0)
    let newList1 = ListFunc testList
    printfn "..map..sort..filter.. %A" newList1

    //|> ignore - перенаправление потока с игнорирование результата вычисления 
    Console.ReadLine() |> ignore 
    0 // возвращение целочисленного кода выхода
