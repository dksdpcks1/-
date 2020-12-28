#include <stdio.h>
main(){
	int c= 1;
	switch(3){
		case 1: c+=1;
		case 2: c++;
		case 3: c=0; //switch가 3부터이니 3부터 출력 c=0
		case 4: c+=3;//c=3
		case 5: c-=10;//c=-7
		default: c--;//c-8
	}
	printf("%d",c);//c=-8
	
}
