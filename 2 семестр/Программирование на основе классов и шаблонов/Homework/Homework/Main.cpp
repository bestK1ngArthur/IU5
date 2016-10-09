// Кафедра ИУ5 МТГУ имени Н.Э.Баумана
// Домашнее задание (2 семестр)
// Главный исполняемый файл
// Белков Артем (ИУ5-23)

#include "stdafx.h" 
#include <iostream>
#include <fstream>
#include <vector>
#include "HWLibrary.h"

using namespace std;

void printTasks();

void task1();
void task2();
void task3(Catalog *mainCatalog);
void task4();
void task5(Catalog *mainCatalog);
void task6();
void task7(Catalog *mainCatalog);
void task8();
void task9(Catalog *mainCatalog, vector<Catalog *> *catalogsArray);
void task10(Catalog *mainCatalog, vector<Catalog *> *catalogsArray);
void task11();
void task12(vector<Catalog *> *catalogsArray);
void task13(Catalog *mainCatalog, vector<Catalog *> *catalogsArray);
void task14(Catalog *mainCatalog, vector<Catalog *> *catalogsArray);
void task15(vector<Catalog *> *catalogsArray);
void task16(Catalog *mainCatalog, vector<Catalog *> *catalogsArray);
void task17();
void task18(Catalog *mainCatalog, vector<Catalog *> *catalogsArray);

void main() {

	system("chcp 1251>0");

	/*
	Article article1 = Article("Спорт тащит", "В последнее время спорт правда тащит", Sport, 1, 6);

	Catalog catalog1 = Catalog("Cводки");
	catalog1.addArticle(&article1);
	catalog1.addArticle(&article1);

	Article article2 = Article("Сложна", "В последнее время очень сложна", Sport, 2, 5);

	Catalog catalog2 = Catalog("Жопка");
	catalog2.addArticle(&article2);
	catalog2.addArticle(&article2);
	
	Catalog catalog = Catalog();
		
	catalog = catalog1 + catalog2;

	catalog.print();

	cout << endl;

	catalog.writeToFile();

	Catalog newCatalog = Catalog();

	char *fileName = new char[strlen(catalog.name) + 5];
	strcpy_s(fileName, strlen(catalog.name) + 1, catalog.name);
	strcat_s(fileName, strlen(catalog.name) + 5, ".BIN");

	newCatalog.readFromFile(fileName);
	*/

	cout << "Домашнее задание. Белков Артём (ИУ5-23)." << endl;

	Catalog *pMainCatalog = new Catalog();
	pMainCatalog->loadFormFile();

	vector<Catalog *> catalogsArray;

	while (true) {

		cin.clear();
		while (cin.get() != '\n');
		cout << endl;

		printTasks();

		cout << endl << "Введите номер подпункта: ";
		
		int taskNumber;
		cin >> taskNumber;

		switch (taskNumber) {
		
		case 1:
			task1();
			break;

		case 2:
			task2();
			break;

		case 3:
			task3(pMainCatalog);
			break;

		case 4:
			task4();
			break;

		case 5:
			task5(pMainCatalog);
			break;

		case 6:
			task6();
			break;

		case 7:
			task7(pMainCatalog);
			break;

		case 8:
			task8();
			break;

		case 9:
			task9(pMainCatalog, &catalogsArray);
			break;

		case 10:
			task10(pMainCatalog, &catalogsArray);
			break;

		case 11:
			task11();
			break;

		case 12:
			task12(&catalogsArray);
			break;

		case 13:
			task13(pMainCatalog, &catalogsArray);
			break;

		case 14:
			task14(pMainCatalog, &catalogsArray);
			break;

		case 15:
			task15(&catalogsArray);
			break;

		case 16:
			task16(pMainCatalog, &catalogsArray);
			break;

		case 17:
			task17();
			break;

		case 18:
			task18(pMainCatalog, &catalogsArray);
			break;

		case 0:
			delete pMainCatalog;
			return;

		default:
			break;

		}

		system("Pause");

	}

}

