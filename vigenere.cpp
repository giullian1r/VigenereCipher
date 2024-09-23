// check :: colocar o codigo em funcoes 
// check :: implementar funcionalidade de deixar texto uppercase :
//          fazer o caminho reverso e implemntar a decodificacao da cifra 
//          fazer menu para o usuario escolher acao

#include<iostream>
#include<vector>
#include<string>    
using namespace std;

//global consts  
const int col = 26;
const int lin = 26;

//init functions
void matrix_fill(char (matrix)[lin][col], vector<char> chars){
 for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            matrix[i][j] = chars[(i + j) % chars.size()];
        }        
    }
}

//print functions
void matrix_print(char (matrix)[lin][col]){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            cout << matrix[i][j] << "  ";
        }        
        cout << endl;
    }
    cout << endl;
}

void vector_print(vector<char> vec){
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i];
    }
    cout << endl;
}

//string manipulates
void toUpperString(string& text){
     for (char& c : text) {
        c = toupper(c);
    }
}

void string_separate(vector<char>& text, string& t, vector<char>& key, string& k){
    for(int i = 0; i < k.length(); i++){
          text.push_back(t[i]);
          key.push_back(k[i]);
    }
}

//encode functions
char encode_text(char (&matrix)[lin][col], int pos, vector<char>& text, vector<char>& key, vector<char>& chars){
    int colum,line;
    for(int j = 0; j < col; j++){
        if(matrix[0][j] == text[pos]){
            colum = j;
            break;
        }
    }
    for(int j = 0; j < chars.size(); j++){
        if(matrix[j][0] == key[pos]){
            line = j;
            break;
        }
    }
    return matrix[line][colum];
}


int main(){
    char matrix[lin][col];
    vector<char> chars({'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'});

    
    //init 
    matrix_fill(matrix, chars);
    matrix_print(matrix);

    //inputs
    vector<char>key({});
    vector<char>text({});

    string t;
    cout << "digite o que deseja codificar: " << endl;
    cin >> t;
    toUpperString(t);

    string k;
    cout << "digite a sua chave: *deve conter o mesmo numero de caracteres que a sua palavra/frase" << endl;
    cin >> k;   
    toUpperString(k);           
    //end

    string_separate(text,t,key,k);

    //encode
    vector<char>encode({});
    int i = 0;

    while (i < text.size())
    {
        encode.push_back(encode_text(matrix, i, text, key, chars));
        i++;
    }
    
    vector_print(encode);
    //end
}


