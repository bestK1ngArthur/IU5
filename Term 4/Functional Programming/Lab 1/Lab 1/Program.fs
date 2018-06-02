// Лабораторная работа №1
// Решение биквадратного уравнения

//Для использования классов Math и Console 
open System

// Алгебраический тип или "Discriminated Unions" 
// Алгебраический тип - тип сумма из типов произведений 
// | - означает "или" и задает тип-сумму 
// * - означает "и" и задает произведение (кортеж, который соединяет все элементы) 
// В абстрактных алгебрах наиболее близкой алгеброй является полукольцо

///Тип решения биквадратного уравнения 
type BiSquareRootResult = 
    | NoRoots 
    | TwoRoots of double * double 
    | FourRoots of double * double * double * double 

///Функция вычисления корней уравнения 
let CalculateRoots(a:double, b:double, c:double):BiSquareRootResult = 
    let D1 = b*b - 4.0*a*c; 
    if D1 < 0.0 then NoRoots
    else if D1 = 0.0 then 
        let D2 = -b / (2.0 * a) 
        if D2 < 0.0 then NoRoots
        else
            let rt1 = -Math.Sqrt(D2);
            let rt2 = -Math.Sqrt(D2);
            TwoRoots(rt1, rt2)
    else 
        let sqrtD1 = Math.Sqrt(D1)
        let D2 = (-b - sqrtD1) / (2.0 * a);
        let D3 = (-b + sqrtD1) / (2.0 * a);
        
        if (D2 < 0.0) && (D3 < 0.0) then NoRoots
        else if (D2 < 0.0) && (D3 >= 0.0) then
            let rt1 = -Math.Sqrt(D3);
            let rt2 = Math.Sqrt(D3);
            TwoRoots(rt1, rt2)
        else if (D2 >= 0.0) && (D3 < 0.0) then
            let rt1 = -Math.Sqrt(D2);
            let rt2 = Math.Sqrt(D2);
            TwoRoots(rt1, rt2)
        else 
            let rt1 = -Math.Sqrt(D2);
            let rt2 = Math.Sqrt(D2);
            let rt3 = -Math.Sqrt(D3);
            let rt4 = Math.Sqrt(D3);
            FourRoots (rt1, rt2, rt3, rt4)

///Вывод корней (тип unit - аналог void) 
let PrintRoots(a:double, b:double, c:double):unit = 
    printf "Коэффициенты: a=%A, b=%A, c=%A. " a b c 
    let root = CalculateRoots(a,b,c) 
    //Оператор сопоставления с образцом 
    let textResult = 
        match root with 
        | NoRoots -> "Корней нет" 
        | TwoRoots(rt1, rt2) -> "Два корня: " + rt1.ToString() + " и " + rt2.ToString() 
        | FourRoots (rt1, rt2, rt3, rt4) -> "Четыре корня: " + rt1.ToString() + ", и " + rt2.ToString() + ", и " + rt3.ToString() + ", и " + rt4.ToString() 
    printfn "%s" textResult

[<EntryPoint>] 
let main argv = 
    printfn "Лабораторная работа №1. Решение биквадратного уравнения."

    //Тестовые данные 
    //4 корня 
    let a1 = 4.0; 
    let b1 = -5.0; 
    let c1 = 1.0; 
    //2 корень 
    let a2 = 1.0; 
    let b2 = 0.0; 
    let c2 = -4.0; 
    //нет корней 
    let a3 = 1.0; 
    let b3 = 0.0; 
    let c3 = 1.0;

    PrintRoots(a1,b1,c1) 
    PrintRoots(a2,b2,c2) 
    PrintRoots(a3,b3,c3)
    
    //|> ignore - перенаправление потока с игнорирование результата вычисления 
    Console.ReadLine() |> ignore 
    0 // возвращение целочисленного кода выхода
