#include<stdio.h>
// Thu?t toán s?p x?p
// Input: 4 21 -5 6 
// Output: -5 4 6 21 (tang d?n)
// 
void sapXep(){
    int arrNumber[] = {4,21,-5,6};
    //in ra m?ng chua s?p x?p
    printf("Mang chua sap xep");
    for(int i=0; i< 4; i++){
        printf("%d \n", arrNumber[i]);
    }
    //s?p x?p
    for (int i = 0; i < 4 -1; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if(arrNumber[i] > arrNumber[j]){
                int temp = arrNumber[i];
                arrNumber[i] = arrNumber[j];
                arrNumber[j] = temp;
            }
        }
        
    }
    //inra m?ng dã s?p x?p
    printf("Mang dã s?p x?p");
    for(int i=0; i< 4; i++){
        printf("%d \n", arrNumber[i]);
    }
};
//Tìm so 21 có trong mang hay khong? neu khong thì in ra là khong tim thay
//void timSoCanTim(int arrNumber[], int soCanTim){
//	for (int i = 0; i < 7; i++) {
//            if(arrNumber[i]==soCanTim){
//                 printf("so can tim %d co vi tri la: %d", arrNumber[i],i+1);
//                return;
//            }
//        }
//	printf("Khong tim thay so");
//	}
	
int timSoCanTim(int arrNumber[], int soCanTim){
	for (int i = 0; i < 7; i++) {
            if(arrNumber[i] == soCanTim){
                return i;
            }
        }
	
	}
	
int main(){
    //sapXep();
    int arrNumber[] = {3,2,7,21,-6,-8,0};
//    timSoCanTim(arrNumber, 21);
	if(timSoCanTim(arrNumber, 21) == -1){
        printf("Không tìm th?y s? c?n tìm");
    }else{
        printf("S? c?n tìm ? v? tr?: %d", timSoCanTim(arrNumber, 21));
    }
    return 0;
}