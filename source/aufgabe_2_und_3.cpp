#include<list>
#include<vector>
#include<set>
#include<map>
#include <iterator>
#include <algorithm>
#include<iostream>
using namespace std;

int main(){

    list<unsigned int> numbers(100);

    for( auto& i : numbers)
    {
        i = rand() % 100 +1;
       // cout << i << ", ";
    }
    set<unsigned int> set_numbers;   //numbers abe 1 einmal
    for(auto& i : numbers)
    {
      set_numbers.insert(i);
    }
    set<unsigned int> leftover_numbers;  //alle zahlen von 1 -100
    for(int x=0;x<=100;x++)
    {
      leftover_numbers.insert(x);
    }

    for(auto& element : set_numbers)                          //loesche alle Zahlen die in leftover aber befindet sich in set_numbers
    {
      leftover_numbers.erase(leftover_numbers.find(element));
    }
    int count=0;
    for(auto h = begin(leftover_numbers); h != end(leftover_numbers);h++)  //die zahlen die nicht in numbers sich befinden
    {
        cout<<*h<<" ,";
        count ++;                                                          //algemein
    }
    cout << "\n" ;
    cout<< set_numbers.size() <<"  unterschiedliche Zahlen" << "\n" ;
//3.3
    map<unsigned int,unsigned int> frequency;
    for(auto& i : set_numbers)
    {
      frequency[i] = 0;
    }  
    for(auto& i : numbers)
    {
        frequency[i] +=1;
    }
    cout << "die Haeufigkeit : " << "\n" ;
    for(auto& i : frequency)
    {
        cout<<i.first << " : " << i.second <<"\n";
    }

//3.10

    std::vector<int> v_numbers(std::cbegin(set_numbers), std::cend(set_numbers));
    std::copy(std::cbegin(v_numbers),std::cend(v_numbers) ,
    std::ostream_iterator<int>(std::cout," , "));

    return 0 ;
    }
    