void printTasks() {

	cout << "5.1. Требования к функциональным характеристикам" << endl << endl;

	cout << "5.1.1. Создание контейнерных объектов для каталогов библиотеки, в которых могут размещаться статьи этого каталога." << endl;
	cout << "5.1.2. Создание объектов для статей каталога, с параметрами и без параметров." << endl;
	cout << "5.1.3. Создание объектов для статей каталога на основе других." << endl;
	cout << "5.1.4. Учет следующих свойств статьи: уникальный номер, число слов, заголовок, описание, категория." << endl;
	cout << "5.1.5. Задание и получение характеристик статьи." << endl;
	cout << "5.1.6. Перегрузить оператор присваивания для статьи." << endl;
	cout << "5.1.7. Распечатка характеристик статьи." << endl;
	cout << "5.1.8. Учёт следующих свойств каталога: название, количество статей в каталоге, одобрен катагог или нет." << endl;
	cout << "5.1.9. Распечатка содержания каталога и его свойств." << endl;
	cout << "5.1.10. Задание характеристик каталога." << endl;
	cout << "5.1.11. Получение характеристик каталога." << endl;
	cout << "5.1.12. Сложение двух каталогов." << endl;
	cout << "5.1.13. Добавление статьи в каталог." << endl;
	cout << "5.1.14. Удаление статьи из каталога." << endl;
	cout << "5.1.15. Установка и снятие статуса 'одобрено' с каталога." << endl;
	cout << "5.1.16. Автоматическое создание каталога со статьями определённой категории." << endl;
	cout << "5.1.17. Перегрузка оператора присваивания для каталога." << endl;
	cout << "5.1.18. Сортировка статей по категории или количеству слов." << endl << endl;

	cout << "5.1.0. Выход." << endl;

}

void task1() {

	Article article = Article();
	cout << endl << "Пустой объект статьи создан." << endl << endl;

}

void task2() {

	cout << endl;

	// Чистим поток от мусора

	cin.clear();
	while (cin.get() != '\n');

	// Создаем статью

	Article article = Article();
	cin >> article;

	article.saveToFile();

	cout << endl << "Статья создана и сохранена в БД."<< endl << endl;

}

void task3(Catalog *mainCatalog) {

	cout << endl;

	cout << "Создание статьи на основе другой статьи:" << endl << endl;

	mainCatalog->print();

	cout << endl;
	cout << "Введите номер статьи: ";

	int number;
	cin >> number;

	Article *pArticle = new Article();
	pArticle = mainCatalog->getArticle(number);

	cout << endl << "Новая статья \"" << pArticle->title << "\" создана на основе статьи из основного каталога по номером " << number << "." << endl;

}

void task4() {

	cout << endl << "В программе учтены следующие свойства статьи : уникальный номер, число слов, заголовок, описание, категория." << endl << endl;

}

void task5(Catalog *mainCatalog) {

	cout << endl << "Выберите статью:" << endl << endl;

	mainCatalog->print();

	cout << endl;
	cout << "Введите номер статьи: ";

	int number;
	cin >> number;
	cout << endl;

	Article *pArticle = new Article();
	pArticle = mainCatalog->getArticle(number);
	
	pArticle->print();
	cout << endl << endl;

	cin.clear();
	while (cin.get() != '\n');

	cin >> *pArticle;

	cout << endl << "Статья изменена." << endl << endl;

}

void task6() {

	cout << endl << "Оператор присваивания для статьи перегружен. Для демонстрации воспользуйтесь пунктом 3." << endl;

}

void task7(Catalog *mainCatalog) {

	cout << endl << "Выберите статью:" << endl << endl;

	mainCatalog->print();

	cout << endl;
	cout << "Введите номер статьи: ";

	int number;
	cin >> number;
	cout << endl;

	Article *pArticle = new Article();
	pArticle = mainCatalog->getArticle(number);

	pArticle->print();
	cout << endl << endl;

}

