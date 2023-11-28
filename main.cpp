#include <boost/asio.hpp>
#include <iostream>
#include <string>
#include "name.h"
#include "name_gen.h"

using namespace std;

int main(){
    gen initials;
    const string get_name=initials.name();
    cout<<get_name<<endl;

    string her="Emmanuella";
    if(her.find("ella") != string::npos){
        cout<<"found Ella in "<<her<<endl;
    };

    return 0;
}