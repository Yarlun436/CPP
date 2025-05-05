#include<conio.h>
#include <iostream> 
using namespace std; 
int main(){
int arrayNum[100];
	for (int i = 0; i <= 100; i++) {
    	arrayNum[i] = i;
	}
//int arrayNum[] = {2, 3, 4, 5, 6, 7, 11, 13, 17, 19, 23, 29, 31};
int length = sizeof(arrayNum) /sizeof(arrayNum[0]);
int num =0;
cout<<"Here we are"<<endl;
//cout<<"length: "<< length;
//cin>>num;

 for(int i=0; i<length; i++){
 	//cout<<arrayNum[i]<<endl;
 	num = arrayNum[i];
 	if(num!= 0 || num != 1){
	 
 	for(int a = 2; a <= num-1; a++){
		 if (num%a==0){ 			
			cout<<num<<"---"<<a<<endl;
		 }else{
		 	break; 	
		 }
	 }
	 cout<<"El numero es primo: "<<num<<endl;
}
 	/*if((num+1)%2==0 && num%num == 0 && num%1 == 0){
 		cout<<"El numero es primo: "<<num<<endl;
 	}*/
 }

getch();
return 0;
}

