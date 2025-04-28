#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

const int NUM_SUPERHEROES = 10;
const int NUM_YEARSUNIVERSES = 6;


string superheroNames[NUM_SUPERHEROES];
string superheroPowers[NUM_SUPERHEROES];
string superheroWeaknesses[NUM_SUPERHEROES];
string superheroYears[NUM_SUPERHEROES];
string superheroUniverses[NUM_SUPERHEROES];
int superheroRankings[NUM_SUPERHEROES];

string superheroData[NUM_SUPERHEROES][NUM_YEARSUNIVERSES];


int searchByName(const string& searchName) {                 //Task 1. Search the superhero's by name
string lowerSearchName= searchName;
transform(lowerSearchName.begin(), lowerSearchName.end(), lowerSearchName.begin(), ::tolower);

for (int i = 0; i < NUM_SUPERHEROES; i++) {
    string lowerName= superheroNames[i];
    transform(lowerName.begin(), lowerName.end(), lowerName.begin(), ::tolower);
    if (lowerName == lowerSearchName) {
    return i;
    }
}
    return -1;
}


void searchBySuperpower(const string& searchPower) {         //Task 2. Search the superhero's by thier superpowers
bool found= false;
    for (int i = 0; i < NUM_SUPERHEROES; i++) {
    if (superheroPowers[i].find(searchPower) != string::npos) {
cout<< superheroNames[i]<< " | " <<superheroPowers[i]<< " | " <<superheroWeaknesses[i]<< " | " <<superheroYears[i]<< " | " <<superheroUniverses[i]<< " | " <<superheroRankings[i]<<endl;
    found = true;
    }
}
    if (!found) {
cout<< "Error"<<endl;
    }
}


void sortAlphabetically() {                                //Task 3. Sort the superhero's alphabetically
    for (int i = 0; i < NUM_SUPERHEROES - 1; i++) {
    for (int j = 0; j < NUM_SUPERHEROES - 1 - i; j++) {
    if (superheroNames[j] > superheroNames[j + 1]) {

    swap(superheroNames[j], superheroNames[j + 1]);
    swap(superheroPowers[j], superheroPowers[j + 1]);
    swap(superheroWeaknesses[j], superheroWeaknesses[j + 1]);
    swap(superheroYears[j], superheroYears[j + 1]);
    swap(superheroUniverses[j], superheroUniverses[j + 1]);
    swap(superheroRankings[j], superheroRankings[j + 1]);
    }
    }
}
cout<< "Superheroes are sorted alphabetically"<<endl;
}


void sortByPopularity() {                                   //Task 4/Bonus Feauture. Ranking for superhero's popularity
for (int i = 0; i < NUM_SUPERHEROES - 1; i++) {
for (int j = 0; j < NUM_SUPERHEROES - 1 - i; j++) {
    if (superheroRankings[j] > superheroRankings[j + 1]) {
    swap(superheroRankings[j], superheroRankings[j + 1]);
    swap(superheroNames[j], superheroNames[j + 1]);
    swap(superheroPowers[j], superheroPowers[j + 1]);
    swap(superheroWeaknesses[j], superheroWeaknesses[j + 1]);
    swap(superheroYears[j], superheroYears[j + 1]);
    swap(superheroUniverses[j], superheroUniverses[j + 1]);
    }
    }
}
cout<< "Superheroes are sorted in their ranks of popularity"<<endl;
}


void displaySuperheroes(bool uppercase) {                     //Task 5. Display all superheroes
    for (int i = 0; i < NUM_SUPERHEROES; i++) {
    string name = superheroNames[i];
    if (uppercase) {
    transform(name.begin(), name.end(), name.begin(), ::toupper);
} else {
    transform(name.begin(), name.end(), name.begin(), ::tolower);
}
cout<< name<< " | " <<superheroPowers[i]<< " | " <<superheroWeaknesses[i]<< " | " <<superheroYears[i]<< " | " <<superheroUniverses[i]<< " | " <<superheroRankings[i]<<endl;
    }
}


