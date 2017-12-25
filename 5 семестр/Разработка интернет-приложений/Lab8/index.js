// Загрузка страницы
$(onLoad); function onLoad() {
  var  $button  =  $('.button');
}

// Элементы управления
$(function () {
    var $from = $('.from');
    var $to =$('.to');
    var $fun =$('.fun');
    var $block1 =$('.block1');
    var $button =$('.button');
    var $button2 =$('.button2');

   $button.click(function(e)
    {
        // Отмена действия по умолчанию
        e.preventDefault();
        // Получение значений из полей ввода (преобразованные из строк в числа)
        var from = parseFloat($from.val());
        var to = parseFloat($to.val());
        var fun = ($fun.val());
        // Создание массива точек
        const points = [];
        for(var x = from; x <= to; x += 0.01 )
            points.push([x, eval(fun)]);
        // Вывод легенды
        $.plot($block1, [{ label: fun, data: points }], [points], {});
    });
});
