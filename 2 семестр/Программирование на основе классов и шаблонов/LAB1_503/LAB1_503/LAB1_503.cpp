
#include "stdafx.h"

#include "LAB1_503.h"
#include <iostream>
#include <string>

#define AVR(a, b, c) ((a) + (b) + (c)) / 3

typedef int* PInt;
typedef int& RInt;

using namespace std;

void main()
{
	system(" chcp 1251 > nul");

	cout << "LAB1_503" << endl << endl;

	// Пункт 4.4

	cout << "4.4. Выполнить описание переменных и массивов." << endl << endl;

	// ПЕРЕМЕННЫЕ
	/*
		Описать и инициализировать переменные различных стандартных типов и продемонстрировать присваивание им
		значений соответствующих типов. Типы: int (iVar), long (lVar), char (cVar), float (fVar), double (dVar), bool (bVar).
		Выполнить печать после инициализации и нового присваивания (на cout ). 
	*/

	cout << "\tПЕРЕМЕННЫЕ" << endl << endl;

	int iVar = 5;
	long lVar = 5000; 
	char cVar = 'F';
	float fVar = 12.5;
	double dVar = 12.25;
	bool bVar = true;

	cout << "iVar = " <<  iVar << endl;
	cout << "lVar = " <<  lVar << endl;
	cout << "cVar = " <<  cVar << endl;
	cout << "fVar = " <<  fVar << endl;
	cout << "dVar = " <<  dVar << endl;
	cout << "bVar = " << boolalpha <<  bVar << endl << endl;

	iVar = 6;
	lVar = 5001; 
	cVar = 'U';
	fVar = 13.5;
	dVar = 13.25;
	bVar = false;

	cout << "iVar = " <<  iVar << endl;
	cout << "lVar = " <<  lVar << endl;
	cout << "cVar = " <<  cVar << endl;
	cout << "fVar = " <<  fVar << endl;
	cout << "dVar = " <<  dVar << endl;
	cout << "bVar = " << boolalpha <<  bVar << endl << endl;

	// МАССИВЫ
	/*
		Описать массивы различных стандартных типов и продемонстрировать присваивание им значений соответствующих типов
		(элементу массива с номером варианта студента по списку группы). Типы: int (iMas), long (lMas), char (cMas), 
		float (fMas), dounle (dMas), bool (bMas). Массивы  iMas и fMas проинициализировать при описании. Массив iMas имеет две
		размерности. Проинициализированные массивы необходимо распечатать в цикле.
	*/

	cout << "\tМАССИВЫ" << endl << endl;

	int iMas[3][3] = {{1, 2, 3},
					  {4, 5, 6},
					  {7, 8, 9}};
	long lMas[3];
	char cMas[3];
	float fMas[3] = {1.2f, 3.4f, 5.6f};
	double dMas[3];
	bool bMas[3];

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << "iMas[" << i << "]" << "[" << j << "] = " << iMas[i][j] << endl; // i – индекс элемента в массиве
		}
	}

	cout << endl;

	for(int i = 0; i < 3; i++) {
		cout << "fMas[" << i << "] = " << fMas[i]  << endl; // i – индекс элемента в массиве 
	}

	cout << endl;

	fMas[1] = 0;

	for(int i = 0; i < 3; i++) {
		cout << "fMas[" << i << "] = " << fMas[i]  << endl; // i – индекс элемента в массиве 
	}

	cout << endl;

	// Пункт 4.5

	cout << "4.5. Продемонстрировать использование указателей и ссылок." << endl << endl;

	// УКАЗАТЕЛИ НА ПЕРЕМЕННЫЕ
	/*
		Выполнить описание указателя (pInt). Присвоить указателю адрес переменной типа int (iVar) и
		задать с помощью указателя значение (Например, 5). Распечатать значение  по указателю и значение самого указателя
		(адрес). Изменить значение с помощью указателя (на 10) и снова распечатать.  
	*/
	
	cout << "\tУКАЗАТЕЛИ НА ПЕРЕМЕННЫЕ" << endl << endl;

	int *pInt = &iVar;
	*pInt = 5;

	cout << "*pInt = " << *pInt << endl;
	cout << "pInt = " << pInt << endl << endl;

	*pInt = 10;

	cout << "*pInt = " << *pInt << endl;
	cout << "pInt = " << pInt << endl << endl;

	// ССЫЛКИ НА ПЕРЕМЕННЫЕ
	/*
		Выполнить описание ссылки (rInt). Присвоить ссылке адрес  переменной типа int (iVar) и задать с
		помощью ссылки новое значение (Например, 15). Распечатать значение ссылки и адрес ссылки (&rInt). Изменить значение по
		ссылке (Например, 15) и распечатать с помощью ссылки (rInt) и указателя(pInt).
	*/

	cout << "\tССЫЛКИ НА ПЕРЕМЕННЫЕ" << endl << endl;

	int & rInt = iVar;
	rInt = 15;

	cout << "rInt = " << rInt << endl;
	cout << "&rInt = " << &rInt << endl << endl;

	rInt = 20;

	cout << "rInt = " << rInt << endl;
	cout << "*pInt = " << *pInt << endl << endl;

	// УКАЗАТЕЛИ НА ФУНКЦИИ
	/*
		Предварительно описать две простые функции (fun1 и fun2), возвращающие разные целочисленные 
		значения (int) и имеющие один целочисленный параметр (int). Описать указатель на функции (pFun) c заданным прототипом.
		Продемонстрировать использование этого указателя для каждой функции, распечатав результат с вызовом функций по указателю.
	*/

	cout << "\tУКАЗАТЕЛИ НА ФУНКЦИИ" << endl << endl;

	int (*pFun)(int param);

	pFun = &fun1;
	cout << "pFun = " << pFun(iVar) << endl;

	pFun = &fun2;
	cout << "pFun = " << pFun(iVar) << endl << endl;

	// Пункт 4.6

	cout << "4.6. Продемонстрировать использование структур данных." << endl << endl;

	// ИНИЦИАЛИЗАЦИЯ СТРУКТУР
	/*
		Опишите структуру данных, содержащую не менее 4-х полей, в соответствии с вариантами для каждой
		группы (Street). Шаблон структуры должен быть описан в подключаемом заголовочном файле (LAB1_XDD.H). Продемонстрируйте
		инициализацию структуры для простой структурной переменной. Опишите и проинициализируйте массив структурных переменных
		данного типа. 
	*/

	cout << "\tИНИЦИАЛИЗАЦИЯ СТРУКТУР" << endl << endl;

	Street street1 = {"TestStreet", 20, 1234.567f, true};

	Street streetArray[2] = {{"TestStreet1", 20, 1234.567f, true},
							 {"TestStreet2", 20, 1234.567f, true}};

	cout << "street1 = {" << street1.title << ", " << street1.housesCount << ", " << street1.averagePayment << ", " << boolalpha << street1.danger << "}" << endl << endl;

	// ВЫЧИСЛЕНИЕ СТРУКТУР
	/*
		Опишите неинициализированную структурную переменную. Продемонстрируйте вычисление значений всех
		полей простой структурной переменной, Распечатайте структурную переменную до и после изменений. Результаты в cout.
	*/

	cout << "\tВЫЧИСЛЕНИЕ СТРУКТУР" << endl << endl;

	Street street2;
	
	strcpy_s(street2.title, "TestStreet");
	street2.averagePayment = 1234.567f;
	street2.danger = true;
	street2.housesCount = 20;

	cout << "street2 = {" << street2.title << ", " << street2.housesCount << ", " << street2.averagePayment << ", " << boolalpha << street2.danger << "}" << endl;

	strcpy_s(street2.title, "ChangedTestStreet");
	street2.averagePayment = 4321.567f;
	street2.danger = false;
	street2.housesCount = 50;

	cout << "street2 = {" << street2.title << ", " << street2.housesCount << ", " << street2.averagePayment << ", " << boolalpha << street2.danger << "}" << endl << endl;

	// МАССИВ СТРУКТУР
	/*
		Опишите и заполните при инициализации массив структур по вашему варианту (не менее 5-ти элементов
		массива). Распечатайте в цикле этот массив структур (используйте оператор цикла - while и функцию sizeof() – для
		определения размера массива в программе динамически).
	*/

	cout << "\tМАССИВ СТРУКТУР" << endl << endl;

	Street streets[5] = {{"TestStreet1", 10, 1234.567f, true},
						 {"TestStreet2", 20, 1234.567f, false},
						 {"TestStreet3", 30, 1234.567f, true},
						 {"TestStreet4", 40, 1234.567f, false},
						 {"TestStreet5", 50, 1234.567f, true}};

	int i = 0;
	while (i < sizeof(streets) / sizeof(Street))
	{
		cout << "street = {" << streets[i].title << ", " << streets[i].housesCount << ", " << streets[i].averagePayment << ", " << boolalpha << streets[i].danger << "}" << endl;
		i++;
	}

	cout << endl;

	// Пункт 4.7

	cout << "4.7. Динамическая память для структурных переменных и массива структур." << endl << endl;

	// ПЕРЕМЕННАЯ
	/*
		Опишите указатель на простую переменную типа int (pdInt). Выделите динамическую память под переменную (new).
		Присвойте (разыменование -*) динамической переменной значение (25) и распечатайте вместе с адресом указателя. Освободите
		динамическую память (delete). 
	*/
	
	cout << "\tПЕРЕМЕННАЯ" << endl << endl;

	int *pdInt = new int;
	*pdInt = 25;

	cout << "*pdInt = " << *pdInt << endl;
	cout << "pdInt = " << pdInt << endl << endl;

	delete pdInt;

	// СТРУКТУРНАЯ ПЕРЕМЕННАЯ
	/*
		Опишите указатель на структурную переменную вашего типа (pdStr) – смотрите варианты. Выделите динамическую память под
		структурную переменную (new). Присвойте (->) полям динамической структурной переменной значения в соответствии с типом
		поля и распечатайте вместе с адресом указателя. Освободите динамическую память под структуру (delete). 
	*/
	
	cout << "\tСТРУКТУРНАЯ ПЕРЕМЕННАЯ" << endl << endl;

	Street *pdStr = new Street;
	
	strcpy_s(pdStr->title, "WTF");
	pdStr->housesCount = 3;
	pdStr->danger = true;
	pdStr->averagePayment = 123.123f;

	cout << "*pdStr = {" << pdStr->title << ", " << pdStr->housesCount << ", " << pdStr->averagePayment << ", " << boolalpha << pdStr->danger << "}" << endl;
	cout << "pdStr = " << pdStr << endl << endl;

	delete pdStr;

	// МАССИВ СТРУКТУРНЫХ ПЕРЕМЕННЫХ
	/*
		Выделить динамическую память под массив структурных переменных вашего типа (pdStr) – смотрите варианты. Элементов
		должно быть не менее 3-х (можно из структурного массива, описанного выше). Заполнить поля отдельных структурных
		переменных произвольными значениями (вручную или в цикле). Распечатать динамический массив структурных переменных.
		Освободите динамическую память под структурный массив (delete). 
	*/
	
	cout << "\tМАССИВ СТРУКТУРНЫХ ПЕРЕМЕННЫХ" << endl << endl;

	Street *pdStrArray = new Street[3];

	for(int i = 0; i < 3; i++) {
		pdStrArray[i] = streets[i];
		cout << "*pdStr = {" << pdStrArray[i].title << ", " << pdStrArray[i].housesCount << ", " << pdStrArray[i].averagePayment << ", " << boolalpha << pdStrArray[i].danger << "}" << endl;
	}

	delete[] pdStrArray;

	cout << endl;

	// Пункт 4.8

	cout << "4.8 Использование циклов и операторов ветвления." << endl << endl;

	// СОРТИРОВКА ДИНАМИЧЕСКОГО МАССИВА ЦЕЛЫХ
	/*
		Создать динамический массив целых переменных типа int (указатель - pMas). Размер массива не менее 5-ти элементов.
		Заполните массив произвольными (вручную) или  случайными (функция - rand) значениями. Выполните пузырьковую сортировку
		по варианту (возрастание или убывание). Использовать оператор цикла for. Результат до и после сортировки распечатать.
		Освободите динамическую память под массив (delete).  
	*/
	
	cout << "\tСОРТИРОВКА ДИНАМИЧЕСКОГО МАССИВА ЦЕЛЫХ" << endl << endl;

	int *pMas = new int[5];

	cout << "{"; 
	for (int i = 0; i < 5; i++)
	{
		pMas[i] = rand(); // & 10;
		cout << pMas[i] << ", ";
	}
	cout << "\b}" << endl; 

	for (int i = 0; i < 5; i++)
    {
        for (int j = 5 - 1; j > i; j--)
        {
            if (pMas[j] < pMas[j - 1])
            {
                swap(pMas[j], pMas[j - 1]);
            }
        }
    }

	cout << "{"; 
	for (int i = 0; i < 5; i++)
	{
		cout << pMas[i] << ", ";
	}
	cout << "\b}" << endl << endl; 

	delete[] pMas;

	// Пункт 4.9

	cout << "4.9. Продемонстрировать умение описать функцию и вызвать ее из другого модуля." << endl << endl;

	/*
		ДОБАВЛЕНИЕ МОДУЛЯ В ПРОЕКТ. Для демонстрации умения описывать функции в другом модуле создадим в проекте второй
		исходный файл (SECOND.CPP). Для этого в дереве проекта, на позиции “Source Files” вызываем контекстное меню, а там
		выбираем пункт “Add” - > “New Item”. Выбираем шаблон “C++ File”, а поле “Name” вводим имя файла - SECOND. В пустой файл
		добавляем описание заголовочных файлов и библиотеки std:

		ПРОСТАЯ ФУНКЦИЯ. В новом файле создаем функцию по варианту (сумма, произведение, максимум, минимум, среднее). Содержание
		функции - вычисление значений для вещественного массива (см. пункт описание fMas), передаваемое в качестве параметров 
		в функцию. Размер массива также передается в качестве параметра. Название функции задайте самостоятельно. Не забудьте
		описать прототип функции в основном файле. Распечатать массив перед обращением к функции. Для реализации цикла
		используется оператор цикла, обозначенный в варианте группы (for, do или while). После вызова функции распечатать
		результаты ее работы в стандартный поток cout.

		ФУНКЦИЯ СОРТИРОВКИ. Описать и продемонстрировать использование функции для сортировки массива структур (SortMas в
		модуле SECOND.CPP). Тип сортировки задается параметром функции (убывание или возрастание). Распечатать в цикле исходный
		массив и массив после сортировки. Тип массива задается вариантом. 
	*/
	
	cout << "\tПРОСТАЯ ФУНКЦИЯ" << endl << endl;

	double ddMas[] = {22, 1, 34.5};
	double minVar = findMin(ddMas, 3);

	cout << endl;

	cout << "\tФУНКЦИЯ СОРТИРОВКИ" << endl << endl;

	i = 0;
	while (i < sizeof(streets) / sizeof(Street))
	{
		cout << "street = {" << streets[i].title << ", " << streets[i].housesCount << ", " << streets[i].averagePayment << ", " << boolalpha << streets[i].danger << "}" << endl;
		i++;
	}

	cout << endl;

	sortMas(streets, sizeof(streets) / sizeof(Street), false);

	i = 0;
	while (i < sizeof(streets) / sizeof(Street))
	{
		cout << "street = {" << streets[i].title << ", " << streets[i].housesCount << ", " << streets[i].averagePayment << ", " << boolalpha << streets[i].danger << "}" << endl;
		i++;
	}

	cout << endl;

	// Пункт 4.10

	cout << "4.10. Работы с файлами на основе массива структур" << endl << endl;

	// СОЗДАНИЕ ФАЙЛА
	/*
		Описать дескриптор файла. Создать заполнить файл с именем “Var_GXX.bin”. Где: G – номер группы, а XX – вариант по
		журналу группы. Использовать функции: fopen, fwrite и fclose. Запись в файл выполнить на основе массива структурных
		переменных, заполненного ранее (п.4.6) или описанного заново.  Закрыть файл.  
	*/
	
	cout << "\tСОЗДАНИЕ ФАЙЛА" << endl << endl;

	int streetArrSize = 2;

	Street *streetArr = new Street[streetArrSize]; 

	Street s1 = {"A", 1, 1.5, true};
	Street s2 = {"B", 2, 2.5, false};

	streetArr[0] = s1;
	streetArr[1] = s2;

	FILE *pFile;

	fopen_s(&pFile, "Var_303.bin", "w+");
	fwriteStreetsFromArray(streetArr, streetArrSize, pFile);
	fclose(pFile);

	cout << "Файл Var_303.bin создан" << endl << endl;

	// ЧТЕНИЕ И РАСПЕЧАТКА ФАЙЛА
	/*
		Открыть сформированный ранее файл для чтения. Использовать функции: fopen, fread и fclose. Прочитать в цикле отдельные
		записи файла (в промежуточный буфер) и их распечатать. Закрыть файл.  
	*/

	cout << "\tЧТЕНИЕ И РАСПЕЧАТКА ФАЙЛА" << endl << endl;
	
	fopen_s(&pFile, "Var_303.bin", "r+b");
	freadStreetsToArray(streetArr, streetArrSize, pFile);
	fclose(pFile);

	for (int i = 0; i < 2; i++) {

		cout << "street" << i << " = {" << streetArr[i].title << ", " << streetArr[i].housesCount << ", " << streetArr[i].averagePayment << ", " << boolalpha << streetArr[i].danger << "}" << endl;
	}

	delete[] streetArr;

	cout << endl;

	// ИЗМЕНЕНИЕ ФАЙЛА
	/*
		Открыть снова это файл для записи с добавлением. Описать и проинициализировать новую структурную переменную вашего
		типа. Добавить эту запись в конец файла. Использовать функции: fopen, fwrite и fclose. Закрыть файл. Открыть измененный
		файл для чтения. Прочитать файл и распечатать. Закрыть файл.
	*/

	cout << "\tИЗМЕНЕНИЕ ФАЙЛА" << endl << endl;

	fopen_s(&pFile, "Var_303.bin", "a+b");
	
	fseek(pFile, 0, SEEK_END);

	Street addStreet = { "C", 3, 3.5, true };

	fwrite(&addStreet, sizeof(Street), 1, pFile);

	streetArrSize++;

	streetArr = new Street[streetArrSize];

	fclose(pFile);

	fopen_s(&pFile, "Var_303.bin", "r+b");
	freadStreetsToArray(streetArr, streetArrSize, pFile);
	fclose(pFile);

	for (int i = 0; i < streetArrSize; i++) {

		cout << "street" << i << " = {" << streetArr[i].title << ", " << streetArr[i].housesCount << ", " << streetArr[i].averagePayment << ", " << boolalpha << streetArr[i].danger << "}" << endl;
	}

	cout << endl;

	// ЧТЕНИЕ ЗАПИСИ ПО НОМЕРУ
	/*
		Открыть свой файл для чтения. Прочитать запись по номеру  из файла (номер – см. вариант). Считать, что записи в файле
		пронумерованы с 1-цы. Использовать функции: fopen, fseek,  fread и fclose. Распечатать прочтенную запись. Закрыть
		этот файл. 
	*/
	
	cout << "\tЧТЕНИЕ ЗАПИСИ ПО НОМЕРУ" << endl << endl;

	int numberOfStreet = 3;

	fopen_s(&pFile, "Var_303.bin", "r+b");

	Street street;
	freadStreetByNumber(&street, 2, pFile);

	fclose(pFile);

	cout << "street" << " = {" << street.title << ", " << street.housesCount << ", " << street.averagePayment << ", " << boolalpha << street.danger << "}" << endl << endl;

	// СОЗДАНИЕ НОВОГО ФАЙЛА
	/*
		Создать новый файл (LR1.BIN) на основе первого – только четными записями (0, 2, …) из первого. Использовать функции:
		fopen, fwrite, fread и fclose. Закрыть эти файлы. Открыть новый файл (LR1.BIN) для чтения и его распечатать.
		Закрыть файл. Продемонстрировать преподавателю содержимое файлов с помощью файл – менеджеров (Far или Total Commander).. 
	*/
	
	cout << "\tСОЗДАНИЕ НОВОГО ФАЙЛА" << endl << endl;

	FILE *pFile2;

	fopen_s(&pFile2, "LR1.bin", "w+");
	fopen_s(&pFile, "Var_303.bin", "r+b");

	freadStreetsToArray(streetArr, streetArrSize, pFile);

	int streetArr2Size = 0;

	for (int i = 0; i < streetArrSize; i++) {

		if (i % 2 == 0)
		{
			fseek(pFile2, 0, SEEK_END);
			fwrite(&streetArr[i], sizeof(Street), 1, pFile2);
		
			streetArr2Size++;
		}
	}

	fclose(pFile);
	fclose(pFile2);

	cout << "Новый файл LR1.bin создан" << endl << endl;

	Street *streetArr2 = new Street[streetArr2Size];

	fopen_s(&pFile2, "LR1.bin", "r+b");
	freadStreetsToArray(streetArr2, streetArr2Size, pFile2);
	fclose(pFile);

	for (int i = 0; i < streetArr2Size; i++) {

		cout << "street" << i << " = {" << streetArr2[i].title << ", " << streetArr2[i].housesCount << ", " << streetArr2[i].averagePayment << ", " << boolalpha << streetArr2[i].danger << "}" << endl;
	}

	cout << endl;

	delete[] streetArr;
	delete[] streetArr2;

	// Дополнительные требования для сильных студентов

	cout << "Дополнительные требования для сильных студентов" << endl << endl;

	// ИСПОЛЬЗОВАНИЕ ДИРЕКТИВЫ typedef
	/*
	Продемонстрировать использование директивы typedef для ссылок и указателей.
	*/

	cout << "\tИСПОЛЬЗОВАНИЕ ДИРЕКТИВЫ typedef" << endl << endl;

	int intVar = 13;
	PInt pointerToInt = &intVar;
	RInt referenceToInt = intVar;

	cout << "PInt pointerToInt = " << pointerToInt << endl;
	cout << "RInt referenceToInt = " << referenceToInt << endl << endl;

	// ИСПОЛЬЗОВАНИЕ switch
	/*
	Продемонстрировать использование оператора множественного ветвления – переключатель(switch).
	*/

	cout << "\tИСПОЛЬЗОВАНИЕ switch" << endl << endl;

	switch (intVar)
	{
	case 13:
		cout << "switch (intVar) == 13" << endl << endl;
	default:
		break;
	}

	// ИСПОЛЬЗОВАНИЕ МАКРОСОВ
	/*
	Продемонстрировать использование макросов(#define), смотрите варианты.
	*/

	cout << "\tИСПОЛЬЗОВАНИЕ МАКРОСОВ" << endl << endl;

	cout << "AVR(1, 2, 3) = " << AVR(1, 2, 3) << endl << endl;

	// ИЗМЕНЕНИЕ ЗАПИСИ ПО НОМЕРУ
	/*
	Написать фрагменты изменения записи по номеру и удаления записей.
	*/

	cout << "\tИЗМЕНЕНИЕ ЗАПИСИ ПО НОМЕРУ" << endl << endl;

	fopen_s(&pFile, "Var_303.bin", "r+b");
	fprintStreets(pFile, 3);
	fclose(pFile);

	Street street555 = {"555", 12, 12.5, true};
	
	fopen_s(&pFile, "Var_303.bin", "r+b");

	frewriteStreetByNumber(street555, 2, 3, pFile);
	fclose(pFile);

	fopen_s(&pFile, "Var_303.bin", "r+b");
	fprintStreets(pFile, 3);

	fclose(pFile);

	cout << "\tУДАЛЕНИЕ ЗАПИСИ ПО НОМЕРУ" << endl << endl;

	fopen_s(&pFile, "Var_303.bin", "r+b");
	fprintStreets(pFile, 3);
	fclose(pFile);

	fopen_s(&pFile, "Var_303.bin", "r+b");
	fremoveStreetByNumber(1, 3, pFile);
	fclose(pFile);

	fopen_s(&pFile, "Var_303.bin", "r+b");
	fprintStreets(pFile, 2);
	fclose(pFile);

	// РАБОТА С ФАЙЛАМИ В ВИДЕ ФУНКЦИЙ
	/*
	Оформить фрагменты текста основного задания с файлами в виде функций(чтение в массив, распечатка файла, запись из массива в файл, чтение записи по номеру).
	*/

	cout << "\tРАБОТА С ФАЙЛАМИ В ВИДЕ ФУНКЦИЙ" << endl << endl;

	cout << "Функция чтения файла в массив используется в предыдущих пунктах" << endl << endl;

	fopen_s(&pFile, "Var_303.bin", "r+b");
	cout << "Печать файла" << endl << endl;
	fprintStreets(pFile, 3);
	fclose(pFile);

	cout << "Функция записи из массива в файл используется в предыдущих пунктах" << endl << endl;

	fopen_s(&pFile, "Var_303.bin", "r+b");
	Street street666 = {};
	freadStreetByNumber(&street666, 2, pFile);
	fclose(pFile);
	cout << "Чтение записи по номеру" << endl << endl;
	cout << "street1 = {" << street666.title << ", "
		<< street666.housesCount << ", " << street666.averagePayment << ", "
		<< boolalpha << street666.danger << "}" << endl << endl;

	// ИСПОЛЬЗОВАНИЕ string
	/*
	Продемонстрировать использование типа string из библиотеки STL.Не забудьте подключить библиотеку строк заголовочной директивой : #include <string>
	*/

	cout << "\tИСПОЛЬЗОВАНИЕ string" << endl << endl;

	string str = "This is string object";

	cout << "string str = " << str << endl << endl;

	system(" PAUSE");
}

