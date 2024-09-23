#include<iostream>
#include<vector>
#include<string>    
using namespace std;

// colocar o codigo em funcoes 
// implementar funcionalidade de deixar qualquer texto upper case
// fazer o caminho reverso e implemntar a decodificacao da cifra 
// fazer menu para o usuario escolher acao


int main(){
    const int lin = 26;
    const int col = 26;
    char matrix[lin][col];
    vector<char> chars({'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'});


    //preenche matriz
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            matrix[i][j] = chars[(i + j) % chars.size()];
        }        
    }
    //imprime matriz
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << " ";
        }        
        cout << endl;
    }

    //inputs
    string t;
    cout << "digite o que deseja codificar: " << endl;
    cin >> t;

    string k;
    cout << "digite a sua chave: *deve conter o mesmo numero de caracteres que a sua palavra/frase" << endl;
    cin >> k;

    vector<char>key({});
    vector<char>text({});

    //separa string 
    for(int i = 0; i < k.length(); i++){
          text.push_back(t[i]);
          key.push_back(k[i]);
    }

    //encode
    vector<char>encode({});

    int a,b;

    for(int i = 0; i < text.size(); i++){
        for(int j = 0; j < chars.size(); j++){
            if(matrix[0][j] == text[i]){
                a = j;
                break;
            }
        }
        for(int j = 0; j < chars.size(); j++){
             if(matrix[j][0] == key[i]){
                b = j;
                break;
            }
        }
        encode.push_back(matrix[b][a]);
    } 

    for(int i = 0; i < encode.size(); i++){
        cout << encode[i];
    }

}


