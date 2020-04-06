#include <iostream> 
#include <string>
#include <cstring>
#include <vector>
#include <cstring>

using namespace std;
bool checkScentence(char* input){
        vector<char*> words;
        char* tok;
        tok = strtok(input," ");
        while(!(tok == NULL)){
            words.push_back(tok);
            tok = strtok(input," ");
        }
        words.push_back("EOI");

        int index = 0;
        if(!(words[index] == "the") || !(words[index] == "The")){
            return false;
        }
        index++;
        if(index == words.size()){
                    return false;
                }

        while((words[index] != "cat") && (words[index] != "dog") ){
            if(words[index] != "smelly" && words[index] != "lazy"){
                return false;
            }else{
                index++;
                if(index == words.size()){
                    return false;
                }
            }
        }
        if(words[index] == "ate" || words[index] == "ran"){
            index++;
            if(index == words.size()){
                    return false;
            }
        }else{
            return false;
        }

        if(words[index] == "EOI"){
                return true;
        }else if(words[index + 1] == "slowly" || words[index + 1] == "noisely"){
                if(words[index] == "EOI"){
                return true;
                }
        }
    return true;
}




int main(){
    vector<char*> Tests;
    

    char test1[] = "the smelly cat ran slowly";
    Tests.push_back(test1);
    char test2[] = "the smelly cat ran slowly";
    Tests.push_back(test1);
    char test3[] = "the smelly cat ran slowly";
    Tests.push_back(test1);
    char test4[] = "the smelly cat ran slowly";
    Tests.push_back(test1);
    char test5[] = "the smelly cat ran slowly";
    Tests.push_back(test1);
    char test6[] = "the smelly cat ran slowly";
    Tests.push_back(test1);
    char test7[] = "the smelly cat ran slowly";
    Tests.push_back(test1);
    char test8[] = "the smelly cat ran slowly";
    Tests.push_back(test1);


    for(int i = 0; i < 8; i++){
        bool temp = checkScentence(Tests[i]);
        assert(temp);
    }


    

}