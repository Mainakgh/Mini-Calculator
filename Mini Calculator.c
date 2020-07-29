#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define PI 3.141592
double ans=0.0;//global variable to store results
//function 1-- to convert degree to radian
double radian(double *angle)
{
	return (PI/180)*(*angle);
}
//function 2-- to convert radian to degree
double degree(double *ang)
{
	return (180/PI)*(*ang);
}
//function 3-- to check if a number is odd or even
int isodd(int n)
{
	return (n%2);
}
//function 4-- sin operation
void fsin()
{
	
	printf("\n\nFunction Name: sin x\nDomain: R\nRange: [-1,1]\nEnter angle:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	double rad=radian(&xd);
	printf("sin %s= %.3lf\n", angle,sin(rad));
	
}
//function 5-- cos operation
void fcos()
{
	printf("\n\nFunction Name: cos x\nDomain: R\nRange: [-1,1]\nEnter angle:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	double rad=radian(&xd);
	printf("cos %s= %.3lf\n", angle,cos(rad));
}

//function 6-- cosec operation
void fcosec()
{
	printf("\n\nFunction Name: cosec x\nDomain: R-{nPI : n=Integers}\nRange:R-(-1,1)\nEnter angle:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	double rad=radian(&xd);
	if((int)xd%180==0)
	printf("cosec %s= UNDEFINED\n",angle);
	else
	printf("cosec %s= %.3lf\n", angle,1/sin(rad));
}

//function 7-- sec operation
void fsec()
{
	printf("\n\nFunction Name: sec x\nDomain: R-{(2n+1)xPI/2\nRange:R-(-1,1)\nEnter angle:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	double rad=radian(&xd);
	if((int)xd%90==0 && isodd(xd/90)==1)
	printf("sec %s= UNDEFINED\n",angle);
	else
	printf("sec %s= %.3lf\n", angle,1/cos(rad));
}

//function 8-- sin inverse operation
void farcsin()
{
	printf("\n\nFunction Name: arcsin x\nDomain: [-1,1] \nRange: [-PI/2, PI/2]\nEnter number:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	if(xd<-1 || xd>1)
	printf("\nWrong input");
	else
	{
	double ans=asin(xd);
	printf("arcsin %s= %.3lf\n", angle,degree(&ans));
	}
	
}
//function 9-- cos inverse operation
void farccos()
{
	printf("\n\nFunction Name: arccos x\nDomain: [-1,1] \nRange: [0, PI]\nEnter number:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	if(xd<-1 || xd>1)
	printf("\nWrong input");
	else
	{
	double ans=acos(xd);
	printf("arccos %s= %.3lf\n", angle,degree(&ans));
	}
}

//function 10-- cosec inverse operation
void farccosec()
{
	printf("\n\nFunction Name: arccosec x\nDomain: R-(-1,1) \nRange: [-PI/2, 0) U (0, PI/2] \nEnter number:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	if(xd<=-1.0 || xd>=1.0)
	{
	double ans=asin(1/xd);
	printf("arccosec %s= %.3lf\n", angle,degree(&ans));
	}
	
	else
	printf("\nWrong input");
}

//function 11-- sec inverse operation
void farcsec()
{
	printf("\n\nFunction Name: arcsec x\nDomain: R-(-1,1) \nRange: [0, PI/2) U (PI/2, PI] \nEnter number:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	if(xd<=-1.0 || xd>=1.0)
	{
	double ans=acos(1/xd);
	printf("arcsec %s= %.3lf\n", angle,degree(&ans));
	}
	
	else
	printf("\nWrong input");
}

//function 12-- tan operation
void ftan()
{
	printf("\n\nFunction Name: tan x\nDomain: R-{(2n+1)xPI/2 : n=Integers}\nRange: R\nEnter angle:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	
	if(isodd(xd/90)!=0 && (int)xd%90==0)
	printf("tan %s= UNDEFINED\n", angle);
	else if(isodd(xd/90)==0 && (int)xd%90==0)
	printf("tan %s= 0\n", angle);
	else
	{
	double rad=radian(&xd);
	printf("tan %s= %.3lf\n", angle,tan(rad));
	}
}

//function 13-- cot operation
void fcot()
{
	printf("\n\nFunction Name: cot x\nDomain: R-{nPI : n=Integers}\nRange: R\nEnter angle:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	if((int)xd%90==0 && isodd(xd/90)==0)
	printf("cot %s= UNDEFINED\n", angle);
	else if((int)xd%90==0 && isodd(xd/90)!=0)
	printf("cot %s= 0\n", angle);
	else
	{
	double rad=radian(&xd);
	printf("tan %s= %.3lf\n", angle,1/tan(rad));
	}
}

//function 14-- tan inverse operation
void farctan()
{
	printf("\n\nFunction Name: arctan x\nDomain: R \nRange: (-PI/2, PI/2)\nEnter number:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	double ans=atan(xd);
	printf("arctan %s= %.3lf\n", angle,degree(&ans));
	
}

//function 15-- cot inverse operation
void farccot()
{
	printf("\n\nFunction Name: arccot x\nDomain: R \nRange: (0 , PI/2)\nEnter number:  ");
	char angle[10];
	getchar();
	scanf("%[^\n]s",angle);
	double xd=atof(angle);
	double ans=atan(1/xd);
	printf("arccot %s= %.3lf\n", angle,degree(&ans));
}
//function 16-- to run the code for list of trigonometric functions
int trig_fun(int ctrig)
{
	
	switch(ctrig)
	{
		
		case 1:
			fsin();
			break;
		
		case 2:
			fcos();
			break;
		
		case 3:
			ftan();
			break;
		
		case 4:
			farcsin();
			break;
			
		case 5:
			farccos();
			break;
		
		case 6:
			farctan();
			break;
			
		case 7:
			fcosec();
			break;
			
		case 8:
			fsec();
			break;
			
		case 9:
			fcot();
			break;
		
		case 10:
			farccosec();
			break;
		case 11:
			farcsec();
			break;
			
		case 12:
			farccot();
			break;
			
		case 0:
			return 0;
			break;
		default:
		printf("\nWrong choice. Enter again: ");
		return 1;
	}
	return 1;
}
//function 17--add operation
void add(float x,float b)
 { ans=x+b;
   printf("Result: %f\n",ans);}
 
//function 18--subtract operation 
 void subs(float g,float h)
{ ans=g-h;
  printf("Result: %f\n",ans);}
 
//function 19-- multiplication operation 
 void mult(float i,float j)
{ ans=i*j;
  printf("Result: %f\n",ans);}

//function 20-- power operation
void p(float q,float r)
{
 int i;float f=1.0;
 if(q==0)
 {
 	if(r==0)
 	printf("ERROR");
 	else
 	{
	ans=0.0;printf("Result: %f\n",ans);
    }
 }
 else
 {
 	if(r>=0)
 	{
 		for(i=1;i<=r;i++)
  		f=f*q;
	}
	 else
	 {
	 	for(i=-1;i>=r;i--)
	 	f/=q;
	 }
	 ans= f;
	 printf("Result: %f\n",ans);
 }
 
 
}

//function 21--factorial operation
void fact(long z)
{ 
if(z<0||z>12)
printf("The number is out of limits");
else
{
long f=1,i;
 for(i=2;i<=z;i++)
  {f=f*i;}
 ans=f;
 printf("Result: %ld\n",(long)ans);	
}
}

//function 22--division operation
void divi(float c,float d)
{
	if(d==0)
	printf("\nDivision by 0 is invalid");
	else
	{
	ans=((float)c)/d;
  printf("Result: %f\n",ans);	
	}
 }

//function 23--square root operation  
void fsqroot(float num)
{
	ans=sqrt(fabs(num));
	if(num<0)
	printf("Result: %f i\n",ans);
	else
	printf("Result: %f\n",ans);
}

//function 24-- ceil operation
void fceil(float num)
{
    ans=ceil(num);
	printf("Result: %f\n",ans);
}

//function 25--exponential operation
void fexp(float num)
{
    ans=exp(num);
	printf("Result: %f\n",ans);
} 

//function 26--factorial operation returning the result
long factorial(int x)
{
	int c;
	long result = 1;
	for (c=2;c<=x;c++)
	result= result *c;
	return result;
}

//function 27--combination operation
long find_ncr(int a ,int b)
{
	long result;
	int i;
	if(b>(a/2))
	b=a-b;
	i=b;
	int product=1;
	while(i>0)
	{
		product*=a--;
		i--;
	}
	
	result=(float)product/factorial(b);
	return result;
}

//function 28--permutation operation
long find_npr(int p,int q)
{    long result;
     result=factorial(p)/factorial(p-q);
     return result;
} 
//function 29--modulus
void mod(char modptr[])
{
	int i=1;
	int l=strlen(modptr);
	while(i<l)
	{
		printf("%c",modptr[i]);
		i++;
	}
	printf("\n");
	
}
//function 30--to run the code for list of algebraic functions
int algebra()
 {
 int n;char y;float a,b;int mak;float sq;int jk;int n1,r; char whatever2[100];
   while(1)
  {
   n=0;mak=0;
   printf("\n\nAlgebraic Operations\n");
   
   printf("\n%3d.Addition\t\t%3d.Subtraction\n%3d.Multiplication\t%3d.Division\n%3d.Power\t\t%3d.Square root\n%3d.Factorial\t\t%3d.Ceil Function\n%3d.Exponential Function%3d.Modulus\n%3d.ln x\t\t%3d.log x\n%3d.Permutation\t\t%3d.Combination\n\n%3d.Back\n\n Enter your choice:  ",1,2,3,4,5,6,7,8,9,10,11,12,13,14,0);
   
   scanf("%s",whatever2);
   n=valid2(whatever2);
   if(n==15)
   printf("\nWrong choice. Enter again...\n");
   else
   {
   switch(n)
   {
     case 1:
     printf("Press 1 to add two new numbers or 2 to add with existing number:  ");
     scanf("%d",&mak);
     if(mak==1)
     { printf("Enter two numbers:\n");
       scanf("%f%f",&a,&b);
       add(a,b);
        }
     else if(mak==2)
     {printf("Enter number: \n");
      scanf("%f",&a);
      add(ans,a);}
     break;
     case 2:
     printf("Press 1 to substract from two supplied number or 2 to substract from existing number:  ");
     scanf("%d",&mak);
     if(mak==1)
     { printf("Enter numbers: \n");
       scanf("%f%f",&a,&b);
       subs(a,b);}
     else if(mak==2)
     {printf("Enter number:  ");
      scanf("%f",&a);
      subs(ans,a);}
     break;
     case 3:
     printf("Press 1 if you want to multiply two new numbers and press 2 to multiply to result of existing operation:  ");
     scanf("%d",&mak);
     if(mak==1)
     { printf("Enter numbers:\n");
       scanf("%f%f",&a,&b);
       mult(a,b);}
     else if(mak==2)
     {printf("Enter number: \n");
      scanf("%f",&a);
      mult(ans,a);}
     break;
     case 4:
     printf("Press 1if you want to divide two new numbers and press 2 to divide from result of existing operation: ");
     scanf("%d",&mak);
     if(mak==1)
     { printf("Enter numbers:\n");
       scanf("%f%f",&a,&b);
       divi(a,b);}
     else if(mak==2)
     {printf("Enter number:\n");
      scanf("%f",&a);
      divi(ans,a);}
     break;
     case 5:
     printf("Press 1 to find power of new number or 2 to find power with existing base value:  ");
     scanf("%d",&mak);
     if(mak==1)
     {printf("\nEnter numbers:  ");
      scanf("%f%f",&a,&b);
      p(a,b);}
     else if(mak==2)
     {printf("\nEnter power: ");
      scanf("%f",&b);
      p(ans,b);}
       break;
    
    case 6:
    	printf("Press 1 to find square root of new number or 2 to find square root with existing base value:  ");
     scanf("%d",&mak);
     if(mak==1)
     {
	 printf("\nEnter number: ");
      scanf("%f",&a);
      fsqroot(a);
	  }
     else if(mak==2)
     {
      fsqroot(ans);
	  }
       break;
     
     case 7:
     printf("Press 1 to find factorial of new number or 2 to find factorial of existing result:  ");
     scanf("%d",&mak);
     if(mak==1)
     {printf("Enter number between 0 and 12:");
      scanf("%d",&jk);
      fact((long)jk);}
      else if(mak==2)
      {
      fact((long)ans);}
      break;
      
     case 8:
     printf("Press 1 to find ceil of new number or 2 to find ceil of existing base value:  ");
     scanf("%d",&mak);
     if(mak==1)
     {
	 printf("Enter number:\n");
      scanf("%f",&a);
      fceil(a);
	  }
     else if(mak==2)
     {
      fceil(ans);
	  }
       break;
     case 9:
      printf("Press 1 to find exponential of new number or 2 to find exponential of existing value:  ");
     scanf("%d",&mak);
     if(mak==1)
     {
	 printf("Enter number:\n");
      scanf("%f",&a);
      fexp(a);
	  }
     else if(mak==2)
     {
      fexp(ans);
	  }
       break;
    
    case 10:
     printf("Press 1 to find modulus of new number or 2 to find modulus of existing value:  ");
     
     scanf("%d",&mak);
     if(mak==1)
     {
	 printf("Enter number:\n");
	 double d;
	
	char f[100];
	scanf("%s",f);
	d=atof(f);
	printf("Result: ");
	
	if(d<0)
	mod(f);
	else
	printf("%s",f);
	
	ans=(double)fabsf(d);
    }
	
	
     else if(mak==2)
     {
     	ans=fabsf(ans);
      printf("Result: %lf\n",ans);
	  }
	  
	  break;
	  
	case 11:
	 printf("Press 1 to find ln x of new number or 2 to find ln x of existing value:  ");
     scanf("%d",&mak);
     if(mak==1)
     {
	 printf("Enter number:\n");
      scanf("%f",&a);
      if(a<=0)
      printf("The number must be greater than zero\n");
      else
      {
      	ans=log(a);
      	printf("Result: %lf\n",log(a));
	  }
      
	  }
     else if(mak==2)
     {
     	if(ans<=0)
      printf("The number must be greater than zero\n");
      else
      {
      	ans=log(ans);
      printf("Result: %lf\n",ans);
	  }
     	
	  }
	  break;
	case 12:
	  printf("Press 1 to find log x of new number or 2 to find log x of existing value:  ");
     scanf("%d",&mak);
     if(mak==1)
     {
	 printf("Enter number\n");
      scanf("%f",&a);
      if(a<=0)
      printf("The number must be greater than zero\n");
      else
      {
      	printf("Result: %f\n",log10(a));
      	ans=log10(a);
	  }
      
	  }
     else if(mak==2)
     {
     	if(ans<=0)
      printf("The number must be greater than zero\n");
      else
      {
      	ans=log10(ans);
      printf("Result: %s\n",ans);
     }
     }
	 break; 
	 
	 case 13:
	
	printf("Enter the value of n and r: \n ");
	scanf("%d %d",&n1,&r);
	if(n1<0 || r<0 || r>n1 )
	printf("The numbers must be positive integers and n>=r\n");
	else
	{
		ans=find_npr(n1,r);
	printf("%dP%d=%.0lf\n",n1,r,ans);
	}
	break;
	
	case 14:
	printf("Enter the value of n and r:\n");
	scanf("%d %d",&n1,&r);
	if(n1<0 || r<0 || r>n1 )
	printf("The numbers must be positive integers and n>=r\n");
	else
	{
		ans=find_ncr(n1,r);
	printf("%dC%d=%.0lf\n",n1,r,ans);
	}
	break;
	
     case 0:
    return 0;
   
     
     default:
     printf("Wrong Input. Enter again");
   }//end of switch block
   }//end of else block
   }//end of while loop
  return 0;
 }//end of function
 
 //structure to store the names
 typedef struct name_arr
{
	char name[20];
};

//function 31--function for delay
void fordelay(int n)
{
    int i,k;
    for(i=0;i<n;i++)
        k=i;
        
}

//function 32-- to display names at the end
void endGame()
{
	int i;
	struct name_arr naam[5]={{"KUMARI MANISHA"},{"MAINAK GHOSH"},{"MADHUSREE BERA"},{"KOUSTAV GHOSH"},{"KUMAR SAURABH"}
	};
	printf("\n************  THANK YOU FOR USING MINI CALCULATOR :-D  ************\n \t\t\tDeveloped by:\n\n");
	fordelay(100000000);fordelay(100000000);fordelay(100000000);
	for(i=0;i<5;i++)
	{
		
		printf("\n\t\t\t%s", naam[i].name);
		fordelay(100000000);
	}
	printf("\n\n\n*********************@@@@@@@@@@@@@@@@@@@@*********************");
	fordelay(100000000);fordelay(100000000);fordelay(100000000);fordelay(100000000);fordelay(100000000);fordelay(100000000);fordelay(100000000);
}

//function 33--valid function to check validity of choice
int valid(char sptr[])
{
	
	int len=strlen(sptr);
	if(len==2 || len==1)
	{
		int choice2=atoi(sptr);
		if(choice2>=0 && choice2<=12)
		return choice2;
	}
	return -1;
}

//function 34--valid2 function to check validity of choice
int valid2(char sptr[])
{
	
	int len=strlen(sptr);
	if(len==2 || len==1)
	{
		int choice2=atoi(sptr);
		if(choice2>=0 && choice2<=14)
		return choice2;
	}
	return 15;
}
//main function
int main()
{
	
	int choice1,calg;
	char whatever[100];
	char ch;
	
	do
	{
	printf("\n\n*************   Welcome to MINI CALCULATOR   *************\nYou can perform:\n1. Trigonometric Operations\n2. Algebraic Operations\n0. Exit\n Enter your choice:  ");
	scanf("%s",whatever);
	ch=whatever[0];
	if(isdigit(ch)==1)
	{
	choice1=(int)ch-48;
	switch(choice1)
	{
		int ctrig,ftrig=1;char whatever1[100];
		case 1:
			
			do
			{
			printf("\nTrigonometric Functions\n%3d. sin x\t%3d. cos x\n%3d. tan x\t%3d. asin x\n%3d. acos x\t%3d. atan x\n%3d. cosec x\t%3d. sec x\n%3d. cot x\t%3d. acosec x\n%3d. asec x\t%3d. acot x\n\n%3d. Back\n\nEnter your choice:  ",1,2,3,4,5,6,7,8,9,10,11,12,0);
            scanf("%s",whatever1);
            if(valid(whatever1)==-1)//for invalid choice
            {
            	printf("\nWrong choice. Enter again.\n");
            	ftrig=0;// to stop the do while loop
			}
			else
			{
				ctrig=valid(whatever1);
				ftrig=trig_fun(ctrig);	
			}
			
			}
			while(ftrig==1);
		break;
		case 2:
			do
			{
				calg=algebra();
			}
		 	while(calg!=0);
		break;
		
		case 0:
		endGame();
		break;
		
		default:
		printf("\nWrong choice. Enter again: ");
		break;		
	}//switch case
    }//if statement
    else
    printf("\nWrong choice. Enter again: ");
    }//do while
    while(choice1!=0);
	return 0;
}

