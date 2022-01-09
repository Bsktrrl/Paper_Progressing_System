#include "Includes.h"
#include "Termcolor.h"

void getWordCount(int& wordCount, int& oldWordCount, int& newWordCount);
void showGraphic(int& wordCount);

void main() {

	int wordCount{};
	int oldWordCount{};
	int newWordCount{};

	bool changes{false};
	
	while (true)
	{
		changes = false;
		showGraphic(wordCount);
		
		while (changes == false)
		{
			getWordCount(wordCount, oldWordCount, newWordCount);

			if (oldWordCount != newWordCount)
				changes = true;
		}

		system("cls");
		
	}
}

void getWordCount(int& wordCount, int& oldWordCount, int& newWordCount) {

	oldWordCount = wordCount;
	wordCount = 0;

	vector<string> wordsInDocument{};
	ifstream words("Word_Count.txt", ios::in);

	if (words.is_open())
	{
		string buff{};

		wordsInDocument.clear();

		while ((getline(words, buff)))
			wordsInDocument.push_back(buff);

		//Checking every word in every line of the document
		for (size_t i = 0; i < wordsInDocument.size(); i++)
		{
			for (size_t j = 0; j < wordsInDocument[i].size(); j++)
			{
				if (wordsInDocument[i][j] == ' ')
					wordCount++;
			}
			wordCount++;
		}

		words.close();
	}

	newWordCount = wordCount;
}

