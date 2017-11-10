#include <stdio.h>
void e1() 
{
	int s, t;
	scanf("%d", &s);
	scanf("%d", &t);
	if (s > t) {
		printf("yes");
	} else {
		printf("no");
	}
}

void e3()
{
	int i;
	scanf("%d", &i);
	if (i%2 == 0) {
		printf("yes");
	} else {
		printf("no");
	}
}

void e4()
{
	int d[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d", &d[i]);
	}
	int n = sizeof(d) / sizeof(int);
	if (n == 10) {
		int max = d[0];
		for(int j = 0; j < 10; j++) {
			if (max < d[j]) 
				max = d[j];
		} 
		printf("max:%d", max);
	} else {
		printf("数组个数不对，目前有:%d 个", n);
	}
}

void e5()
{
	int d[100];
	while () {
	}	
} 

int main()
{
	//e1();
	//e3();
	e4();

}


