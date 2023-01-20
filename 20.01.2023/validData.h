#include <iostream>
#include <string>

bool validEmail() {

    std::string eMail;
    std::getline(std::cin >> std::ws, eMail);
    int length = eMail.length();
    int dotCount = 0;
    int i = 0;

    for (i; i < length; ++i) {
        if (eMail[0] == '.' || eMail[i] == ' '
            ||(eMail[i] == '.' && eMail[i + 1] == '.')) {
            return false;
        }

        if (i != 0 && eMail[i] == '@') {
            ++i;
            break;
        }
    }

    if (i == length || eMail[i] == '.' || eMail[length - 1] == '.') {
        return false;
    }

    for (i; i < length; ++i) {
        if (eMail[i] == '@' || eMail[i] == ' ') {
            return false;
        }
        if (eMail[i] == '.') {
            ++dotCount;
        }
    }

    if (dotCount != 1) {
        return false;
    }

    return true;
}

bool validDate() {
    std::string date;
    int dateFormat;

    std::cout << "Choose date format." << std::endl;
    std::cout << "1. DD.MM.YYYY\n2. MM.DD.YYYY" << std::endl;
    std::cin >> dateFormat;
    std::getline(std::cin >> std::ws, date);
    int length = date.length();

    if (length != 10) {
        return false;
    }

    if (date[2] != '.' || date[5] != '.') {
        return false;
    }

    for (int i = 0; i < length; ++i) {
        if (i == 2 || i == 5) {
            continue;
        }

        if (date[i] < '0' || date[i] > '9') {
            return false;
        }
    }

    if (dateFormat == 1) {
        if (std::stoi(date.substr(0,2)) > 31 
            || std::stoi(date.substr(3,2)) > 12
            || std::stoi(date.substr(6)) > 2023) {
                return false;
            }
    }
    else if (dateFormat == 2) {
        if (std::stoi(date.substr(0,2)) > 12 
            || std::stoi(date.substr(3,2)) > 31
            || std::stoi(date.substr(6)) > 2023) {
                return false;
            }
    }
    else { return false; }

    return true;
}

bool validNumber() {
    std::string num;
    std::getline(std::cin >> std::ws, num);
    int length = num.length();
    int dotCount = 0;

    if (!length || num[0] == '.' || num[length - 1] == '.') {
        return false;
    }

    for (int i = 0; i < length; ++i) {
        if (num[i] == '.') {
            ++dotCount;
            continue;
        }
        if (num[i] < '0' || num[i] > '9') {
            return false;
        }
    }

    if (dotCount > 1) {
        return false;
    }

    return true;
}