// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("enter a number:");
//     scanf("%d",&num);
//     if(num<=1)
//     {
//         printf("%d is not a prime number",num);
//     }
//     else if(num==2)
//     {
//         printf("%d is a prime number",num);
//     }
//     else if(num==3)
//     {
//         printf("%d is a prime number",num);
//     }
//     else if(num==5)
//     {
//         printf("%d is a prime number",num);
//     }
//     else if(num==7)
//     {
//         printf("%d is a prime number",num);
//     }
//     

//the product of digits in a given number

// #include <stdio.h>                                      
// int main()
// {
//     int num,digit;
//     int product=1;
//     printf("enter a number");
//     scanf("%d",&num);
//     if(num==0)
//     {
//         product=0;
//     }
//     else
//     {
//         if(num<0){
//         product=-num;
//         }
//         while(num>0){
//             digit=num%10;
//             product*=digit;
//             num/=10;
//         }
//     }
//     printf("product of digits:%d",product);
//     return 0;
// }

//whether the given number is spy or not
// #include <stdio.h>
// int main()
// {
//     int num,digit;
//     int sum=0,product=1,temp;
//     printf("enter a number");
//     scanf("%d",&num);
//     temp=num;
//     while(temp>0)
//     {
//         digit=temp%10;
//         sum+=digit;
//         product*=digit;
//         temp/=10;
//     }
//     if(sum==product)
//     {
//         printf("%d is a spy number",num);
//     }
//     else
//     {
//         printf("%d is not a spy number",num);
//     }
//     return 0;
// }

//factors of a given number
// #include <stdio.h>
// int main()
// {
//     int num,i;
//     printf("enter a number:");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     {
//         if(num%i==0)
//         printf("%d\n",i);
//     }
//     return 0;
// }

//factorial of a given number

// #include <stdio.h>
// int main()
// {
//     int num,i;
//     long long factorial=1;
//     printf("enter a number");
//     scanf("%d",&num);
//     if (num<=0)
//     {
//         printf("factorial of a negative number is not defined/n");
//     }
//     else{
//         for(i=1;i<=num;i++){
//             factorial*=i;
//         }
//         printf("factorial of %d=%lld\n",num,factorial);
//     }
//     return 0;
// }

//largest digit in a given number

// #include <stdio.h>
// int main()
// {
//     int num,digit,largest=0;
//     printf("enter a number:");
//     scanf("%d",&num);
//     if(num<0)
//     num=-num;
//     while(num>0){
//         digit=num%10;
//         if(digit>largest)
//         largest=digit;
//         num/=10;
//     }
//     printf("the largest digit is: %d\n",largest);
//     return 0;
    
// }
//smallest digit in thr number

// #include <stdio.h>
// int main()
// {
//     int num,digit;
//     int smallest=9;
//     printf("enter a number:");
//     scanf("%d",&num);
//     if(num<0){
//         num=-num;
//     }
//     if(num==0){
//         smallest=0;
//     }else{
//         while(num>0)
//         {
//             digit=num%10;
//             if(digit<smallest)
//             smallest=digit;
//             num/=10;
//         }
//         printf("the smallest digit is:%d\n",smallest);
//     }
//     return 0;
    
// }
