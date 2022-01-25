//
// Created by Szymon on 20.01.2022.
//
#include "ESM.H"

using namespace std;
template <typename T>
T max(T &a,T &b) {
    if (a>b)
        return a;
    else
        return b;
}
void Osoba::setImie(string imie){
        this->imie =imie;
    }
void Osoba::setNazwisko(string nazwisko){
        this->nazwisko =nazwisko;
    }
string Osoba::getImie(){
        return imie;
    }

    string Osoba::getNazwisko(){
        return nazwisko;
    }

Osoba::Osoba(const string &imie, const string &nazwisko) : imie(imie), nazwisko(nazwisko) {}


void Pracownik::setKod(int kod){
        this->kod = kod;
}

void Pracownik::setWyplata(float wyplata){
    this->wyplata =wyplata;
}
void Pracownik::setDzial(string dzial){
this->dzial = dzial;
}
void Pracownik::setStanowisko(string stanowisko){
this->stanowisko = stanowisko;
}
int Pracownik::getKod(){
    return kod;
}
float Pracownik::getWyplata(){
    return wyplata;
}
string Pracownik::getDzial(){
    return dzial;
}
string Pracownik::getStanowisko() {
    return stanowisko;
}
void Pracownik::showData(){
    cout << kod <<".\t" << getImie() << "\t\t" << getNazwisko() ;
    cout << "\t\t"<< dzial << "\t\t"<< stanowisko ;
    cout <<"\t"<< wyplata << " zl"<<endl;
}

