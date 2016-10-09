// Кафедра ИУ5 МТГУ имени Н.Э.Баумана
// Домашнее задание (2 семестр)
// Файл реализации библиотеки классов
// Белков Артем (ИУ5-23)

#include "stdafx.h" 
#include <iostream> 
#include "HWLibrary.h"

using namespace std;

class Article;

// Класс статьи

// Конструкторы

Article::Article() : AbstractArticle() {

	type = Undefined;
	title = NULL;
	description = NULL;
	wordsCount = NULL;

}

Article::Article(const char *articleTitle) {

	type = Undefined;

	if (articleTitle != NULL) {

		title = new char[strlen(articleTitle) + 1];   
		strcpy_s(title, strlen(articleTitle) + 1, articleTitle);

	} 

	description = NULL;
	wordsCount = NULL;

}

Article::Article(const char *articleTitle, const char *articleDescription) {

	type = Undefined;

	if (articleTitle != NULL) {

		title = new char[strlen(articleTitle) + 1];
		strcpy_s(title, strlen(articleTitle) + 1, articleTitle);

	}

	if (articleDescription != NULL) {

		description = new char[strlen(articleDescription) + 1];
		strcpy_s(description, strlen(articleDescription) + 1, articleDescription);

	}

	wordsCount = NULL;

}

Article::Article(const char *articleTitle, const char *articleDescription, ArticleType articleType) {

	type = articleType;

	if (articleTitle != NULL) {

		title = new char[strlen(articleTitle) + 1];
		strcpy_s(title, strlen(articleTitle) + 1, articleTitle);

	}

	if (articleDescription != NULL) {

		description = new char[strlen(articleDescription) + 1];
		strcpy_s(description, strlen(articleDescription) + 1, articleDescription);

	}

	wordsCount = NULL;

}

Article::Article(const char *articleTitle, const char *articleDescription, ArticleType articleType, long articleNumber, unsigned long articleWordsCount) {

	type = articleType;

	if (articleTitle != NULL) {

		title = new char[strlen(articleTitle) + 1];
		strcpy_s(title, strlen(articleTitle) + 1, articleTitle);

	}

	if (articleDescription != NULL) {

		description = new char[strlen(articleDescription) + 1];
		strcpy_s(description, strlen(articleDescription) + 1, articleDescription);

	}

	number = articleNumber;
	wordsCount = articleWordsCount;

}

// Деструктор

Article::~Article() {

	if (title != (char *)NULL) {
		delete[]title;
	}

	if (description != (char *)NULL) {
		delete[]description;
	}

}

// Методы

// стандартные

void Article::setTitle(const char *articleTitle) {

	if (title != NULL)
		delete[]title;
	
	if (articleTitle != NULL) {

		title = new char[strlen(articleTitle) + 1];
		strcpy_s(title, strlen(articleTitle) + 1, articleTitle);

	}

}

const char * Article::getTitle() { 
	
	return (const char *)title; 

}

void Article::setDescription(const char *articleDescription) {

	if (description != NULL)
		delete[]description;

	if (articleDescription != NULL) {

		description = new char[strlen(articleDescription) + 1];
		strcpy_s(description, strlen(articleDescription) + 1, articleDescription);

	}

}

const char * Article::getDescription() {
	
	return (const char *)description; 

}

void Article::print() {

	cout << "Статья(заголовок: \"" << title << "\", ";
	
	cout << "описание: \"" << description << "\", ";

	cout << "тип: \"";
	switch (type)
	{
	case Science:
		cout << "Science";
		break;
	case Sport:
		cout << "Sport";
		break;
	case Gaming:
		cout << "Gaming";
		break;
	case Movies:
		cout << "Movies";
		break;
	case News:
		cout << "News";
		break;
	case Technology:
		cout << "Technology";
		break;
	case Art:
		cout << "Art";
		break;
	case Undefined:
		cout << "Undefined";
		break;
	default:
		break;
	}
	cout << "\", ";

	cout << "номер: \"" << number << "\", ";

	cout << "количество слов: \"" << wordsCount << "\")";

}

