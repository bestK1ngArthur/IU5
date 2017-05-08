// Лабораторная работа №5

open System

let printTask(number: int, description: string) = printfn "\nЗадание %i\n%A\n" number description

type Maybe<'a> =
    | Just of 'a
    | Nothing

[<EntryPoint>]
let main argv =
    printfn "Лабораторная работа №5"

    // Задание 1
    printTask(1, "Для произвольно выбранного типа данных (например, Maybe) реализуйте функции функтора, аппликативного функтора, монады.")

    // Функтор
    printfn "Функтор"

    //реализация fMap для Maybe
    let fmapMaybe f p =
        match p with
        | Just a -> Just (f a)
        | Nothing -> Nothing

    let fmapTest = fmapMaybe (fun x->x+1) (Just 2)
    printfn "fmapTest = %A" fmapTest 

    // Аппликативный функтор
    printfn "Аппликативный функтор"

    //реализация apply для Maybe
    let applyMaybe lf p =
        match lf, p with
        | Just f, Just a -> Just (f a)
        | _ -> Nothing

    let applyTest = applyMaybe (Just (fun x->x+1)) (Just 2)

    printfn "applyTest = %A" applyTest 

    // Монада

    // ...

     // Задание 2
    printTask(2, "Проверьте для Вашей реализации справедливость соответствующих законов для функтора и аппликативного функтора (тех законов, которые можно проверить с использованием F#). Некоторые законы могут не выполняться. Это означает что данный тип не является в полной мере функтором, аппликативным функтором, монадой.")

    // Функтор
    printfn "Функтор"

    // Закон 1
    let id x = x
    let fmapTest1 = fmapMaybe id (Just 2)

    printf "(%A == %A) => " fmapTest1 (Just 2)
    if fmapTest1 = (Just 2) then printfn "Закон 1 выполняется" else printfn "Закон 1 не выполняется"

    // Закон 2
    let func_f x = x+1
    let func_g x = x*2
    let fmapTest21 = fmapMaybe func_f (Just 2)
    let fmapTest22 = fmapMaybe func_g fmapTest21
    let fmapTest23 = fmapMaybe (func_f >> func_g) (Just 2)

    printf "(%A == %A) => " fmapTest22 fmapTest23
    if fmapTest22 = fmapTest23 then printfn "Закон 2 выполняется" else printfn "Закон 2 не выполняется"

    // Аппликативный функтор
    printfn "Аппликативный функтор"

    // Закон 1
    let applyTest1 = applyMaybe (Just id) (Just 2)

    printf "(%A == %A) => " applyTest1 (Just 2)
    if applyTest1 = (Just 2) then printfn "Закон 1 выполняется" else printfn "Закон 1 не выполняется"

    // Закон 2
    let app_f = fun x -> x+1
    let app_x = 1
    let applyTest21 = Just (app_f app_x)
    let applyTest22 = applyMaybe (Just app_f) (Just app_x)

    printf "(%A == %A) => " applyTest21 applyTest22
    if applyTest21 = applyTest22 then printfn "Закон 2 выполняется" else printfn "Закон 2 не выполняется"

    // Закон 3
    //let applyTest31 = applyMaybe (Just (fun x->x+1)) (Just 2)
    //let applyTest32 = applyMaybe (Just 2) (Just (fun x->x+1))
    printfn "Закон 3 не выполняется"

    // Монада

    // ...

    //|> ignore - перенаправление потока с игнорирование результата вычисления
    Console.ReadLine() |> ignore
    0 // возвращение целочисленного кода выхода