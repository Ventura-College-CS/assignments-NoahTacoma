#include <iostream>
#include <queue>
using namespace std;
   

    int stack_pop(vector<int>* stack){
		int a = stack->back();
		stack->pop_back();
		return a;
    }

int postfix_eval(string input){
    vector<int> stack;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '*'){
            int v1 = stack_pop(&stack);
            int v2 = stack_pop(&stack);
            stack.push_back(v1*v2);
        }
        else if(input[i] == '/'){
            int v1 = stack_pop(&stack);
            int v2 = stack_pop(&stack);
            stack.push_back(v2/v1);
        }
        else if(input[i] == '+'){
            int v1 = stack_pop(&stack);
            int v2 = stack_pop(&stack);
            stack.push_back(v1+v2);
        }
        else if(input[i] == '-'){
            int v1 = stack_pop(&stack);
            int v2 = stack_pop(&stack);
            stack.push_back(v2-v1);
        }
        else{
            stack.push_back(input[i]-'0');
        }
    }
    return(stack_pop(&stack));
}



int main(){
    string input;
    cout << "Input postfix expression :";
    cin >> input;
    cout << postfix_eval(input);



}