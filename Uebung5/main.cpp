#include <iostream>
#include <array>
#include <string>
using namespace std;

void run100();
int sumXY(int y, int x);
int wieOftJ(char charArray[], int lang, char zeichen);
int wieOftJString(std::string werte, char zeichen);
bool palindrom(std::string palindrom);

int main()
{
    char zeichen = 'x';
    std::string s = { "otto" };
    std::string werte = "xjjdsghjxj";
    const int lang = 7;
    char charArray[lang] = { 'g','h','x','x','j','x','j' };
    run100();
    cout << "Die Summe lautet: " << sumXY(2, 5) << endl;

    cout << "So oft wurde ein x vor j gefunden: " << wieOftJ(charArray, lang, zeichen) << endl;
    cout << "So oft wurde ein x vor j gefunden: " << wieOftJString(werte, zeichen) << endl;
    cout << palindrom(s) << endl;
    return 0;
}

void run100() {
    for (int i = 1; i <= 100; i++) {
        cout << i << endl;
    }
}

int sumXY(int y, int x) {
    int summe = 0;
    for (int i = y; i <= x; i++) {
        summe = summe + i;
    }
    return summe;
}

int wieOftJ(char charArray[], int lang, char zeichen) {
    int summe = 0;
    for (int i = 0; i < lang - 1; i++) {
        if (charArray[i] == zeichen && charArray[i + 1] == 'j') {
            summe++;
        }
    }
    return summe;
}

int wieOftJString(std::string werte, char zeichen) {
    int summe = 0;
    for (int i = 0; i < werte.size() - 1; i++) {
        if (werte[i] == zeichen && werte[i + 1] == 'j') {
            summe++;
        }
    }
    return summe;
}

bool palindrom(std::string palindrom) {
    for (int i = 0; i < palindrom.size() / 2; i++) {
        if (palindrom[i] != palindrom[palindrom.size() - i - 1]) {
            return false;
        }
    }
    return true;
}