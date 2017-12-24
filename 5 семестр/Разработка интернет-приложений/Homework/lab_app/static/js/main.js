
// Обработка нажатия на "Отправить отзыв"
$('#review-form').on('submit', function(event){
    event.preventDefault();
    create_review();
});

// AJAX-запрос на создание отзыва
function create_review() {
    // Создаем AJAX-запрос
    $.ajax({
        url : "create_review/", // выход
        type : "POST", // метод
        data : { "review_text" : $('#reviewInputText').val(), "product_id" : $('#product-id-value').val(), "reviews_count" : $('#reviews-count').val()}, // json с данными

        // Обрабатываем success
        success : function(json) {
            $('#reviewInputText').val(''); // очищаем поле ввода

            var username = json["user_name"]
            var reviewDescription = json["review_description"]

            var reviewsCount = json["reviews_count"]

            if (reviewsCount % 2 != 0) {
                $('#review-cards').append("<div class=\"row\"  id=\"review-cards-row\" style=\"margin-bottom: 30px\">" +
                    "                           <div class=\"col-6\">" +
                    "                              <div class=\"card\">" +
                    "                                 <div class=\"card-body\">" +
                    "                                    <h5 class=\"card-title\">@" + username + "</h5>" +
                    "                                    <p class=\"card-text\">" + reviewDescription + "</p>" +
                    "                                 </div>" +
                    "                              </div>" +
                    "                           </div>" +
                    "                      </div>")
            } else {
                $("<div class=\"col-6\">" +
                  "     <div class=\"card\">" +
                  "         <div class=\"card-body\">" +
                  "             <h5 class=\"card-title\">@" + username + "</h5>" +
                  "             <p class=\"card-text\">" + reviewDescription + "</p>" +
                  "         </div>" +
                  "     </div>" +
                  "</div>").appendTo($('#review-cards-row:last-child'))
            }

            $('#no-reviews-title').remove() // Удаляем "Нет отзывов"
            $('#reviews-count').val(reviewsCount) // Обновляем количество отзывов
        },

        // Обрабатываем error
        error : function(xhr,errmsg,err) {

            // Показываем алерт с ошибкой
            $('#review-form').prepend("<div class=\"alert alert-danger alert-dismissible fade show\" role=\"alert\" style=\"border-radius: 15px\">" +
                "                          <button type=\"button\" class=\"close\" data-dismiss=\"alert\" aria-label=\"Close\">" +
                "                              <span aria-hidden=\"true\">&times;</span>" +
                "                          </button>" +
                "                          <strong>Oops!</strong> We have encountered an error: " +
                "                      </div>")        }
    });
};
