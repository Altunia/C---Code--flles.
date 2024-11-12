#include <iostream>
using namespace std;
int main(){
cout<<"Escape sequence:\n"; cout<<"These are special character or sequence of character and it is used inside the literal string to represent some special character.\n"; 
cout<<"They are prefixed with a backslash \ and are used to represent characters such as new line,display of quatatin markss,etc.It cannot be represented normally." <<endl;
// \n in C++ is used to create new line like
cout<<"My name is Abid Ullah\n";cout<<"My father name is Murad khan" <<endl;
// \t is used insert for spacing
cout<<"Name\t\trollno\t\tpostion\n";
cout<<"Abid\t\t1030\t\t1\n";
cout<<"Shayan\t\t1020\t\t2\n";
cout<<"Shakib\t\t1060\t\t\3n\n";
// \0 indicate null character
cout<<"\0\n";
// \\insert backslash character and \' printing single quatation and \"printing double quatation in this section
cout<<"This is backslash \\\\character\n";
cout<<"It\'s me Abid Ullah\n";
cout<<"\"I like to play cricket.\""; 
return 0;
}
