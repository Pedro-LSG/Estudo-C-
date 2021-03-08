#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
	cout << "10s para iniciar. Para parar aperte p.";
	Sleep(10000); 
	int cont = 100; 
	char tecla;
	while (true){			
		Sleep(1000);	
		SetCursorPos(cont, 0);
		cont = cont + 100;
		if (cont > 1000){
			cont = 100;
		}
		if(kbhit()){
    		tecla = getch();
    		if (tecla == 'p'){
    			break;
			}
    	}		
	}	
	return 0;
}
