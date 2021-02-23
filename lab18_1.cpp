#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
	double xx1,xx2,yy1,yy2;
	xx1 = max(a.x,b.x);
	yy1 = min(b.y,a.y);
	xx2 = min(a.x+a.w,b.x+b.w);
	yy2 = max(b.y-b.h,a.y-a.h);
	double over = (xx2-xx1)*(yy1-yy2);
	if(over>0) return over;
	else return 0;
}
