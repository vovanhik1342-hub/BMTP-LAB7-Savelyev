#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string word;
    cout << "Введіть слово (закінчіть символом '#'): ";
    cin >> word;

    if (word.empty() || word[word.length() - 1] != '#') {
        cout << "Помилка: слово повинно закінчуватися символом '#'." << endl;
        cout << "Натисніть Enter для виходу...";
        cin.ignore();
        cin.get();
        return 1;
    }

    word = word.substr(0, word.length() - 1);

    int ra_count = 0;
    for (int i = 0; i < word.length() - 1; i++) {
        if ((word[i] == 'р' || word[i] == 'Р') &&
            (word[i + 1] == 'а' || word[i + 1] == 'А')) {
            ra_count++;
        }
    }

    if (ra_count > 0) {
        cout << "Кількість складів 'ра': " << ra_count << endl;
    }
    else {
        int uppercase_count = 0;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'А' && word[i] <= 'Я') {
                uppercase_count++;
            }
        }
        cout << "Довжина слова: " << word.length() << endl;
        cout << "Кількість заголовкових літер: " << uppercase_count << endl;
    }
    cout << "Натисніть Enter для виходу...";
    cin.ignore();
    cin.get();
    return 0;
}
