#include <stdio.h>
int main(){
	int number;
	printf ("Nhap vao mot so nguyen");
	scanf ("%d",&number);
	if(number%5==0&&number%3==0){
		printf("So chia het cho 3 va 5");
	}else{
		printf("So khong chia het cho 3 va 5")
	}
	return 0;
}
