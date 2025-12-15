#include <iostream>
#include <string>
using namespace std;

//Dialog of the first example is given below.
int main(){
    string name;
    string studentID;
    string movie;
    string greeting;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin,name);
    cout << "?????: ";
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    getline(cin,studentID);
    // 3. คำนวณ Gear (รหัส 2 ตัวหน้า - 12)
    // ดึงสตริงมา 2 ตัวแรก แล้วแปลงเป็น int
    int gear = stoi(studentID.substr(0, 2)) - 12;
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    string day;
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline(cin,greeting);
    cout << "Fahsai: 555+ see you " << day <<". Bye Bye \\(^ ^)/\n";
    return 0;

}
/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