void task8() {

	cout << endl << "В программе учтены следующие свойства каталога: название, количество статей в каталоге, одобрен катагог или нет." << endl << endl;

}

void task9(Catalog *mainCatalog, vector<Catalog *> *catalogsArray) {

	cout << endl << "Выберите каталог: " << endl << endl;

	cout << "\t0) " << mainCatalog->name << endl;
	for (int i = 0; i < (int)catalogsArray->size(); i++) {

		cout << "\t" << i+1 << ") " << (*catalogsArray)[i]->name << endl;

	}

	cout << endl << "Введите номер: ";

	int number;
	cin >> number;
	
	cout << endl;
	if (number == 0) {

		mainCatalog->print();

	} else {

		(*catalogsArray)[number-1]->print();

	}
	cout << endl;

}

void task10(Catalog *mainCatalog, vector<Catalog *> *catalogsArray) {

	cout << endl << "Выберите действие: " << endl << endl;
	cout << "1) Создать каталог" << endl;
	cout << "2) Изменить каталог" << endl << endl;
	cout << "Введите номер действия: ";

	int action;
	cin >> action;

	cout << endl;

	cin.clear();
	while (cin.get() != '\n');

	if (action == 1) {

		Catalog *newCatalog = new Catalog();
		cin >> *newCatalog;

		catalogsArray->insert(catalogsArray->end(), newCatalog);

		cout << endl << "Каталог создан" << endl << endl;

	} else {

		cout << "Выберите каталог: " << endl << endl;

		for (int i = 0; i < (int)catalogsArray->size(); i++) {

			cout << "\t" << i << ") " << (*catalogsArray)[i]->name << endl;

		}

		cout << endl << "Введите номер: ";

		int number;
		cin >> number;

		cout << endl;

		cin.clear();
		while (cin.get() != '\n');

		cin >> *(*catalogsArray)[number];

		cout << endl << "Каталог изменён" << endl << endl;

	}

}

void task11() {

	cout << endl << "Для демонстрации воспользуйтесь пунктом 9" << endl << endl;

}

void task12(vector<Catalog *> *catalogsArray) {

	cout << "Выберите каталог: " << endl << endl;

	for (int i = 0; i < (int)catalogsArray->size(); i++) {

		cout << "\t" << i << ") " << (*catalogsArray)[i]->name << endl;

	}

	cout << endl << "Введите номер 1 каталога: ";

	int number1;
	cin >> number1;

	cout << "Введите номер 2 каталога: ";

	int number2;
	cin >> number2;

	Catalog *newCatalog = new Catalog();

	*newCatalog = *(*catalogsArray)[number1] + *(*catalogsArray)[number2];
	catalogsArray->insert(catalogsArray->end(), newCatalog);

	cout << "Новый каталог создан на основе суммы создан" << endl << endl;

	newCatalog->print();
	cout << endl;

}

void task13(Catalog *mainCatalog, vector<Catalog *> *catalogsArray) {

	cout << "Выберите каталог: " << endl << endl;

	for (int i = 0; i < (int)catalogsArray->size(); i++) {

		cout << "\t" << i << ") " << (*catalogsArray)[i]->name << endl;

	}

	cout << endl << "Введите номер: ";

	int catalogNumber;
	cin >> catalogNumber;

	cout << endl << "Выберите статью для добавления: " << endl << endl;
	mainCatalog->print();

	cout << endl << "Введите номер: ";

	int number;
	cin >> number;

	cout << endl;

	(*catalogsArray)[catalogNumber]->addArticle(mainCatalog->getArticle(number));

	cout << "Статья \"" << mainCatalog->getArticle(number)->title << "\" добавлена в каталог \"" << (*catalogsArray)[catalogNumber]->name << "\"" << endl << endl;

}

