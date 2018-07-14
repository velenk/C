#include <stdio.h>

struct point {
	int x;
	int y;
};

void output(struct point p);
void print(struct point *p);
struct point* getstruct(struct point *p);

int main(int argc, char const* argv[])
{
	struct point y = {0, 0};
	output(y);
	output(*getstruct(&y));
	*getstruct(&y) = (struct point){1, 2};
	print(getstruct(&y));
	
	return 0;
}

void output(struct point p)
{
	printf("%d %d\n",p.x, p.y);
}

struct point* getstruct(struct point *p)
{
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	
	return p;
}

void print(struct point *p)
{
	printf("%d %d\n",p->x ,p->y );
}

