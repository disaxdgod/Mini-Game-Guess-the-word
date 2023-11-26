#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
	//программа поддерживает только слова на англ языке!
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	string guess;
	char YesOrNo;
	enum fields { word, hint, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"C++", "Best language"},
		{"Hello world","u first programm" },
		{"3.14", "PI?" },
		{"test", "test" },
		{"test", "test"},
	};
	int choise = (rand() % NUM_WORDS);
	string theWord = WORDS[choise][word];
	string theHint = WORDS[choise][hint];
	string rndword = theWord;
	int length = rndword.size();
	for (int i = 0; i < length; i++) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = rndword[index1];
		rndword[index1] = rndword[index2];
		rndword[index2] = temp;

	}
	cout << "\t\tДобро пожаловать в игру Словомеска!" << endl;
	cout << endl;
	cout << "\t\tСуть игры: вам выпадает слово и подсказка" << endl;
	cout << "\t\tесли пользователь не может угадать " << endl;
	cout << endl;
	cout << "\t\tЗадача: Угадать слово которое выдаст программа" << endl;
	cout << endl;
	cout << "Желаете начать игру? (y/n): ";
	cin >> YesOrNo;
	if (YesOrNo == 'n' || YesOrNo == 'N') {
		cout << "Удачи";
		return 0;
	}
	cout << "Слово: " << rndword << endl;
	cout << "Требуется подсказка? (y/n): ";
	cin >> YesOrNo;
	if (YesOrNo == 'y' || YesOrNo == 'Y') {
		cout << "Подсказка: " << theHint << endl;
	}

	cout << "Ваш ответ: ";
	cin >> guess;
	if (guess == theWord) {
		cout << "Поздравляем вы угадали!" << endl;
		return 0;
	}




}