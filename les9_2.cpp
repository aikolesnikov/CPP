// LED.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

enum Color { BLACK = 0, BLUE = 1, GREEN = 2, RED = 4, GRAY = 8, WHITE = 15 };
WORD setColorWin(int textColor);
void gotoxy(int x, int y);

// version 0.1 :)
class LED
{
	int m_NumLeds; // число светодиодов
	unsigned int m_State; // состояние светодиодов - вкл - 1 бит, выкл - 0 бит -  0 b 00011111

	Color m_ColorLedOn;  // цвет горящего светодиода
	Color m_ColorLedOff; // цвет выключенного светодиода
	Color m_ColorUm;  //  забыл для чего ... нужно было коментить или называть понятно

public:
	//конструктор принимает начальное состояние и количество светодиодов (по умолчанию их 6)
	LED(unsigned int state, int numLeds = 6) : m_State(state), m_NumLeds(numLeds),
		m_ColorLedOn(BLUE), m_ColorLedOff(GRAY), m_ColorUm(WHITE)
	{
		if (numLeds < 1 || numLeds > 32) // к-во диодов от 1 до 32
			cout << "error";
		else
			show(); // показ светодиодов
	}
	// метод установки состояния светодиодов
	void setState(unsigned int state) { m_State = state; }

	// метод отображения состояния светодиодов
	void show()
	{
		const int consoleDiodPlaceTop = 10;
		const int consoleDiodPlaceLeft = 20;
		if (m_NumLeds < 1 || m_NumLeds > 32)
			cout << "error";
		else {
			system("cls"); // очистить консоль
			unsigned int bit = 1 << (m_NumLeds - 1); // маска, по которой проверяется, состояние светодиода, нач значение  10000000...

			// код отступа сверху, слева
			for (int i = 0; i < consoleDiodPlaceTop; i++)
				cout << endl;
			for (int i = 0; i < consoleDiodPlaceLeft; i++)
				cout << ' ';

			// прорисовка светодиодов
			for (int i = 0; i < m_NumLeds; i++) {
				if ( (m_State & bit) == bit ){
					WORD oldColor = setColorWin(m_ColorLedOn);
					cout << "* ";
					setColorWin(oldColor);
				}
				else{
					WORD oldColor = setColorWin(m_ColorLedOff);
					cout << "* ";
					setColorWin(oldColor);
				}

				bit >>= 1;
			}
			cout << endl << endl;
		}
	}

	// Установка цвета диодов
	void setLedColor(Color ColorOn = BLUE, Color ColorOff = GRAY)
	{
		m_ColorLedOn = ColorOn;
		m_ColorLedOff = ColorOff;
	}
};



int main()
{
	// пример работы с классом LED

	int numLed = 10;	 // количество светодиодов

	LED ld(1, numLed);   // создание ленты светодиодов- включен один -- самый правый  ...000001
	ld.show();			 // отобразить светодиоды
	//Sleep(100);
	unsigned int state = 1;       // состояние
	int mask = (1 << (numLed));   // маска проверки состояние светодиода, нач значение  10000000...
	int speed = 100;				  // скорость переключения светодиодов в мс

	// цикл, в котором будет менятся состояние светодиода
	// меняется справа налево
 	while (true)
	{
		// достигли последнего слева, установили первым справа
		if ((state & mask) == mask)       // 100000
			state = 1;

		ld.setState(state);  // записали состояние в ленту светодиодов (запись данных в ПОРТ)
		ld.setLedColor(GREEN);
		ld.show();			 // Отобразили данные из порта
		Sleep(speed);		 // установили паузу
		state = state << 1;  // Применили сдвиг на один светодиод для изменения состояния

		//cout << " \n\n TEXT \n";
	}


	return 0;
}


// color text in Windows console mode
WORD setColorWin(int textColor)
{
	const int backgroundColor = BLACK;
	HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// взять текущие цвета
	CONSOLE_SCREEN_BUFFER_INFO info;
	if (!GetConsoleScreenBufferInfo(hConsole, &info))
		return -1;

	// установить новые цвета
	// 0000 0000
	// bgd  txt
	SetConsoleTextAttribute(hConsole, ((unsigned)backgroundColor << 4) | (unsigned)textColor);

	return info.wAttributes;
}

// Set Console Cursor Position in Windows console
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
