#include<iostream>
using namespace std;

void pattern1(int num1){
    int i = 1; // i for row
    while (i <= num1){
        // j for column
        int j = 1 ; 
        while( j <= num1){
            cout << "*" << " ";
            j++; 
        }
        cout << endl ; // for newline
        i++;
    }
}

void pattern2(int num2){
    int i = 1;
    while (i <= num2){
        int j = 1; // or j = num2
        while( j <= num2 ){ // or (j != 0)
            cout << i << " ";
            j++; // or j--
        }
        cout << endl;
        i++; 
    }
}

void pattern3(int num3){
    int i = 1;
    while(i <= num3){
        int j = i;
        while(j <= num3){
            cout << i << " ";
            j++;
        }
        cout << endl ;
        i++;
    }
}

void pattern4(int num4){
    int i = 1;
    for(i ; i <= num4 ; i++){
        int j = 1;
        for (j ; j <= num4 ; j++){
            cout << j << " ";
        }
        cout << endl ;
    } 
}
void pattern5 (int num5){
    int i = 1 ; 
    while(i <= num5){
        int j = 1;
        while(j <= num5 ){
            cout << num5-j+1 << " "; // if j=1, num5-(j+1) = 3 due to operator precedence 
            j++; 
        }
        cout << endl;
        i++;
    }
}

void pattern6(int num6){
    int i = 1;
    int count  = 1;
    while(i <= num6){
        int j = 1;
        while( j <= num6){
            cout << count << " ";
            count ++ ;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern7(int num7){
    int i = 1;
    
    while(i <= num7){
        int j = 1;
        int temp = num7;
        while(temp != i){
            cout << "-";
            temp--;
        }
        while(j <= i){
            cout << "*"<<" ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern8(int num8){
    int row = 1;
    while (row <= num8){
        int col = 1;
        int temp = row;
        while (temp != num8){ //loop for spacing
            cout << " ";
            temp ++;
        }
        while(col <= row){
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern9(int num9){
    int row = 1;
    int count = 1;

    while(row <= num9){
        int col = 1;
        while(col <= row && count <= num9){
            cout << count;
            col++;
            count++;

        }
        cout << endl;
        row++;
    }
}

void pattern10(int num10){
    int row = 1;
    while(row <= num10){
        int col = 0;
        // int temp = row;
        while(col < row){
            cout << row + col << " ";
            col++;
            // temp++;
        }
        cout << endl ;
        row++;
    }
}

void pattern11(int num11){
    int row = 1;
    while(row <= num11){
        int col = 0 ;
        while (col < row){
            cout << row - col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern12(int num12){
    // char ch = 'A';
    int row = 1;
    while(row <= num12){
        int col = 1;
        while(col <= num12){
            char ch = 'A' + row - 1 ;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
void pattern13(int num13){
    int row = 1;
    while(row <= num13){
        int col = 1;
        while(col <= num13){
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col++ ;
        }
        cout << endl ;
        row++ ;
    }
}

void pattern14(int num14){
    int row = 1;
    char ch = 'A';
    while(row <= num14){
        int col = 1;
        while (col <= num14){
            cout << ch << " ";
            ch = ch + 1;
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern15(int num15){
    int row = 1;
    // char ch = 'A';
    while(row <= num15){
        int col = 1;
        // while(col <= num15){
        //     char ch = 'A' + row + col -2;
        //     cout << ch << " ";
        //     col++ ;
        // }
        char ch = 'A' + row - 1;
        while(col <= num15){
            cout << ch << " ";
            ch = ch + 1;
            col++ ;
        }
        cout << endl ;
        row ++;
    }
}

void pattern16(int num16){
    int row = 1;
    while(row <= num16){
        int col = 1;
        while(col <= row){
            char ch = 'A' + row + col - 2 ;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern17(int num17){
    int row = 1;
    while(row <= num17){
        int col = 1 ;
        while(col <= row){
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl ;
        row++;
    }
}

void pattern18(int num18){
    int row = 1;
    char ch = 'A';
    while(row <= num18){
        int col = 1;
        while(col <= row){
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl ;
        row++;
    }
}

void pattern19(int num19){
    int row = 1;
    while(row <= num19){
        int col = 1;
        // while(col <= row){
        //     char ch = 'A' + num19 -row + col -1;
        //     cout << ch << " ";
        //     col++;
        // }
        char ch = 'A' + num19 - row; // another method simple one
        while(col <=row ){
            cout << ch << " ";
            ch = ch + 1;
            col++;
        }
        cout << endl ;
        row++;
    }
}

void pattern20(int num20){
    int row = 1;
    while(row <= num20){
        int col = 1;
        int temp = row;
        while(temp != num20){
            cout << " " ;
            temp++;
        }
        while(col <= row){
            cout << "*" <<" ";
            col++;
        }
        cout << endl;
        row++; 
    }
}


int main(){
    int num;
    cin >> num;
    // pattern1 (num);
    // pattern2(num);
    // pattern3(num);
    // pattern4(num);
    // pattern5(num);
    // pattern6(num);
    // pattern7(num);
    // pattern8(num);
    // pattern9(num); // check pattern 9
    // pattern10(num);
    // pattern11(num);
    // pattern12(num);
    // pattern13(num);
    // pattern14(num);
    // pattern15(num);
    // pattern16(num);
    // pattern17(num);
    pattern18(num);
    // pattern19(num);
    // pattern20(num);
}