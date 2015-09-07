#include <stdio.h>

int main(){
	int i, val;

	scanf("%d", &val);
	for(i=0; i<3; i++){
		val += i;
	}
	printf("%d\n", val);
	return 0;
}

