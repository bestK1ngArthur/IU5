// Лабораторная работа №6

open System
open FParsec

type Expr =
        | Num of float
        | Plus of Expr * Expr
        | Minus of Expr * Expr

[<EntryPoint>]
let main argv =
    printfn "Лабораторная работа №6"

    // Задание 
    printfn "Разработайте программу, которая осуществляет разбор текста с использованием библиотеки FParsec. Результатом разбора должны быть значения алгебраического типа.\n"

    // Разбор числового выражения
    // Создаем опережающее описание для парсера
    let parseExpression, implementation = createParserForwardedToRef<Expr, unit>()
    let parsePlus = tuple2 (parseExpression .>> pstring "+") parseExpression |>> Plus
    let parseMinus = tuple2 (parseExpression .>> pstring "-") parseExpression |>> Minus
    let parseOp = between (pstring "(") (pstring ")") (attempt parsePlus <|> parseMinus)
    let parseNum = pfloat |>> Num
    implementation := parseNum <|> parseOp

    // Функция упрощения выражения
    let rec EvalExpr(e:Expr):float =
        match e with
        | Num(num) -> num
        | Plus(a,b) ->
            let left =
                match a with
                | Num(num) -> num
                | _ -> EvalExpr(a)
            let right =
                match b with
                | Num(num) -> num
                | _ -> EvalExpr(b)
            let res1 = left + right
            printfn "%f + %f = %f" left right res1
            res1
        | Minus(a,b) ->
            let left =
                match a with
                | Num(num) -> num
                | _ -> EvalExpr(a)
            let right =
                match b with
                | Num(num) -> num
                | _ -> EvalExpr(b)
            let res2 = left - right
            printfn "%f - %f = %f" left right res2
            res2

    printfn "(((3+4)+(1-2))+10)\n"
    printfn "******parsing******\n"
    let expr1Parser = run parseExpression "(((3+4)+(1-2))+10)"
    printfn "%A" expr1Parser

    match expr1Parser with
    | Success(result, _, _) ->
        let eval1 = EvalExpr(result)
        printfn "Результат вычислений: %f" eval1
    | Failure(errorMsg, _, _) -> printfn "Failure: %s" errorMsg

    //|> ignore - перенаправление потока с игнорирование результата вычисления
    Console.ReadLine() |> ignore
    0 // возвращение целочисленного кода выхода