void showGraphic(int& wordCount) {

	//wordCount = 750; //Can be used to overwrite the file if needed

	float maxWords{15000}; //Can be changed to sett different goals
	float percent{};
	float timePercent{};

	percent = wordCount * (float)(100.0 / maxWords);

	//Display battery
	cout << "Words:    " << wordCount << endl;
	cout << "Limit:    " << maxWords << endl << endl;
	cout << "Progress: " << percent << "%" << endl;

	#pragma region Battery Words
	if (percent < 5)
	{
		cout << " ---------------------" << endl;
		cout << " |                    ||" << endl;
		cout << " |                    ||" << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 10)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "|" << termcolor::reset << "                   || " << endl;
		cout << " |" << termcolor::red << "|" << termcolor::reset << "                   || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 15)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "||" << termcolor::reset << "                  || " << endl;
		cout << " |" << termcolor::red << "||" << termcolor::reset << "                  || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 20)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "|||" << termcolor::reset << "                 || " << endl;
		cout << " |" << termcolor::red << "|||" << termcolor::reset << "                 || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 25)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "||||" << termcolor::reset << "                || " << endl;
		cout << " |" << termcolor::red << "||||" << termcolor::reset << "                || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 30)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "|||||" << termcolor::reset << "               || " << endl;
		cout << " |" << termcolor::yellow << "|||||" << termcolor::reset << "               || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 35)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "||||||" << termcolor::reset << "              || " << endl;
		cout << " |" << termcolor::yellow << "||||||" << termcolor::reset << "              || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 40)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "|||||||" << termcolor::reset << "             || " << endl;
		cout << " |" << termcolor::yellow << "|||||||" << termcolor::reset << "             || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 45)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "||||||||" << termcolor::reset << "            || " << endl;
		cout << " |" << termcolor::yellow << "||||||||" << termcolor::reset << "            || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 50)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "|||||||||" << termcolor::reset << "           || " << endl;
		cout << " |" << termcolor::yellow << "|||||||||" << termcolor::reset << "           || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 55)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "||||||||||" << termcolor::reset << "          || " << endl;
		cout << " |" << termcolor::yellow << "||||||||||" << termcolor::reset << "          || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 60)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "|||||||||||" << termcolor::reset << "         || " << endl;
		cout << " |" << termcolor::green << "|||||||||||" << termcolor::reset << "         || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 65)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "||||||||||||" << termcolor::reset << "        || " << endl;
		cout << " |" << termcolor::green << "||||||||||||" << termcolor::reset << "        || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 70)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "|||||||||||||" << termcolor::reset << "       || " << endl;
		cout << " |" << termcolor::green << "|||||||||||||" << termcolor::reset << "       || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 75)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "||||||||||||||" << termcolor::reset << "      || " << endl;
		cout << " |" << termcolor::green << "||||||||||||||" << termcolor::reset << "      || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (percent < 80)
	{
	cout << " ---------------------" << endl;
	cout << " |" << termcolor::green << "|||||||||||||||" << termcolor::reset << "     || " << endl;
	cout << " |" << termcolor::green << "|||||||||||||||" << termcolor::reset << "     || " << endl;
	cout << " ---------------------" << endl;
	}
	else if (percent < 85)
	{
	cout << " ---------------------" << endl;
	cout << " |" << termcolor::green << "||||||||||||||||" << termcolor::reset << "    || " << endl;
	cout << " |" << termcolor::green << "||||||||||||||||" << termcolor::reset << "    || " << endl;
	cout << " ---------------------" << endl;
	}
	else if (percent < 90)
	{
	cout << " ---------------------" << endl;
	cout << " |" << termcolor::green << "|||||||||||||||||" << termcolor::reset << "   || " << endl;
	cout << " |" << termcolor::green << "|||||||||||||||||" << termcolor::reset << "   || " << endl;
	cout << " ---------------------" << endl;
	}
	else if (percent < 95)
	{
	cout << " ---------------------" << endl;
	cout << " |" << termcolor::green << "||||||||||||||||||" << termcolor::reset << "  || " << endl;
	cout << " |" << termcolor::green << "||||||||||||||||||" << termcolor::reset << "  || " << endl;
	cout << " ---------------------" << endl;
	}
	else if (percent < 100)
	{
	cout << " ---------------------" << endl;
	cout << " |" << termcolor::green << "|||||||||||||||||||" << termcolor::reset << " || " << endl;
	cout << " |" << termcolor::green << "|||||||||||||||||||" << termcolor::reset << " || " << endl;
	cout << " ---------------------" << endl;
	}
	else if (percent == 100)
	{
	cout << " ---------------------" << endl;
	cout << " |" << termcolor::green << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
	cout << " |" << termcolor::green << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
	cout << " ---------------------" << endl;
	}
	else if (percent > 100)
	{
	cout << " ---------------------" << endl;
	cout << " |" << termcolor::cyan << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
	cout << " |" << termcolor::cyan << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
	cout << " ---------------------" << endl;
	}
	#pragma endregion

	cout << endl;

	//Display current date/time based on current start and end time 01:01:2022 - 01:06:2022
	int startCounter{};
	int nowCounter{};
	int endCounter{};

	int differenceStartEnd{};
	int differenceStartNow{};

	//Set the different times needed to calculate
	for (size_t i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			time_t start = 1640991600;
			startCounter = start;

			#pragma warning(suppress : 4996)
			tm* lts = localtime(&start);

			//cout << "Time start: " << lts->tm_mday << "/" << 1 + lts->tm_mon << "/" << 1900 + lts->tm_year << " 0" << lts->tm_hour << ":0" << lts->tm_min << ":0" << lts->tm_sec << endl;
		}
		else if (i == 1)
		{
			time_t now = time(0);
			nowCounter = now;

			#pragma warning(suppress : 4996)
			tm* ltn = localtime(&now);

			//cout << "Time now:   " << ltn->tm_mday << "/" << 1 + ltn->tm_mon << "/" << 1900 + ltn->tm_year << " " << ltn->tm_hour << ":" << ltn->tm_min << ":" << ltn->tm_sec << endl;
		}
		else if (i == 2)
		{
			time_t end = 1654034400;
			endCounter = end;
			
			#pragma warning(suppress : 4996)
			tm* lte = localtime(&end);

			//cout << "Time end:   " << lte->tm_mday << "/" << 1 + lte->tm_mon << "/" << 1900 + lte->tm_year << " 0" << lte->tm_hour << ":0" << lte->tm_min << ":0" << lte->tm_sec << endl;
		}
	}

	differenceStartEnd = endCounter - startCounter;
	differenceStartNow = nowCounter - startCounter;

	timePercent = differenceStartNow * (float)(100.0 / differenceStartEnd);

	cout << "Time used: " << timePercent << "%" << endl ;

	#pragma region Battery Time
	if (timePercent < 5)
	{
		cout << " ---------------------" << endl;
		cout << " |                    ||" << endl;
		cout << " |                    ||" << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 10)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "|" << termcolor::reset << "                   || " << endl;
		cout << " |" << termcolor::red << "|" << termcolor::reset << "                   || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 15)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "||" << termcolor::reset << "                  || " << endl;
		cout << " |" << termcolor::red << "||" << termcolor::reset << "                  || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 20)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "|||" << termcolor::reset << "                 || " << endl;
		cout << " |" << termcolor::red << "|||" << termcolor::reset << "                 || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 25)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::red << "||||" << termcolor::reset << "                || " << endl;
		cout << " |" << termcolor::red << "||||" << termcolor::reset << "                || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 30)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "|||||" << termcolor::reset << "               || " << endl;
		cout << " |" << termcolor::yellow << "|||||" << termcolor::reset << "               || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 35)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "||||||" << termcolor::reset << "              || " << endl;
		cout << " |" << termcolor::yellow << "||||||" << termcolor::reset << "              || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 40)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "|||||||" << termcolor::reset << "             || " << endl;
		cout << " |" << termcolor::yellow << "|||||||" << termcolor::reset << "             || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 45)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "||||||||" << termcolor::reset << "            || " << endl;
		cout << " |" << termcolor::yellow << "||||||||" << termcolor::reset << "            || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 50)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "|||||||||" << termcolor::reset << "           || " << endl;
		cout << " |" << termcolor::yellow << "|||||||||" << termcolor::reset << "           || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 55)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::yellow << "||||||||||" << termcolor::reset << "          || " << endl;
		cout << " |" << termcolor::yellow << "||||||||||" << termcolor::reset << "          || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 60)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "|||||||||||" << termcolor::reset << "         || " << endl;
		cout << " |" << termcolor::green << "|||||||||||" << termcolor::reset << "         || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 65)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "||||||||||||" << termcolor::reset << "        || " << endl;
		cout << " |" << termcolor::green << "||||||||||||" << termcolor::reset << "        || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 70)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "|||||||||||||" << termcolor::reset << "       || " << endl;
		cout << " |" << termcolor::green << "|||||||||||||" << termcolor::reset << "       || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 75)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "||||||||||||||" << termcolor::reset << "      || " << endl;
		cout << " |" << termcolor::green << "||||||||||||||" << termcolor::reset << "      || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 80)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "|||||||||||||||" << termcolor::reset << "     || " << endl;
		cout << " |" << termcolor::green << "|||||||||||||||" << termcolor::reset << "     || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 85)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "||||||||||||||||" << termcolor::reset << "    || " << endl;
		cout << " |" << termcolor::green << "||||||||||||||||" << termcolor::reset << "    || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 90)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "|||||||||||||||||" << termcolor::reset << "   || " << endl;
		cout << " |" << termcolor::green << "|||||||||||||||||" << termcolor::reset << "   || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 95)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "||||||||||||||||||" << termcolor::reset << "  || " << endl;
		cout << " |" << termcolor::green << "||||||||||||||||||" << termcolor::reset << "  || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent < 100)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "|||||||||||||||||||" << termcolor::reset << " || " << endl;
		cout << " |" << termcolor::green << "|||||||||||||||||||" << termcolor::reset << " || " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent == 100)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::green << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
		cout << " |" << termcolor::green << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
		cout << " ---------------------" << endl;
	}
	else if (timePercent > 100)
	{
		cout << " ---------------------" << endl;
		cout << " |" << termcolor::cyan << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
		cout << " |" << termcolor::cyan << "||||||||||||||||||||" << termcolor::reset << "|| " << endl;
		cout << " ---------------------" << endl;
	}
	#pragma endregion
}