// операторы

Article Article::operator = (Article &article) {

	//  Копирование заголовка

	if (article.title != NULL) {

		title = new char[strlen(article.title) + 1];  
		strcpy_s(title, strlen(article.title) + 1, article.title);

	}

	// Копирование описания

	if (article.description != NULL) {

		description = new char[strlen(article.description) + 1];
		strcpy_s(description, strlen(article.description) + 1, article.description);

	}

	// Копирование остальных свойств

	number = article.number;
	type = article.type;
	wordsCount = article.wordsCount;

	return *this;
}

istream & operator>>(istream &in, Article &article) {

	cout << "Введите статью:" << endl;
	
	// Ввод заголовка
	
	cout << "\tзаголовок: ";

	char title[1000];
	in.getline(title, 1000, '\n');

	if (title != NULL) {

		article.title = new char[strlen(title) + 1];
		strcpy_s(article.title, strlen(title) + 1, title);

	}

	// Ввод описания

	cout << "\tописание: ";

	char text[10000];
	in.getline(text, 10000, '\n');

	if (text != NULL) {

		article.description = new char[strlen(text) + 1];
		strcpy_s(article.description, strlen(text) + 1, text);

	}

	// Ввод номера

	cout << "\tномер: ";
	in >> article.number;

	// Ввод типа

	cout << "\t\t1. Science" << endl;
	cout << "\t\t2. Sport" << endl;
	cout << "\t\t3. Gaming" << endl;
	cout << "\t\t4. Movies" << endl;
	cout << "\t\t5. News" << endl;
	cout << "\t\t6. Technology" << endl;
	cout << "\t\t7. Art" << endl;
	cout << "\t\t0. Undefined" << endl;

	cout << "\tтип: ";
	int intType;
	in >> intType;
	article.type = (ArticleType)intType;

	// Ввод количества слов

	cout << "\tколичество слов: ";
	in >> article.wordsCount;

	return in;

}

// файлы

