#include <iostream>
#include <vector>

using namespace std; 
int main(){
    vector <char> V; 
    int n1, n2, op = 0;
    cout << "MENÚ" <<endl;
    cout << "1.- Suma" <<endl;
    cout << "2.- Resta" <<endl;
    cout << "3.- Multiplicación" <<endl;
    cout << "4.- División" <<endl;
    cout << "0.- Salir" <<endl;
    cin >> op;
    switch(op)
    {
        case 1:
        {
            cin >> n1;
            cout << "+\n";
            cin >> n2;

            for(int i = 0; i > n1; i ++)
            {
                V.push_back('X');
            }
            V.push_back('+');
            for(int i = 0; i > n2; i ++)
            {
                V.push_back('X');
            }
        }
        break;
        case 2:{
            break;
        }
        case 3:{
            break; 
        }
        case 4:{
            break;
        }
        case 0:{
            break;
        }
        default:{
            
        }
    }
    return 0;
    
}