void MainMenu::showMenu() {
    cout << endl << "Menu " << endl;
    cout << "1.Wyswietl Pracownikow" << endl;
    cout << "2.Edytuj Rekord" << endl;
    cout << "3.Wyszukaj"<<endl;
    cout << "4.Dodaj Rekord"<<endl;
    cout << "5.Usun Rekord"<<endl;
    cout << "6.Zlicz ilosc osob w dziale"<<endl;
    cout << "7.Oblicz Koszty miesieczne "<<endl;
    cout << "8.Znajdz najwieksza wyplate"<<endl;
    cout << "9.Zapisz baze danych"<<endl;
    cout << "0.Wyjdz" << endl;
};
int MainMenu::Wybierz(){
    int znak;
    cin >> znak;
    while(cin.fail()){
        cout << "wprowadziles bledna wartosc"<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout <<"Wprowadz wybor ponownie"<<endl;
        cin >> znak;
    }
    return znak;
};
void MainMenu::Import(string nazwa_pliku){
    file.open(nazwa_pliku, fstream::in);
    if (file.is_open()) {
        do {
            getline(file, linia, ',');
            imie = linia;
            getline(file, linia, ',');
            nazwisko = linia;
            getline(file, linia, ',');
            kod = stol(linia);
            getline(file, linia, ',');
            wyplata = stof(linia);
            getline(file, linia, ',');
            dzial = linia;
            getline(file, linia, ',');
            stanowisko = linia;
            pracownicy.push_back(Pracownik(imie, nazwisko, kod, wyplata, dzial, stanowisko));

        } while (getline(file, linia));
        file.close();
    } else {
        cout << "Blad bazy danych!" << endl;
        exit(2);
    }
};
void MainMenu::ShowRecords(){
    cout << "ID\tImie\t\tNazwisko\tDzial\tStanowisko\tPensja\t" << endl;
    for (int j = 0; j < pracownicy.size(); j++) {
        pracownicy[j].showData();
    }
};
void MainMenu::EditRecord(){
    char znak;
    cout << "Ponaj numer rekordu ktory chcesz edytowac:" << endl;
    kod = MainMenu::Wybierz();
    cout << kod;
    int j;
    for(j=0;j<pracownicy.size();j++){
       if (pracownicy[j].getKod()==kod)
           break;
    }
    if(j==pracownicy.size())
        cout << "Nie znaleziono uzytkownika"<<endl;
    else {
        cout << "Wybrano:" << endl;
        pracownicy[j].showData();
        cout << endl << "Co chcesz edytować ? [I-Imie N-Nazwisko D-Dzial S-Stanowisko W-wyplata]";
        cin >> linia;
        znak = linia[0];
        if (znak != 'i' && znak != 'I' && znak != 'N' && znak != 'n' && znak != 'w' && znak != 'W' &&
            znak != 'd' && znak != 'D' && znak != 's' && znak != 'S')
            cout << "Nie znaleziono parametru !!!" << endl;

        if (znak == 'I' || znak == 'i') {
            cout << "Podaj wartosc parametru imie:" << endl;
            cin >> imie;
            pracownicy[j].setImie(imie);
            cout << "Wartosc zmieniona:" << endl;
            pracownicy[j].showData();
        }
        if (znak == 'N' || znak == 'n') {
            cout << "Podaj wartosc parametru nazwisko:" << endl;
            cin >> nazwisko;
            pracownicy[j].setNazwisko(nazwisko);
            cout << "Wartosc zmieniona:" << endl;
            pracownicy[j].showData();
        }
        if (znak == 'W' || znak == 'w') {
            cout << "Podaj wartosc parametru wyplata:" << endl;
            cin >> wyplata;
            pracownicy[j].setWyplata(wyplata);
            cout << "Wartosc zmieniona:" << endl;
            pracownicy[j].showData();
        }
        if (znak == 'D' || znak == 'd') {
            cout << "Podaj wartosc parametru dzial:" << endl;
            cin >> dzial;
            pracownicy[j].setDzial(dzial);
            cout << "Wartosc zmieniona:" << endl;
            pracownicy[j].showData();
        }
        if (znak == 'S' || znak == 's') {
            cout << "Podaj wartosc parametru stanowisko:" << endl;
            cin >> stanowisko;
            pracownicy[j].setStanowisko(stanowisko);
            cout << "Wartosc zmieniona:" << endl;
            pracownicy[j].showData();
        }
    }
}
void MainMenu::FindRecord(){
    char znak;
    cout << "Podaj kryterium po ktorym chcesz szukac[I-Imie N-Nazwisko W-Wyplata D-Dzial S-Stanowisko]:"<< endl;
    cin >> linia;
    znak = linia[0];
    if(znak != 'i'&& znak!='I'&&znak!='N'&&znak!='n'&&znak!='w'&&znak!='W'&&znak!='d'&&znak!='D'&&znak!='s'&&znak!='S')
        cout << "Nie znaleziono parametru !!!" <<endl;
    else
        cout << "Podaj wartosc szukana:" << endl;
    if (znak == 'I' || znak == 'i') {
        cin >> imie;
        for (int j = 0; j < pracownicy.size(); j++) {
            if (pracownicy[j].getImie() == imie)
                pracownicy[j].showData();
        }
    }
    if (znak == 'N' || znak == 'n') {
        cin >> nazwisko;
        for (int j = 0; j < pracownicy.size(); j++) {
            if (pracownicy[j].getNazwisko() == nazwisko)
                pracownicy[j].showData();
        }
    }
    if (znak == 'D' || znak == 'd') {
        cin >> dzial;
        for (int j = 0; j < pracownicy.size(); j++) {
            if (pracownicy[j].getDzial() == dzial)
                pracownicy[j].showData();
        }
    }
    if (znak == 'S' || znak == 's') {
        cin >> stanowisko;
        for (int j = 0; j < pracownicy.size(); j++) {
            if (pracownicy[j].getStanowisko() == stanowisko)
                pracownicy[j].showData();
        }
    }
}
void MainMenu::AddRecord(){
    cout << "Podaj imie:"<<endl;
    cin >> imie;
    cout << "Podaj Nazwisko"<<endl;
    cin >> nazwisko;
    cout << "Podaj Pensje:" <<endl;
    cin >> wyplata;
    cout << "Podaj Dział" << endl;
    cin >> dzial;
    cout << "Podaj Stanowisko" <<endl;
    cin >> stanowisko;
    kod = pracownicy[pracownicy.size()-1].getKod()+1;
    pracownicy.push_back(Pracownik(imie, nazwisko, kod, wyplata, dzial, stanowisko));
    for(int j=0;j<pracownicy.size()-1;j++){
        if(pracownicy.back() == pracownicy[j]){
            cout << "Kod nie jest Uniklany !!!"<<endl;
        }
    }
}
void MainMenu::DeleteRecord(){
    cout << "Podaj Id rekordu do usuniecia" <<endl;
    cin >> kod;
    int i=0;
    for(int j=0;j<pracownicy.size();j++){
        if(pracownicy[j].getKod()==kod){
            pracownicy.erase(pracownicy.begin()+i);
            break;
        }
        i++;
    }
    if(i==pracownicy.size())
        cout << "Nie znalezionio rekordu"<<endl;

}
void MainMenu::CountD(){
        cout << "Podaj Nazwe Działu:" << endl;
        cin >> dzial;
        int i = 0;
        for (int j = 0; j < pracownicy.size(); j++) {
            if (pracownicy[j].getDzial() == dzial) {
                i++;
            }
        }
        cout << "Ilosc pracownikow w dziale " << dzial << " wynosi:" << i;
        if(i==0) {
            cout << "Dzial prawdopodobnie nie istnieje" << endl;
        }
};
void MainMenu::Costs(){
    float koszty=0.0;
    for(int j=0;j<pracownicy.size();j++) {
        koszty +=  pracownicy[j].getWyplata();
    }
    cout << "Koszty miesieczne wynosza:"<<koszty<< "zl" <<endl;
}
void MainMenu::Export(string nazwa_pliku) {
    file.open(nazwa_pliku, fstream::out);
    if (file.is_open()) {
        for (int j = 0; j < pracownicy.size(); j++) {
            file << pracownicy[j].getImie() << ",";
            file << pracownicy[j].getNazwisko() << ",";
            file << pracownicy[j].getKod() << ",";
            file << pracownicy[j].getWyplata() << ",";
            file << pracownicy[j].getDzial() << ",";
            file << pracownicy[j].getStanowisko() << ",";
            if (j != pracownicy.size() - 1)
                file << "\n";
        }
        file.close();
        cout << "Zapisano Baze"<<endl;
    }
    else
        cout << "Blad zapisu do bazy danych !!!" << endl;
}
void MainMenu::Exit(){
char znak;
   bool prawda = true;
        cout << "Chesz zapisac baze danych przed opyszczenie programu? [y-yes,kazdy inny znak sprawi ze baza nie zostanie zapisana]" << endl;
        cin >> linia ;
        znak = linia[0];
        if (znak != 'y')
            prawda = false;
    if (prawda) {
        MainMenu::Export("dane.txt");
    }
}
MainMenu::~MainMenu(){
    cout << "destruktor" <<endl;
}
void Osoba::ShowData(){
    cout << getImie() << " "<< getNazwisko()<<endl;
}
void MainMenu::FindMax() {
    Pracownik A = pracownicy.front();
    for (int j = 1; j < pracownicy.size(); j++) {
        A = max(A,pracownicy[j]);
        }
    Osoba B = A;
    B.ShowData();
    }

bool Pracownik ::operator ==(const Pracownik &p){
    if(this->kod == p.kod)
        return true;
    else
        return false;
}
bool Pracownik:: operator >(const Pracownik &p){
    if(this->wyplata> p.wyplata)
        return true;
    else
        return false;
}
Pracownik::~Pracownik(){
}
Osoba::~Osoba(){
}
Pracownik::Pracownik(): Osoba("Jan","Kowalski")
,kod(0)
,wyplata(2137.15)
,dzial("Brak")
,stanowisko("Brak"){};
Pracownik::Pracownik(string imie, string nazwisko, int kod, float wyplata, const string &dzial, const string &stanowisko) :Osoba(imie,nazwisko),
                                                                                                kod(kod),
                                                                                              wyplata(wyplata),
                                                                                              dzial(dzial),
                                                                                              stanowisko(stanowisko) {};