void task14(Catalog *mainCatalog, vector<Catalog *> *catalogsArray) {

	cout << "Выберите каталог: " << endl << endl;

	for (int i = 0; i < (int)catalogsArray->size(); i++) {

		cout << "\t" << i << ") " << (*catalogsArray)[i]->name << endl;

	}

	cout << endl << "Введите номер: ";

	int catalogNumber;
	cin >> catalogNumber;

	cout << endl << "Выберите статью для удаления: " << endl << endl;
	(*catalogsArray)[catalogNumber]->print();

	cout << endl << "Введите номер: ";

	int number;
	cin >> number;

	cout << endl;

	(*catalogsArray)[catalogNumber]->removeArticle(number);

	cout << "Статья удалена из каталога \"" << (*catalogsArray)[catalogNumber]->name << "\"" << endl << endl;

}

void task15(vector<Catalog *> *catalogsArray) {

	cout << "Выберите каталог: " << endl << endl;

	for (int i = 0; i < (int)catalogsArray->size(); i++) {

		cout << "\t" << i << ") " << (*catalogsArray)[i]->name << endl;

	}

	cout << endl << "Введите номер: ";

	int catalogNumber;
	cin >> catalogNumber;

	if ((*catalogsArray)[catalogNumber]->vertified) {

		(*catalogsArray)[catalogNumber]->setVertified(false);
		cout << endl << "С каталога снят статус \"одобрено\"" << endl << endl;

	} else {

		(*catalogsArray)[catalogNumber]->setVertified(true);
		cout << endl << "У каталога выставлен статус \"одобрено\"" << endl << endl;

	}

}

void task16(Catalog *mainCatalog, vector<Catalog *> *catalogsArray) {

	cout << endl << "Создание каталога со статьями определённой категории:" << endl << endl;

	cout << "\t\t1. Science" << endl;
	cout << "\t\t2. Sport" << endl;
	cout << "\t\t3. Gaming" << endl;
	cout << "\t\t4. Movies" << endl;
	cout << "\t\t5. News" << endl;
	cout << "\t\t6. Technology" << endl;
	cout << "\t\t7. Art" << endl;
	cout << "\t\t0. Undefined" << endl;

	cout << "Введите номер категории: ";
	int intType;
	cin >> intType;

	cout << endl;

	Catalog *newCatalog = mainCatalog->catalogWithType((ArticleType)intType);

	cin.clear();
	while (cin.get() != '\n');

	cin >> *newCatalog;
	
	catalogsArray->insert(catalogsArray->end(), newCatalog);

	cout << endl << "Каталог создан" << endl << endl;

	newCatalog->print();

	cout << endl;

}

void task17() {

	cout << endl << "Оператор присваивания для каталога перегружен." << endl;

}

void task18(Catalog *mainCatalog, vector<Catalog *> *catalogsArray) {

	cout << endl << "Выберите сортировку: " << endl << endl;

	cout << "1) Сортировка по количеству слов" << endl;
	cout << "2) Сортировка по категориям" << endl << endl;

	cout << "Введите номер: ";

	int number;
	cin >> number;

	cout << endl << "Выберите каталог: " << endl << endl;

	cout << "\t0) " << mainCatalog->name << endl;
	for (int i = 0; i < (int)catalogsArray->size(); i++) {

		cout << "\t" << i + 1 << ") " << (*catalogsArray)[i]->name << endl;

	}

	cout << endl << "Введите номер: ";

	int catalogNumber;
	cin >> catalogNumber;

	if (number == 1) {

		if (catalogNumber == 0) {

			mainCatalog->sortByWordsCount();

		} else {

			(*catalogsArray)[number - 1]->sortByWordsCount();

		}

	} else if (number == 2) {

		if (catalogNumber == 0) {

			mainCatalog->sortByType();

		}
		else {

			(*catalogsArray)[number - 1]->sortByType();

		}

	}

	cout << endl << "Сортировка произведена" << endl << endl;

}