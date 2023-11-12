#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
	int a, b, c, d;
	printf("nhap vao phuong trinh ax^2 + bx + c = 0");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0)
				printf("phuong trinh co vo so nghiem");
			else
				printf("phuong trinh vo nghiem");
		}
		else
		printf("pt có nghiem duy nhat la %d",-c/b);	
	}
	else{
		d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!!!");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %d",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %d,%d",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	}
}
