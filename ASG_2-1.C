int main ()
 {
 float num1,num2,result=0.0;
 char op;
 printf("enter the operator [ + - * / ] \n");
 printf("enter num1 and num2 : \n");
 scanf("%c", &op);
 scanf("%f%f", &num1,&num2);
 switch(op)
 {
     case '+' :
     result = num1+num2;
     break;
     case '-':
     result = num1-num2;
     break;
     case '*':
     result = num1*num2;
     break;
     case '/':
     result = num1 / num2;
     break;


 }
 printf("%.2f  %c %.2f = %.2f" , num1 , op , num2 , result);
 }