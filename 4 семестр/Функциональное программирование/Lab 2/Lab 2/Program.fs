// Лабораторная работа №2

open System

let printTask(number: int, description: string) = printfn "\nЗадание %i\n%A\n" number description

[<EntryPoint>]
let main argv = 
    printfn "Лабораторная работа №2"

    // Задание 1
    printTask(1, "Карирование")

    let uncarry(a: int, b: int) = a * b
    let carry(a: int)(b: int) = a * b

    let a = 2
    let b = 3

    let uncarryTest = uncarry(a, b)
    let carryTest = carry a b // или carry(a)(b)

    printfn "uncarry(%i, %i) = %i" a  b uncarryTest
    printfn "carry %i %i = %i" a  b carryTest

    // Задание 2
    printTask(2, "Рекурсивное вычисление суммы целых чисел в заданном диапазоне")

    let rec sum a b = if a=b then b else b+sum a (b-1)

    let sumTest = sum 2 5 
    printfn "sum %i %i = %i" 2  5 sumTest

    // Задание 3
    printTask(3, "Вычисление суммы целых чисел в заданном диапазоне в виде хвостовой рекурсии")

    let rec Sum_tr(a: int, b: int, acc: int):int = 
        if a=b then acc
        else Sum_tr(a, b-1, b-1+acc)
    let rec Tsum a b = Sum_tr(a, b, b)

    let tsumTest = Tsum 2 5
    printfn "tsum %i %i = %i" 2  5 tsumTest

    // Задание 4
    printTask(4, "Конечный автомат из трех состояний в виде взаимно-рекурсивных функций")

    //Автомат из 3 состояний (на основе примера из методички)
    // 1 - (+1) 2
    // 2 - (+1) 3
    // 3 - (+1) 4
    // 4 - (*2) 16
    // 5 - (*2) 25
    // 6 - (*2) 36
    // 7 - (*3) 343
    // 8 - (*3) 512
    // 9 - (*3) 729
    // 10 - (*3) 1000

    let rec State1(x:int) = 
        printfn "%i - (+1) %i" x (x+1) 
        let x_next = x+1 
        if x_next>3 then State2(x_next) 
        else State1(x_next) 
    and State2(x:int) = 
        printfn "%i - (*2) %i" x (x*2) 
        let x_next = x+1 
        if x_next>6 then State3(x_next) 
        else State2(x_next) 
    and State3(x:int) = 
        printfn "%i - (*3) %i" x (x*3) 
        let x_next = x+1 
        if x_next<=10 then State3(x_next) 
        
    //Вызов с начальным условием 
    State1(1)

    // Задание 5
    printTask(5, "Функция, которая принимает 3 целых числа и лямбда-выражение для их суммирования в виде кортежа и в каррированном виде.")

    let UncarryFunWith3(a: int, b: int, lambda: int*int->int) = lambda(a, b)  
    let uncarryFunSumTest = UncarryFunWith3(2, 3, fun(a, b) -> a+b)   
    printfn "UncarryFunWith3(2, 3, fun(a, b) -> a+b) = %i" uncarryFunSumTest 

    let CarryFunWith3(a: int, b: int, lambda: int->int->int) = lambda a b  
    let carryFunSumTest = CarryFunWith3(2, 3, fun a b -> a+b)   
    printfn "XarryFunWith3(2, 3, fun a b -> a+b) = %i" carryFunSumTest

    //|> ignore - перенаправление потока с игнорирование результата вычисления 
    Console.ReadLine() |> ignore 
    0 // возвращение целочисленного кода выхода
