/*
 * Mockup UX - MessageWindow
 * 
 * A alert like prompt window script.
 * This script is loaded from loadUI and can be loaded from every where in the apllication
 * http://www.position-absolute.com
 *
 * Copyright (c) 2008 Cedric Dugas
 * Reproduction or use of this code outside this application is not allowed
 */
 
$(document).ready(function() {
	$("a#promptId").messageWindow({
		formtoValidate:this,
		success:function(){createAlert()}
	})
});
jQuery.fn.validationEngine = function(settings) {

 	settings = jQuery.extend({
		appender : $('body'), 
		formtoValidate : "", 
		text	: "Default text box",
		success : function() {},
		failure : function() {}
	}, settings);	
		console.log(settings.formtoValidate)
	var buildSkel = function() {
			var promptWindow = document.createElement('div')
			$(promptWindow).css({
				opacity:0,
				zIndex:5000
			});
			$(promptWindow).addClass("promptWindow")
			var textDiv = document.createElement('div')
			$(textDiv).addClass("promptText")
			$(textDiv).html(settings.text)
			
			var windowEventTrue = document.createElement('a')
			$(windowEventTrue).attr("href","#")
			$(windowEventTrue).addClass("trueMessageEvent")
			
			var questionDiv = document.createElement('div')
			$(questionDiv).addClass("questionDiv")
			$(windowEventTrue).html("Yes")
			
			var windowEventFalse = document.createElement('a')
			$(windowEventFalse).attr("href","#")
			$(windowEventFalse).addClass("falseMessageEvent")
			$(windowEventFalse).html("No")
			
			$(promptWindow).append(textDiv)
			$(promptWindow).append(questionDiv)
			$(questionDiv).append(windowEventTrue)
			$(questionDiv).append(windowEventFalse)
			$(settings.appender).append(promptWindow);
			$(".promptWindow").css("display", "block")
		};
	
	return this.each(function(){
		var caller = this   				 // Callback fonction need this to remember the prompt caller
		$(this).bind("click", function(){openPrompt()})
		
		var openPrompt = function() {
			buildSkel()						// BUILD PROMPT WINDOW HTML MARKUP
			$(".promptWindow").animate({
				opacity:1,
				top:"180px"
			},300)	
			$("a.trueMessageEvent").bind("click", function(){
				remove(true)
				return false;
			})
			$("a.falseMessageEvent").bind("click", function(){
				remove(false)
				return false;
			})
			return false;
		};
		var remove = function(callback) {
			
			$(".promptWindow").animate({
				opacity:0,
				top:"200px"
			},300,function() {
				$(".promptWindow").remove()
				
				/* EXECUTE CALLBACK */
				if(callback == true){
					settings.success && settings.success(caller); 
				}else{
					settings.failure && settings.failure(caller); 
				}
			})
		};
	});
};