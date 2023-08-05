#include <iostream>

using namespace std;

int main(void) {
    int width; 
    int height;

    cin >> width >> height;
    
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++) cout << '*';        
        cout << endl;
    }
    
    return 0;
}