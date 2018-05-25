#include<iostream>
#include<map>

int main()
{
std::map < std::string , int > matrikelnummern ;
// Hinzufuegen von vielen Studenten
matrikelnummern ["Max Mustermann"] = 12345;
matrikelnummern ["Erika Mustermann"] = 23523;
// ...
//exmatrikulation (matrikelnummer ["Fred Fuchs"]);  //matriekelnummer 0
//auto& it = matrikelnummern.find("Erika Mustermann");
//matrikelnummern.erase(it);

//matrikelnummern.erase("Fred Fuchs");  
    return 0;
}