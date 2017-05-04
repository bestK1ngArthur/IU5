// Лабораторная работа №6

open System
open FParsec

[<EntryPoint>]
let main argv =
    printfn "Лабораторная работа №6"

    // Задание 
    printfn "Разработайте программу, которая осуществляет разбор текста с использованием библиотеки FParsec. Результатом разбора должны быть значения алгебраического типа."

    // Разбор текста в алгебаические типы

    let test p str =
        match run p str with
        | Success(result, _, _) -> printfn "Success: %A" result
        | Failure(errorMsg, _, _) -> printfn "Failure: %s" errorMsg
    //разбор вещественного числа
    test pfloat "333.333"
    printfn "-------------------------------"
    printfn "%A" (run pfloat "333.333")
    test pfloat "qwerty333.333"

    //|> ignore - перенаправление потока с игнорирование результата вычисления
    Console.ReadLine() |> ignore
    0 // возвращение целочисленного кода выхода