// Кафедра ИУ5 МТГУ имени Н.Э.Баумана
// Домашнее задание (2 семестр)
// Заголовочный файл библиотеки классов
// Белков Артем (ИУ5-23)

#pragma once

#include "resource.h"

#include "stdafx.h" 
#include <iostream> 
#include <fstream>

using namespace std;

#define fileName "Articles.txt"

enum ArticleType {

	Science		= 1,
	Sport		= 2,
	Gaming		= 3,
	Movies		= 4,
	News		= 5,
	Technology	= 6,
	Art			= 7,
	Undefined	= 0

};

// Абстрактный класс статьи

class AbstractArticle : public CObject {

public:

	virtual int classType() = 0;
	virtual char *className() = 0;
	
	long number;
	
	AbstractArticle() {

		number = NULL;

	}

	AbstractArticle(const AbstractArticle &article) {

		number = article.number;

	}
	
};

// Класс статьи

class Article : public AbstractArticle {

public:

	// Свойства

	ArticleType type;
	char *title;
	char *description;
	unsigned long wordsCount;

	// Конструкторы

	Article();
	Article(const char *articleTitle);
	Article(const char *articleTitle, const char *articleDescription);
	Article(const char *articleTitle, const char *articleDescription, ArticleType articleType);
	Article(const char *articleTitle, const char *articleDescription, ArticleType articleType, long articleNumber, unsigned long articleWordsCount);

	// Декструктор

	~Article();

	// Методы

	// виртуальные

	virtual int classType() { return 1; }
	virtual char *className() { return "Article"; }

	// стандартные

	void setTitle(const char *articleTitle);
	const char *getTitle();
	void setDescription(const char *articleDescription);
	const char *getDescription();
	void print();

	// операторы

	Article operator = (Article &article);
	friend istream & operator >> (istream &in, Article &article);

	// файлы

	void saveToFile();

};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Абстрактный класс каталога

class AbstractCatalog {

public:

	virtual int classType() = 0;
	virtual char *className() = 0;

	int id;

	AbstractCatalog() {

		id = NULL;

	}

	AbstractCatalog(const AbstractCatalog &catalog) {

		id = catalog.id;

	}

};

// Класс каталога

class Catalog : public AbstractCatalog, public CArray <CObject *, CObject *> {

public:

	// Свойства

	char *name;
	char *description;
	int count;
	bool vertified;

	// Конструкторы

	Catalog();
	Catalog(const char *catalogName);
	Catalog(const char *catalogName, int articlesCount);
	Catalog(const char *catalogName, Article *articles, int articlesCount);
	Catalog(const char *catalogName, const char *catalogDescription, int articlesCount);

	// Деструктор

	~Catalog();

	// Методы

	// виртуальные

	virtual int classType() { return 2; };
	virtual char *className() { return "Catalog"; };

	// стандартные
	
	int getCount();

	void addArticle(Article *article);
	void removeArticle(int index);
	Article * getArticle(int index);

	void setVertified(bool catalogVertified);
	bool getVertified();

	Catalog *catalogWithType(ArticleType articleType);
	
	void sortByType();
	void sortByWordsCount();
	void sortByTitle();

	void print();

	// операторы

	Catalog & operator = (Catalog &catalog);
	friend Catalog & operator + (Catalog &catalog1, Catalog &catalog2);
	friend istream & operator>>(istream &in, Catalog &catalog);

	// файлы

	void loadFormFile();
	void writeToFile();

};