int main() {

superheroNames[0]= "VanishMan"; superheroPowers[0] = "Time Travel"; superheroWeaknesses[0] = "Dizziness"; superheroYears[0] = "1368"; superheroUniverses[0] = "Marvel"; superheroRankings[0] = 4;
superheroNames[1]= "Whiplash"; superheroPowers[1] = "Super Speed"; superheroWeaknesses[1] = "Metabolism"; superheroYears[1] = "2100"; superheroUniverses[1] = "DC"; superheroRankings[1] = 3;
superheroNames[2]= "Web"; superheroPowers[2] = "Spidey Senses"; superheroWeaknesses[2] = "Overthinking"; superheroYears[2] = "1980"; superheroUniverses[2] = "Marvel"; superheroRankings[2] = 1;
superheroNames[3]= "Aquabeast"; superheroPowers[3] = "Water Control"; superheroWeaknesses[3] = "Fire"; superheroYears[3] = "2000"; superheroUniverses[3] = "Marvel"; superheroRankings[3] = 10;
superheroNames[4]= "MagicMind"; superheroPowers[4] = "Mind Control"; superheroWeaknesses[4] = "Determined"; superheroYears[4] = "2024"; superheroUniverses[4] = "DC"; superheroRankings[4] = 5;
superheroNames[5]= "Trickster"; superheroPowers[5] = "Teleportation"; superheroWeaknesses[5] = "Hunger"; superheroYears[5] = "1973"; superheroUniverses[5] = "DC"; superheroRankings[5] = 9;
superheroNames[6]= "Echo"; superheroPowers[6] = "Waterbreathing"; superheroWeaknesses[6] = "Dust"; superheroYears[6] = "1945"; superheroUniverses[6] = "DC"; superheroRankings[6] = 6;
superheroNames[7]= "Flynn"; superheroPowers[7] = "Shape Shifting"; superheroWeaknesses[7] = "Anger"; superheroYears[7] = "1928"; superheroUniverses[7] = "Marvel"; superheroRankings[7] = 2;
superheroNames[8]= "Fist"; superheroPowers[8] = "Invisibility"; superheroWeaknesses[8] = "Chickens"; superheroYears[8] = "2005"; superheroUniverses[8] = "Marvel"; superheroRankings[8] = 7;
superheroNames[9]= "Storm"; superheroPowers[9] = "Strength"; superheroWeaknesses[9] = "High Pitch Frequency"; superheroYears[9] = "1718"; superheroUniverses[9] = "DC"; superheroRankings[9] = 8;

for (int i = 0; i < NUM_SUPERHEROES; i++) {

superheroData[i][0]= superheroNames[i];
superheroData[i][1]= superheroPowers[i];
superheroData[i][2]= superheroWeaknesses[i];
superheroData[i][3]= superheroYears[i];
superheroData[i][4]= superheroUniverses[i];
superheroData[i][5]= to_string(superheroRankings[i]);
}


int option;

do {
cout<< "Superhero Database Menu"<<endl;
cout<< "1. Search superhero's by their name"<<endl;
cout<< "2. Find superheroes by their superpower"<<endl;
cout<< "3. Sort superheroes alphabetically"<<endl;
cout<< "4. Display all superheroes"<<endl;
cout<< "5. Display superhero's based on their rankings"<<endl;
cout<< "6. Exit"<<endl;
cout<< "Choose one";

cin>> option;
cin.ignore();



if (option == 1) {

string searchName;
cout<< "Enter superhero name";
cin.ignore();
getline(cin, searchName);

int index = searchByName(searchName);
    if (index != -1) {
cout<< "Found It" <<superheroNames[index]<< " | " <<superheroPowers[index]<< " | " <<superheroWeaknesses[index]<< " | " <<superheroYears[index]<< " | " <<superheroUniverses[index]<< " | " <<superheroRankings[index]<<endl;
    } else {
cout<< "Error"<<endl;
}



} else if (option == 2) {

string searchPower;
cout<< "Enter superpower";
cin.ignore();
getline(cin, searchPower);
searchBySuperpower(searchPower);


} else if (option == 3) {
    sortAlphabetically();


} else if (option == 4) {
char caseOption;
cout<< "Display superheroes in (Y) Uppercase or (y) Lowercase? ";
cin>> caseOption;
bool uppercase = (caseOption == 'Y' || caseOption == 'y');
displaySuperheroes(uppercase);



} else if (option == 5) {
    sortByPopularity();


} else if (option != 6) {
cout<< "Error. Try again";
}

} while (option != 6);
cout<< "Goodbye";


return 0;
}
