#include<stdio.h>
void Fun7_1(void){
	int fifty,twenty,ten;
	for(fifty=0;fifty<=2;fifty++){
		for(twenty=0;twenty<=5;twenty++){
			for(ten=0;ten<=10;ten++){
				if((fifty*50+twenty*20+ten*10)==100)
				printf("50Ԫ%d�� ,20Ԫ%d��, 10Ԫ%d��\n",fifty,twenty,ten);
			}
		}
	}
}
void Fun7_2(void){
	int a,b,c;
	for(a=1;a<=4;a++){
		for(b=1;b<=4;b++){
			for(c=1;c<=4;c++){
				if(a!=b&&b!=c&&c!=a)
				printf("%d ",a*100+b*10+c);
			}
		}
	}
}
void Fun7_3(void){
	int a,b,c,d,count=0;
	for(a=1;a<=9;a++){
		for(b=1;b<=8;b++){
			for(c=1;c<=7;c++){
				d=23-a-b-c;
				if(d<=6&&d>=1){
					count++;
					printf("��%d�ַַ�:    ��%d��   ��%d��   ��%d��   ��%d��\n",count,a,b,c,d);
				}
			}
		}
	}
}
void Fun7_4(void){
	int p,e,a,r,PEAR,ARA,PEA;
	for(p=1;p<=9;p++){
		for(e=0;e<=9;e++){
			for(a=1;a<=9;a++){
				for(r=0;r<=9;r++){
					PEAR=p*1000+e*100+a*10+r;
					ARA=a*100+r*10+a;
					PEA=p*100+e*10+a;
					if((PEAR-ARA)==PEA)
					printf(" p:%d,e:%d,a:%d,r:%d\n %d\n- %d\n------\n  %d",p,e,a,r,PEAR,ARA,PEA);
				}
			}
		}
	}
}
void Fun7_5(void){
	int chicks,rabbits;
	for(chicks=0;chicks<=35;chicks++){
		rabbits=35-chicks;
		if((chicks*2+rabbits*4)==94){		
				printf("��%dֻ����%dֻ",chicks,rabbits);
				break;
		}
	}
}
void Fun7_6(void){
	int goodman,X;
	for(goodman='A';goodman<='D';goodman++){
		X=(goodman!='A')+(goodman=='C')+(goodman=='D')+(goodman!='D');
		if(X==3)
		printf("�����µ�����%c",goodman);
	}
}
void Fun7_7(void){
	int age;
	for(age=1;;age++){
		if(age%12==0&&age%7==0&&(age/6+age/12+age/7+5+age/2+4)==age){
			printf("����ͼ�%d��",age);
			break;
		}
	}
}
void Fun7_8(void){
	int total;
	for(total=1;;total++){
		if(total%5==1&&total%6==5&&total%7==4&&total%11==10){
			printf("������%d����",total);
			break;
		}
	}
}
int main()
{
    int c;
    while(1)
    {
       /*��ʾ����˵�*/
       putchar('\n');
       puts("1. Fun7_1");   
       puts("2. Fun7_2");
       puts("3. Fun7_3");
       puts("4. Fun7_4");
       puts("5. Fun7_5");   
       puts("6. Fun7_6");
       puts("7. Fun7_7");
       puts("8. Fun7_8");
       puts("0. Exit");
       puts("Input command between 0 and 8 :");
       fflush(stdin);     /*������뻺���� */ 
       scanf("%d",&c);    /*�����û���������*/ 
       switch(c)          /*�����������������غ���*/
        {  
	      	case 0:  return 0;  
	      	case 1:  Fun7_1();  break;
      	    case 2:  Fun7_2();  break;
            case 3:  Fun7_3();  break;
            case 4:  Fun7_4();  break;
            case 5:  Fun7_5();  break;
      	    case 6:  Fun7_6();  break;
            case 7:  Fun7_7();  break;
            case 8:  Fun7_8();  break;
	     default:  printf("\n wrong command��input again ! ");
	 }
     }
} 
