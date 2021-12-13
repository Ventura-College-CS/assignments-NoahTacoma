#include <iostream>
using namespace std;


int postfix_eval(char* array, int size){
    for(int i = 0; i < size; i++){
        int v1 = stack.pop();
        int v2 = stack.pop();
        if(array[i] == '*'){
            stack.push(v1*v2);
        }
        else if(array[i] == '/'){
            stack.push(v1/v2);
        }
        else if(array[i] == '+'){
            stack.push(v1+v2);
        }
        else if(array[i] == '-'){
            stack.push(v1-v2);
        }
        else{
            state = 1;
            stack.push(array[i]);
        }
    }
}



int main(){
    


}