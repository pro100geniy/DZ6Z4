#include <iostream>
#include <regex>
#include <string>
using namespace std;
bool validate_date(const string date) {
    // ���������� ��������� ��� �������� ���� � �������� ��.��.����, ��/��/����, ��/��/��, ��-��-���� � �.�.
    regex pattern(R"((0[1-9]|[12][0-9]|3[01])[-/.](0[1-9]|1[0-2])[-/.](\d{2}|\d{4}))");

    return regex_search(date, pattern);
}

int main() {
    setlocale(LC_ALL, "Rus");
    string input_date;
    bool valid = false;

    do {
        cout << "������� ���� � ������� ��.��.����, ��/��/����, ��/��/��, ��-��-���� � �.�.: ";
        getline(cin, input_date);

        valid = validate_date(input_date);

        if (!valid) {
            cout << "������������ ������ ����. ����������, ������� ���� �����." << endl;
        }

    } while (!valid);

    cout << "��������� ���� " << input_date << " ���������." << endl;

    return 0;
}

