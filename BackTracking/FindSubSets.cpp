#include<iostream>
#include<string>
using namespace std;
void printString(string str){

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
}
void printAllSubSet(string str ,string substr){
        if(str.length()== 0) {
            cout<<substr<<" "<<endl;
            return ;
        }

        //decision based
    char ch = str[0];
    // yes
    printAllSubSet(str.substr(1, str.length()-1) , substr+ch);
    printAllSubSet(str.substr(1, str.length()-1) , substr);







    
    

}
int main(){

    string str = "abc";
    string substr = "";
    printAllSubSet(str , substr);




    return 0;
}