void Article::saveToFile() {

	ofstream file;

	file.open(fileName, ios::binary | ios::app);
	
	if (file) {

		file << "/" << this->number << "|" << this->title << "|" << this->description << "|" << this->type << "|" << this->wordsCount << "/" << endl;

	} else {

		cout << "FileError: ошибка открытия БД" << endl;

	}

	file.close();

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Класс каталога

class Catalog;

// Конструкторы

Catalog::Catalog() : AbstractCatalog() {

	name = NULL;
	description = NULL;
	count = NULL;
	vertified = NULL;

}

Catalog::Catalog(const char *catalogName) {

	if (catalogName != NULL) {

		name = new char[strlen(catalogName) + 1];
		strcpy_s(name, strlen(catalogName) + 1, catalogName);

	}

	description = NULL;
	count = NULL;
	vertified = NULL;

}

Catalog::Catalog(const char *catalogName, int articlesCount) {

	if (catalogName != NULL) {

		name = new char[strlen(catalogName) + 1];
		strcpy_s(name, strlen(catalogName) + 1, catalogName);

	}

	description = NULL;
	count = articlesCount;
	vertified = NULL;

}

Catalog::Catalog(const char *catalogName, Article *articles, int articlesCount) {

	for (int i = 0; i < articlesCount; i++) { 

		Article *article = new Article();
		*article = (Article)articles[i];

		Add(article);

	}  

	if (catalogName != NULL) {

		name = new char[strlen(catalogName) + 1];
		strcpy_s(name, strlen(catalogName) + 1, catalogName);

	}

	description = NULL;
	count = articlesCount;
	vertified = NULL;

}

Catalog::Catalog(const char *catalogName, const char *catalogDescription, int articlesCount) {

	if (catalogName != NULL) {

		name = new char[strlen(catalogName) + 1];
		strcpy_s(name, strlen(catalogName) + 1, catalogName);

	}

	if (catalogDescription != NULL) {

		description = new char[strlen(catalogDescription) + 1];
		strcpy_s(description, strlen(catalogDescription) + 1, catalogDescription);

	}

	count = articlesCount;
	vertified = NULL;

}

// Деструктор

Catalog::~Catalog() {

	if (name != NULL) {
		delete[]name;
	}

	if (description != NULL) {
		delete[]description;
	}

}

// Методы

// стандартные

void Catalog::addArticle(Article *article) {

	Add(article);

}

void Catalog::removeArticle(int index) {
	
	RemoveAt(index, 1);

}

Article * Catalog::getArticle(int index) {

	return (Article *)GetAt(index);

}

int Catalog::getCount() {

	return (int)GetCount(); 

}

void Catalog::setVertified(bool catalogVertified) {

	vertified = catalogVertified;

}

bool Catalog::getVertified() {

	return this->vertified;
}

void Catalog::sortByType() {

	Article *buff;
	int size = getCount();

	for (int i = 0; i < size; ++i) {

		int pos = i;
		buff = getArticle(i);

		for (int j = i + 1; j < size; ++j) {

			if ((int)getArticle(j)->type < (int)buff->type) {

				pos = j;
				buff = getArticle(j);

			}

		}

		InsertAt(pos, getArticle(i));
		removeArticle(pos + 1);
		InsertAt(i, buff);
		removeArticle(i + 1);

	}

}

void Catalog::sortByWordsCount() {

	Article *buff;
	int size = getCount();

	for (int i = 0; i < size; ++i) {

		int pos = i;
		buff = getArticle(i);

		for (int j = i + 1; j < size; ++j) {

			if (getArticle(j)->wordsCount < buff->wordsCount) {
				
				pos = j;
				buff = getArticle(j);
			
			}
		
		}

		InsertAt(pos, getArticle(i));
		removeArticle(pos+1);
		InsertAt(i, buff);
		removeArticle(i+1);

	}

}

void Catalog::sortByTitle() {



}

void Catalog::print() {

	cout << "Каталог \"" << name << "\" (" << description;

	if (vertified) {

		cout << ", одобрен):" << endl;

	} else {

		cout << "):" << endl;

	}

	if (getCount() != 0) {

		for (int i = 0; i < getCount(); i++) {

			cout << "\t" << i << ") ";
			(*getArticle(i)).print();
			cout << endl;

		}

	} else {

		cout << "\tнет статей" << endl;

	}

}

Catalog *Catalog::catalogWithType(ArticleType articleType) {

	Catalog *newCatalog = new Catalog();

	for (int i = 0; i < this->getCount(); i++) {

		if (this->getArticle(i)->type == articleType) {

			newCatalog->addArticle(this->getArticle(i));

		}

	}

	return newCatalog;
}

// операторы

Catalog & Catalog::operator = (Catalog &catalog) {

	//  Копирование заголовка

	if (catalog.name != NULL) {

		name = new char[strlen(catalog.name) + 1];
		strcpy_s(name, strlen(catalog.name) + 1, catalog.name);

	}

	// Копирование описания

	if (catalog.description != NULL) {

		description = new char[strlen(catalog.description) + 1];
		strcpy_s(description, strlen(catalog.description) + 1, catalog.description);

	}

	// Копирование остальных свойств

	count = catalog.count;
	vertified = catalog.vertified;

	for (int i = 0; i < catalog.getCount(); i++) { 

		Add(((Article *)catalog.GetAt(i))); 
	
	};

	return *this;
}

Catalog & operator + (Catalog &catalog1, Catalog &catalog2) {

	Catalog *pCatalog = new Catalog;

	// Имя

	if ((catalog1.name != NULL) && (catalog2.name != NULL)) {

		pCatalog->name = new char[strlen(catalog1.name) + strlen(catalog2.name) + 5];

		strcpy_s(pCatalog->name, strlen(catalog1.name) + 1, catalog1.name);
		strcat_s(pCatalog->name, strlen(catalog1.name) + strlen(catalog2.name) + 5, " + ");
		strcat_s(pCatalog->name, strlen(catalog1.name) + strlen(catalog2.name) + 5, catalog2.name);

	}

	// Описание

	if ((catalog1.description != NULL) && (catalog2.description != NULL)) {

		pCatalog->description = new char[strlen(catalog1.description) + strlen(catalog2.description) + 3];

		strcpy_s(pCatalog->description, strlen(catalog1.description) + 1, catalog1.description);
		strcat_s(pCatalog->description, strlen(catalog1.description) + strlen(catalog2.description) + 3, " ");
		strcat_s(pCatalog->description, strlen(catalog1.description) + strlen(catalog2.description) + 3, catalog2.description);

	}

	// Количество

	pCatalog->count = catalog1.count + catalog2.count;

	// Одобрено

	pCatalog->vertified = catalog1.vertified && catalog2.vertified;

	// Копирование объектов

	for (int i = 0; i < catalog1.getCount(); i++) {

		pCatalog->Add((Article *)catalog1.getArticle(i));

	}

	for (int i = 0; i < catalog2.getCount(); i++) {

		pCatalog->Add((Article *)catalog2.getArticle(i));

	}

	return *pCatalog;

}

// файлы

void Catalog::loadFormFile() {

	ifstream file;
	file.open(fileName, ios::binary | ios::in);
	
	if (file) {

		char line[20000];
		int articlesCount = 0;

		while (file.getline(line, 20000, '/')) {

			if (strcmp(line, "\n") != 0) {

				Article *pArticle = new Article();

				char *token = new char[strlen(line) + 1];
				char *nextToken = new char[strlen(line) + 1];
				strcpy_s(nextToken, strlen(line) + 1, line);

				int i = 0;
				while (token = strtok_s(nextToken, "|", &nextToken)) {

					switch (i) {

					case 0:
						pArticle->number = atoi(token);
						break;

					case 1:
						pArticle->title = new char[strlen(token) + 1];
						strcpy_s(pArticle->title, strlen(token) + 1, token);
						break;

					case 2:
						pArticle->description = new char[strlen(token) + 1];
						strcpy_s(pArticle->description, strlen(token) + 1, token);
						break;

					case 3:
						pArticle->type = (ArticleType)atoi(token);
						break;

					case 4:
						pArticle->wordsCount = atoi(token);
						break;

					default:
						break;
					}

					i++;

				}

				this->Add(pArticle);
				articlesCount++;
				
			}

		}

		this->name = new char[strlen("Главный каталог") + 1];
		strcpy_s(this->name, strlen("Главный каталог") + 1, "Главный каталог");

		this->description = new char[strlen("Каталог составлен из информации в БД") + 1];
		strcpy_s(this->description, strlen("Каталог составлен из информации в БД") + 1, "Каталог составлен из информации в БД");

		this->count = articlesCount;
		this->vertified = true;

	} else {

		cout << "FileError: ошибка открытия БД" << endl;

	}

	file.close();

}

void Catalog::writeToFile() {

	/*ofstream file;
	file.open(fileName, ios::binary | ios::out | ios::trunc);
	file.write((char *)this, sizeof(this));
	file.close();*/

}

istream & operator>>(istream &in, Catalog &catalog) {

	cout << "Введите каталог:" << endl;

	// Ввод заголовка

	cout << "\tимя: ";

	char name[1000];
	in.getline(name, 1000, '\n');

	if (name != NULL) {

		catalog.name = new char[strlen(name) + 1];
		strcpy_s(catalog.name, strlen(name) + 1, name);

	}

	// Ввод описания

	cout << "\tописание: ";

	char text[10000];
	in.getline(text, 10000, '\n');

	if (text != NULL) {

		catalog.description = new char[strlen(text) + 1];
		strcpy_s(catalog.description, strlen(text) + 1, text);

	}

	return in;

}

