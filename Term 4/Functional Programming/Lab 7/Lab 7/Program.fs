// Лабораторная работа №7

open System

[<EntryPoint>]
let main argv =
    printfn "Лабораторная работа №7"

    // Задание 
    printfn "С использованием класса MailboxProcessor реализуйте агента, который реагирует на внешние события и выполняет различные действия (например, выдает результаты в консоль)."

    // Агент, обрабатывающий события

    let printerAgent = MailboxProcessor.Start(fun inbox->
        // обработка сообщений
        let rec messageLoop() = async{
            // чтение сообщения
            let! msg = inbox.Receive()
            // печать сообщения
            printfn "\nСообщение: %s\n" msg
            return! messageLoop()
            }
        // запуск обработки сообщений
        messageLoop()
        )

    printerAgent.Post "Сообщение в консоли"

    //|> ignore - перенаправление потока с игнорирование результата вычисления
    Console.ReadLine() |> ignore
    0 // возвращение целочисленного кода выхода