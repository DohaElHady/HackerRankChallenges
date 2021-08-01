#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double area(triangle t){
    int x,y,z;
    x=t.a;y=t.b;z=t.c;
    float p=(x+y+z)/2.0;
    double a=sqrt(p*(p-x)*(p-y)*(p-z));
    return a;
}

void sort_by_area(triangle* tr, int n) {
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (area(tr[j]) > area(tr[j+1]))
            {
            triangle holder = tr[j];
            tr[j] = tr[j+1];
            tr[j+1] = holder;
            }
        }
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
