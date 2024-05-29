#include <iostream>
#include <regex>
#include <string>
using namespace std;
bool validate_date(const string date) {
    // Ðודףכÿנםמו גûנאזוםטו הכÿ ןנמגונךט האעû ג פמנלאעאץ הה.לל.דדדד, הה/לל/דדדד, הה/לל/דד, הה-לל-דדדד ט ע.ה.
    regex pattern(R"((0[1-9]|[12][0-9]|3[01])[-/.](0[1-9]|1[0-2])[-/.](\d{2}|\d{4}))");

    return regex_search(date, pattern);
}

int main() {
    setlocale(LC_ALL, "Rus");
    string input_date;
    bool valid = false;

    do {
        cout << "Âגוהטעו האעף ג פמנלאעו הה.לל.דדדד, הה/לל/דדדד, הה/לל/דד, הה-לל-דדדד ט ע.ה.: ";
        getline(cin, input_date);

        valid = validate_date(input_date);

        if (!valid) {
            cout << "Íוןנאגטכüםûי פמנלאע האעû. Ïמזאכףיסעא, גגוהטעו האעף סםמגא." << endl;
        }

    } while (!valid);

    cout << "Âגוהוםםאÿ האעא " << input_date << " ךמננוךעםא." << endl;

    return 0;
}

