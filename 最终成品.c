#include <stdio.h>
#include <stdlib.h>
int placegoods(char a,int b,int c,int d)
{
  printf("%d: ",b);
  int i;
  for(i=0;i<d;i++){printf("%c",a);}
  printf(" %d\n",c);
}
int placestar()
{printf("**************************************\n");}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
printf("��������ͨ�������ۣ�����\n\n(1.20������������ɺ�������'-2'����ɰڻ� \n 2.��֮��Ҫ��������������'-2'\n 3.�밴��ͨ����1��5����\n 4.���롮1�������ļ�(1.txt/)�ڻ�,���롮0�������ڻ�.)\n\n��");
  
  int og=0;
  
  scanf("%d",&og);
  
   char a,e,j,n,r;
  int b,c,d,f,g,h,k,l,m,o,p,q,s,t,u,v;
  
  if (og==1) {FILE *fp=fopen("1.txt","r"); if(fp==NULL) {printf("can't open!\n"); return 1;} ; while (fscanf(fp," %c %d %d %d %c %d %d %d %c %d %d %d %c %d %d %d %c %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&j,&k,&l,&m,&n,&o,&p,&q,&r,&s,&t,&u,&v)!=EOF) {
   fclose(fp);og=0;
  }}                                                                                                                                              //���ļ�����ȡ��ʹ��AI�����̳���ɣ� 
  
   else {
  
  scanf(" %c %d %d %d %c %d %d %d %c %d %d %d %c %d %d %d %c %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&j,&k,&l,&m,&n,&o,&p,&q,&r,&s,&t,&u);
    int v;
  scanf("%d",&v);}
  
  
  
  while (v==-2) {                                           //��ʼ��ҳ�� ,�ɶ�ι��� 
   
      
  placestar();
  placegoods(a,b,c,d);
  placegoods(e,f,g,h);
  placegoods(j,k,l,m);
  placegoods(n,o,p,q);
  placegoods(r,s,t,u);
  placestar();

 printf("�͹����ã������빺����Ϣ��������ۣ���������\n"); 
   char goods;
   int price,number;
   scanf(" %c %d %d", &goods,&price,&number);
   
    if(goods==a) price=c;                 //
 else if(goods==e) price=g;
 else if(goods==j) price=l;
 else if(goods==n) price=p;
 else if(goods==r) price=t;
 else {printf("��Ǹ�������ڴ˻��\n");  printf("ллʹ�ã�\n");continue;}  //���ⵥ����� ,���������Ϣ������� 
     
	 if (goods==a&&number>d) { number=d; printf("��Ǹ�������̫���ˣ���������%d��.\n",number); }            //
 else if (goods==e&&number>h) { number=h; printf("��Ǹ�������̫���ˣ���������%d��.\n",number); }
 else if (goods==j&&number>m) { number=m; printf("��Ǹ�������̫���ˣ���������%d��.\n",number); }
 else if (goods==n&&number>q) { number=q; printf("��Ǹ�������̫���ˣ���������%d��.\n",number); }
 else if (goods==r&&number>u) { number=u; printf("��Ǹ�������̫���ˣ���������%d��.\n",number); }         //�������̫�࣬���������顣 
 
int amount=0;
amount=price*number;
printf("��Ʒ�ܼ۸�Ϊ��%d\n",amount);
printf("��Ͷ��ֽ��(��Ͷ��1��5��10Ԫ)(�����˻����˿������-1��)��"); //�˿����,�����ڻ��˻��� 
int ao=0;
int sum=0;
 scanf("%d",&ao);
 if(ao!=1&&ao!=5&&ao!=10&&ao!=-1){ printf("   (��Ͷ��ֽ��1��5��10Ԫ):\n");  //����ֽ�һ��� 
 
 ao=0;
sum=0;
 scanf("%d",&ao);}
   if(ao==-1) {printf("ллʹ�ã�\n");exit(0);}
   
   
   else {if (ao<amount) {
 	
 	if(ao!=-1){
	 while (sum+ao<amount){if (ao==-1) {printf("�����˿�%dԪ��\n",sum); break;} else 
	 printf("Ǯ����Ŷ������Ͷ��ֽ��:");
   sum=ao+sum;
   scanf("%d",&ao);}
  if (sum+ao==amount) printf("���Ժ��ۻ������ϳ���\n") ;
  else if (ao!=-1) printf("����%dԪ�����Եȣ���Ʒ���ϳ���\n",sum+ao-amount); }}
  

 else if (ao==amount) printf("���Ժ��ۻ������ϳ���\n") ;
 else if (ao!=-1) {printf("����%dԪ�����Եȣ��ۻ������ϳ���\n",ao-amount);}}
 
 printf("ллʹ�ã�\n");
 
 if(ao!=-1){
 if(goods==a) d=d-number;
 else if(goods==e) h=h-number;
 else if(goods==j) m=m-number;
 else if(goods==n) q=q-number;
 else u=u-number; 
}
  
   v=0;
  printf("����������������'-2'\n"); 
  scanf("%d",&v);
  
}

 
 
 printf("��Ǹ��������ͣʹ�á�");

   
	return 0;

}