int fun1(int param) {

	return param * 2;
}

int fun2(int param) {

	return param / 2;
}

int freadStreetsToArray(Street *streetsArray, int streetsArraySize, FILE *file) {

	fseek(file, 0, SEEK_SET);

	int error = fread((char *)streetsArray, sizeof(Street), streetsArraySize, file);

	return error;
}

int freadStreetByNumber(Street *street, int number, FILE *file) {

	fseek(file, (number -1) * sizeof(Street), SEEK_SET);

	int error = fread((char *)street, sizeof(Street), 1, file);

	return error;
}

int fwriteStreetsFromArray(Street *streetsArray, int streetsArraySize, FILE *file) {

	fseek(file, 0, SEEK_SET);

	int error = fwrite((char *)streetsArray, sizeof(Street), streetsArraySize, file);

	return error;
}

int frewriteStreetByNumber(Street street, int number, int streetsCount, FILE *file) {

	Street *streets = new Street[streetsCount];

	int error = freadStreetsToArray(streets, streetsCount, file);

	streets[number - 1] = street;

	error = fwriteStreetsFromArray(streets, streetsCount, file);

	delete[] streets;

	return error;
}

int fprintStreets(FILE *file, int numberOfStreets) {

	Street *streets = new Street[numberOfStreets];

	int error = freadStreetsToArray(streets, numberOfStreets, file);

	for (int i = 0; i < numberOfStreets; i++) {

		cout << "street" << i << " = {" << streets[i].title << ", "
			 << streets[i].housesCount << ", " << streets[i].averagePayment << ", "
			 << boolalpha << streets[i].danger << "}" << endl;
	}

	cout << endl;

	delete[] streets;

	return error;
}

int fremoveStreetByNumber(int number, int numberOfStreets, FILE *file) {

	Street *streets = new Street[numberOfStreets];

	int error = freadStreetsToArray(streets, numberOfStreets, file);

	Street *newStreets = new Street[numberOfStreets-1];

	int j = 0;

	for (int i = 0; i < numberOfStreets; i++) {
		if (i != (number - 1)) {

			newStreets[j] = streets[i];

			j++;
		}
	}

	error = fwriteStreetsFromArray(newStreets, numberOfStreets-1, file);

	delete[] streets;
	delete[] newStreets;

	return error;
}