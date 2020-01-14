//10 Formula
#include<stdio.h>
#include<math.h>
#define k_max 19


//faktorials
long long fact(long x) {
  if(x == 0)
  return 1;
  long long res = x;
  while(--x > 1) {
  	res *= x;
        	 }
  return res;
                       }





double _j1(double x){
	x *= -1;
	double res = (x/2);
	double eit = 0;
	for(int k = 0; k< k_max; k++)
				      {
	double eres = (((-1), k) * x, 2*k)/ ((fact(k) * (fact(k + 1) * 2, 2*k)));
	eit += eres;
        if(k == k_max - 2)
	  printf("priekspedejais: %.24lf\n", eres);
	else if(k == k_max - 1)
          printf("pedejais : %.24lf\n", eres);
                                       }
return res * eit;
                        }




void main() {
	double x;
	printf("ievadiet mainigo x ");
	scanf("%lf", &x);





printf(
"		        1000                                        "    "\n"
"		        =====                                       "    "\n"
"		        \ \                                        "    "\n"
"			 \ \	(-1)^k*x^2*k                       "  	"\n"
"		 	 | | -----------------------               "    "\n"
"	     x           / /	k!* (k+1)! * 2^2*k                 "    "\n"
"bessj1(x)=  -    *     / /                                        "    "\n"
"	     2          =====                                       "    "\n"
"			 k=0                                        "    "\n"
"" "\n"
"" "\n"
"\n"
       );




	printf("C    j1(%lf) = %lf\n\n", x, j1(x));
}
