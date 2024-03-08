#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

class example {
public:
    int x, y;
    const char* myArray2;
    example(const char* myArray2 = "😆", int x = 0, int y = 0) : myArray2(myArray2), x(x), y(y) {}
};

class Function {
private:
    vector<vector<example*>> gameObjects;

public:
    Function() {}
    ~Function() {
        for (auto& row : gameObjects) {
            for (example* obj : row) {
                delete obj;
            }
        }
    }

    void vector_placeholder(int cols, int rows) {
        gameObjects.resize(rows, vector<example*>(cols, nullptr));
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                gameObjects[i][j] = new example("😆", j, i);
            }
        }
    }

    void print(int max_size, int x_mid, int y_mid) {
        int size_xy = (max_size - 1) / 2;
        int x_start = max(x_mid - size_xy, 0);
        int x_end = min(x_mid + size_xy + 1, static_cast<int>(gameObjects.size()));
        int y_start = max(y_mid - size_xy, 0);
        int y_end = min(y_mid + size_xy + 1, static_cast<int>(gameObjects[0].size()));
        
        cout << " ";
        for (int i = x_start; i != x_end; ++i){
            if (i >=10)
            cout << " " << i;
            else if (i >=100){
                // if (i >=200)
                // {int temp=i; temp -= 200;}
                int temp=i; temp -= 100;
                if (temp>=10)
                cout << " "<< temp;
                else{cout << "  " << temp;}
                }
            else{cout <<  "  "<<i ;}
            }
            
        cout << endl;
        cout <<  " " << y_start;
        int next_line_y = y_start;
        for (int i = x_start; i < x_end; ++i) {
            
            for (int j = y_start; j < y_end; ++j) {
                // cout << gameObjects[i][j]->myArray2 << " X: " << gameObjects[i][j]->x << ", Y: " << gameObjects[i][j]->y << endl;
                
                cout << gameObjects[i][j]->myArray2 << " ";
            }
            if (i!=x_end-1)
            {next_line_y +=1;
            cout << endl;
            if (next_line_y >=10)
            cout << next_line_y;
            else if (next_line_y >=100)
            {int temp=next_line_y; temp -= 100;
            cout << temp;}
            else{cout <<  " " << next_line_y;}}
        }
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int rows = 220, cols = 220, max_size = 25, x_mid = 210, y_mid = 210;

    Function func;
    func.vector_placeholder(cols, rows);
    func.print(max_size, x_mid, y_mid);

    return 0;
}
