#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    int day;
    cout << "Enter the day of birth: ";
    cin >> day;
    string month;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    string answer;
    answer = findZodiacSign(day, month);
    cout << "Zodiac Sign: " << answer;
}
string findZodiacSign(int day, string month)
{
    string answer;
    if (month=="March" && day>= 21 || month=="April" && day<= 19)
    {
        answer="Aries";
    }
    if (month=="April" && day>= 20 || month=="May" && day<= 20)
    {
        answer="Taurus";
    }
    if (month=="May" && day>= 21 || month=="June" && day<= 20)
    {
        answer="Gemini";
    }
    if (month=="June" && day>= 21 || month=="July" && day<= 22)
    {
        answer="Cancer";
    }
    if (month=="July" && day>= 23 || month=="August" && day<= 22)
    {
        answer="Leo";
    }
    if (month=="August" && day>= 23 || month=="September" && day<= 22)
    {
        answer="Virgo";
    }
    if (month=="September" && day>= 23 || month=="October" && day<= 22)
    {
        answer="Libra";
    }
    if (month=="October" && day>= 23 || month=="November" && day<= 21)
    {
        answer="Scorpio";
    }
    if (month=="November" && day>= 22 || month=="December" && day<= 21)
    {
        answer="Sagittarius";
    }
    if ((month=="December" && day>= 22) || (month=="January" && day<= 19))
    {
        answer="Capricorn";
    }
    if ((month=="January" && day>= 20) || (month=="February" && day<= 18))
    {
        answer="Aquarius";
    }
    if ((month=="February" && day>= 19) || (month== "March" && day<= 20))
    {
        answer="Pisces";
    }
    return answer;
}
