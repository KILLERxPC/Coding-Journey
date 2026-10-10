//    # Code 1

// #include<stdio.h>

// int main(){
//     int a;
//     a = 6;
//     printf("%d" , a);
//     printf("hello world");
//     return 0;

// }

//   #Code 2

// #include<stdio.h>

// int main(){
//     int a,b;

//     printf("enter length\n");
//    scanf("%d", &a);

//    printf("enter breadth\n");
//    scanf("%d", &b);

//     printf("The area of rectangle is %d" , a*b);
//     return 0;
// }

//   #Code 3

// #include<stdio.h>

// int main(){
//     int r,h;

//     printf("The radius of the cylinder is ");
//     scanf("%d" , &r);

//     printf("The height of the cylinder is: ");
//     scanf("%d" , &h);

//     printf("The Vol. of the cylinder is %f", h*r*r*22.7);
//     return 0;
// }

//   #Code 4

// #include<stdio.h>

// int main(){
//     int c;
//     printf("Write your temp in C");
//     scanf("%d" ,&c);
//     printf("The Temp in Fahrenheit is %f" , (9.0/5)*c + 32);
//     return 0;
// }

//   #Code 5

// #include<stdio.h>

// int main(){
//     int a;
//     printf("write your no.:");
//     scanf("%d", &a);
//     printf("The remainder is %f" , a/97);

//     return 0;
// }

//   #Code 6

// #include <stdio.h>

// int main()
// {
//     int a = 7, b = 0;
//     printf("the value of b is %d", !b);
//     return 0;
// }

//   #Code 7

// #include <stdio.h>

// int main()
// {
//     int maths, sci, eng,d;
//     printf("write your maths marks:");
//     scanf("%d", &maths);
//     printf("write your sci marks:");
//     scanf("%d", &sci);
//     printf("write your maths eng:");
//     scanf("%d", &eng);
//     d = ( maths + sci + eng);
//     if (maths>=33)
//     if (sci>=33)
//     if (eng>=33)
//     printf("You have scored the min. passing marks\n");
//     if (d>=(40/100)*300)
//     printf("You have passed in all subjects with the marks %d\n" , d);
//     else
//     printf("You have failed the exams");

//     return 0;
// }

//   #Code 8

// #include<stdio.h>

// int main(){
//     int a,b,c,d;
//     printf("Enter your no.:");
//     scanf("%d",&a);
//     printf("Enter your no.:");
//     scanf("%d",&b);
//     printf("Enter your no.:");
//     scanf("%d",&c);
//     printf("Enter your no.:");
//     scanf("%d",&d);
//     if (a>b && a>c && a>d)
//     printf("a is the greatest number");
//     if (b>a && b>c && b>d)
//     printf("b is the greatest number");
//     if (c>a && c>b && c>d)
//     printf("c is the greatest number");
//     if (d>a && d>c && d>b)
//     printf("d is the greatest number");
//     return 0;
// }

//   #Code 9

// #include<stdio.h>

// int main(){
//     int i;
//  i = 1;
//  int a;
//   printf("write ur no.");
//         scanf("%d",&a);
//     do{

//         printf("%d\n",i);
//         i++;

//     }while(i<=a);
//     return 0;
// }

//   #Code 10

// #include<stdio.h>

// int main(){
//     int a;
//     int i;

//   printf("write ur no.");
//         scanf("%d",&a);
//     for(i=0; i<=a; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

//   #Code 11

// #include <stdio.h>

// int main()
// {
//     int a;
//     int i;
//     printf("write ur no.");
//     scanf("%d", &a);
//     for(i= 1; i<=10; i++){
//     printf("%d\n", a*i);
//     }
//     return 0;

// }

//   #Code 12

// #include <stdio.h>

// int main()
// {
//     int a;
//     int i;
//     printf("write ur no.");
//     scanf("%d", &a);
//     for(i= 10; i; i--){
//     printf("%d\n", a*i);
//     }
//     return 0;

// }

//   #Code 13

// #include<stdio.h>

// int main(){
//     int a;
//     int i;
//     int sum;
//     sum = 0;
//     printf("enter the table no.");
//     scanf("%d",&a);
//     for(i = 1; i<=10 ; i++){
//         sum +=a*i;

//     }
//     printf("The sum of the table is %d" , sum);
//     return 0;
// }

//   #Code 14

// #include<stdio.h>

// int main(){
//      int a;
//      int i;
//      int f = 1;
//     printf("write ur factorial no.");
//     scanf("%d", &a);
//     for(i = 1; i<=a ; i++){
//     f *= i;
//     }
//     printf("the factorial of %d is %d" , a , f);
//     return 0;
// }

//   #Code 15

// #include<stdio.h>

// int main(){
//       int a;
//       int i;

//     printf("write ur prime no.");
//     scanf("%d", &a);
//     int count = 0;
//     for(i = 1; i<=a ; i++){
//     if (a%i == 0 ){
//     count++;}}
//     if (count ==2)
//     printf("the number %d is prime" ,a);
//     else
//     printf("the number %d isnt prime",a);

//     return 0;
// }

//   #Code 16

// #include<stdio.h>
// int average(int a, int b , int c);
// int average(int a, int b , int c){
//     int d = (a+b+c)/3;
//     printf("%d" ,d);
// }
// #include<stdio.h>

// int main(){
//     average(100,50,60);
//     return 0;
// }

//   #Code 17

// #include<stdio.h>

// int main(){
//     int a=10;
//     printf("%d",*(&a));
//         return 0;
// }

//   #Code 18

// ten_times(int n);
// ten_times(n){
//     printf("%d", n*10);
// }
// #include<stdio.h>

// int main(){
//    ten_times(10);
//     return 0;
// }

//   #Code 19

// #include <stdio.h>
//  int average(int *n, int *m);
//  int average(int *n, int *m)
// {
//     return (*n + *m) / 2;
// }
//  int sum(int*n,int*m);
//  int sum(int*n,int*m){
//     return (*n+*m);
// }

// int main()
// {
//     int x = 45;
//     int y = 30;
//     printf("%d\n", average(&x, &y));
//     printf("%d\n",sum(&x,&y));
//     return 0;
// }

//   #Code 20

// int swap(int*a,int*b);
// int swap(int*a,int*b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;

// }
// #include<stdio.h>

// int main(){
//     int i = 45;
//     int y = 65;
//     swap(&i,&y);
//     printf("%d %d" ,i,y);

//     return 0;
// }

//   #Code 21

// #include<stdio.h>

// int main(){
//     int a=10;
// int* ptr =&a;
// int**ptr1 =&ptr;
// printf("%d",**ptr1) ;
//     return 0;
// }

//   #Code 22

// #include<stdio.h>
//   int arr[6] = {2,5,4,6,7,8};
// void reverse();
// void reverse(){
//     for(int i = 5; i>=0; i--){
//         printf("%d\n",arr[i]);
//     }
// }
// int main(){
//     reverse();
//     return 0;
// }

//   #Code 23
// #include<stdio.h>
// void count();
// void count(){
//     int arr[4] = {2,4,-4,-8};
//     for(int i = 0; i<=3; i++){
//         if (arr[i] >= 0)
//         printf("%d\n",arr[i]);
//     }

// }

// int main(){
//     count();
//     return 0;
// }

//   #Code 24

// #include<stdio.h>

// int main(){
//     int arr[2][3][4][5];
//     for(int i =0; i <2 ; i++){
//      for(int j =0; j <3 ; j++){
//         for(int k =0; k <4 ; k++){
//             for(int l =0; l <3 ; l++){
//                 printf("%u\n",&arr[i][j][k][l]);

//             }
//      }
//     }
//     }

//     return 0;
// }

//   #Code 25

// #include<stdio.h>

// int main(){
//     char a[1000];
// printf("Write anything u want:");
// scanf("%s",a);
// printf("%s" ,a);
//     return 0;
// }

//   #Code 26

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[] = "bankai";
//     for(int i=0; i<strlen(str); i++){
//         str[i] = str[i] +1;
//     }
//     printf("%s\n",str);
//     char str1[] = "cbolbj";
//      for(int i=0; i<strlen(str1); i++){
//         str1[i] = str1[i] -1;}
//          printf("%s",str1);
//     return 0;
// }

//   #Code 25

// #include<stdio.h>
// struct vector{
//     int i;
//     int j;
// };

// int main(){
//     struct vector e1 = {1,3};
//     printf("%d\n%d", e1.i,e1.j);
//     return 0;
// }

//   #Code 22

// #include<stdio.h>
// struct vector{
//     int i;
//     int j;
// };
// struct vector sumvector(struct vector v1, struct vector v2)
// {
//    struct vector v3 = {v1.i + v2.i ,v1.j + v2.j };
//    return v3;
// };

// int main(){
//     struct vector e1 = {1,3};
//     int c = e1.i+e1.j;
//     printf("%d\n", c);
//     struct vector v1 ={5,7};
//     struct vector v2 ={9,6};
//     struct vector v3 = sumvector(v1,v2);
//     printf("%di %dj",v3.i , v3.j);
//     return 0;
// }

//   #Code 23

// #include<stdio.h>

// int main(){
//     int arr[20];
//     for(int i=0; i <20; i++){
//           arr[i] = i + 1;
//     }
//  for(int i = 0; i < 20; i++) {
//         printf("%d\n ", arr[i]);
//     }

//     return 0;
// }

//   #Code 24

// #include<stdio.h>
// struct store_compare
// {
//     int arr[20];
// };

// int main(){
//     struct store_compare e1;
//     e1.arr[20];

//     for(int i=0; i <20; i++){
//           e1.arr[i] = i + 1;
//     }
//  for(int i = 0; i < 20; i++) {
//         printf("%d\n", e1.arr[i]);
//     }
//     int greatest=e1.arr[0];
//     for(int i = 1; i < 20; i++){
//         if (e1.arr[i] > greatest)
//        greatest = e1.arr[i];

//     }
// printf("the greatest no. is %d", greatest);
//     return 0;
// }

//   #Code 25

// #include<stdio.h>

// int main(){
//     int r;
//     FILE *lol;
//     lol = fopen("wow.txt", "r");
//     fscanf(lol , "%d  ",&r);
//     printf("%d ", r);
//     fclose(lol);
//     return 0;
// }

//   #Code 26

// #include<stdio.h>

// int main(){
//     FILE* lol;
//     lol = fopen("wow.txt" ,"a");
//     int a;
//     printf("writhe ur table no.:");
//     scanf("%d",&a);
//     for(int i=1; i <11 ; i++){
//         fprintf(lol,"%d X %d = %d",a , i, (i*a) );
//         fprintf(lol, "%c",'\n');
//     }
// fprintf(lol, "%c",'\n');
//     return 0;
// }

//   #Code 27

// #include<stdio.h>

// int main(){
//     FILE *lol;
//     FILE *lol1;
//     lol1 = fopen("wow1.txt", "w");
//     lol = fopen("wow.txt" ,"r");
//     int c;
//       while (fscanf(lol, "%c", &c) == 1) {
//         fprintf(lol1, "%c", c);
//     }
//         fclose(lol);
//     fclose(lol1);
//     return 0;
// }

//   #Code 28

// #include<stdio.h>

// int main(){
//     FILE* lol;
//     int n;
//     lol =fopen("wow.txt" ,"r");
//     fscanf(lol, "%d",&n);
//     fclose(lol);

//      lol =fopen("wow.txt" ,"w");
//     fscanf(lol, "%d",&n);
//     fprintf(lol, "%d",n*2);
//       fclose(lol);
//     return 0;
// }

//   #Code 29

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n = 6;
//     int* ptr;
//     ptr = ((int*) malloc(n* sizeof(int)));
//     ptr[0]=45;
//     printf("%d\n",ptr[0]);
//     n = 10;
//     ptr = ((int*) realloc(ptr,10* sizeof(int)));
//     ptr[9] = 56;
//       printf("%d",ptr[9]);
//     return 0;
// }

//   #Code 30

// #include<stdio.h>

// int main(){
//       int x = 10;

//     int *p = &x;

//     printf("x = %d\n", x);
//     printf("x addresss is %p\n",x);
//     printf("address of x = %p\n", *p);
//     printf("p address is %p\n",p);
//     printf("p  is %d\n",p);
//     return 0;
// }

//   #Code 31

// #include<stdio.h>

// int main(){
//     int arr[5] = {2,4,6,8,10};
//     int *ptr =arr;
//     for(int i=0;i<5;i++){
//         printf("%d\n",*ptr);
//         *ptr++;
//     }
//     return 0;
// }

//   #Code 32

// #include<stdio.h>

// int main(){
//     char name[]="musharraf";
//     sizeof(name);
//     printf("%d",sizeof(name));
//     return 0;
// }

//   #Code 33

// #include<stdio.h>

// int main(){
//     char str[] = "Programming";
//     int count = 0;
//     char *p=str;
//     while (*p !='\0'){
//         count++;
//         p++;
//     }
//     printf("%d",count);
//     return 0;
// }

//   #Code 34

// #include<stdio.h>
// #include <string.h>

// int main(){
//     char str[99];
//     char rev[99];
//     printf("Write the word: ");
//     scanf("%s",str);
//     strcpy(rev,str);
//     strrev(rev);

//     if(strcmp(str,rev)==0)
//     printf("The word is palindrome");
//     else
//     printf("The word isnt palindrome");
//     return 0;
// }

//   #Code 35

// struct Book
// {
//     char title[20];
//     float price;
//     int page;
// };

// #include<stdio.h>

// int main(){
//     struct Book b1 ={"Programming",500,300};
//     printf("Title: %s\n",b1.title);
//     printf("Price: %.2f\n",b1.price);
//     printf("Pages: %d\n",b1.page);
//     return 0;
// }

//   #Code 36

// struct student{
//     char name[20];
//     int age;
//     int marks;

// };
// #include<stdio.h>

// int main(){
//     struct student s1[3]={
//         {"lol",15,100},
//         {"abc",16,99},
//         {"xyz",17,98}
//     };
//  for(int i =0;i<3;i++){
//     printf("%s %d %d\n",s1[i].name,s1[i].age,s1[i].marks);
//  }
//     return 0;
// }

//   #Code 37

// struct Student
// {
//     int age;
// };

// #include<stdio.h>

// int main(){
//     struct Student s = {17};

//     struct Student *p = &s;
//     p->age = 18;
//     printf("%d",s.age);
//     return 0;
// }

//   #Code 38

// #include<stdio.h>
// #include <stdlib.h>

// int main(){
//     int *p = calloc(5, sizeof(int));
//     printf("%d",p[0]);
//     return 0;
// }

//   #Code 39

// #include<stdio.h>
// #include <stdlib.h>

// int main(){
//     int n;
//     printf("Write the no. of integer u need: ");
//     scanf("%d",&n);
//     int *arr = malloc(n* sizeof(int));
//     for(int i = 0;i<n;i++){
//         printf("Numbers: ");
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
//     free(arr);
//     return 0;
// }

//   #Code 40

// #include <stdio.h>

// int add(int a, int b){
//     return a+b;
// }

// int main()
// {
//     printf("%d", add(5, 10));

//     return 0;
// }

//   #Code 41

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Write the no. of integer: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("Write your no.: ");
//         scanf("%d",&arr[i]);

//     }
//         for(int i=0;i<n;i++){
//             printf("%d\n",arr[i]);
//         }

//         int low=arr[0];
//             for(int i=0;i<n;i++){
//                 if(arr[i]<low)
//                     low = arr[i];

//         }
//         printf("The lowest element is%d\n",low);
//            int high=arr[0];
//             for(int i=0;i<n;i++){
//                 if(arr[i]>high)
//                     high = arr[i];

//         }
//          printf("The highest element is%d\n",high);
// int *ptr = arr;
// for(int i=n-1;i>=0;i--){
//     printf("%d\n",ptr[i]);
// }
//     return 0;

// }

//   #Code 42

// #include<stdio.h>

// int main(){
//     int a;
//     printf("Write the no.: ");
//     scanf("%d",&a);
//     if(a>0){
//         printf("The no. %d is positive",a);
//     }
//     else if(a<0){
//         printf("The no. %d is negative",a);
//     }
//     else
//     printf("The no. %d is zero",a);
//     return 0;
// }

//   #Code 43

// #include <stdio.h>

// int main()
// {
//     int x;
//     printf("1 -> +\n2 -> -\n3 -> *\n4 -> /\nChoose the options.: ");
//     scanf("%d", &x);
//     int a;
//     int b;
//     switch (x)
//     {
//     case 1:

//         printf("Write the no.: ");
//         scanf("%d", &a);
//         printf("Write the no.: ");
//         scanf("%d", &b);
//         printf("The added no.is %d", a + b);
//         break;
//     case 2:

//         printf("Write the no.: ");
//         scanf("%d", &a);
//         printf("Write the no.: ");
//         scanf("%d", &b);
//         printf("The subtracted no.is %d", a - b);
//         break;
//     case 3:

//         printf("Write the no.: ");
//         scanf("%d", &a);
//         printf("Write the no.: ");
//         scanf("%d", &b);
//         printf("The multiplied no.is %d", a * b);
//         break;
//     case 4:

//         printf("Write the no.: ");
//         scanf("%d", &a);
//         printf("Write the no.: ");
//         scanf("%d", &b);
//         printf("The divided no.is %d", a / b);
//         break;
//     }

//     return 0;
// }

//   #Code 44

// #include <stdio.h>

// int main()
// {
//     int n;
//     int factorial = 1;
//     printf("Write the factorial no.: ");
//     scanf("%d", &n);

//     for (int i = 1; i < n + 1; i++)
//     {
//         factorial *= i;
//     }

//     printf("The factorial is %d", factorial);
//     return 0;
// }

//   #Code 45

// #include<stdio.h>

// int main(){
//     int i;
//     for( i=0;i<101;i++){
//         if( i%2==0)
//         printf("%d\n",i);
//     }
//     return 0;
// }

//   #Code 46

// #include <stdio.h>

// int main() {
//     int a;

//     printf("Write the no.: ");
//     scanf("%d", &a);

//     int original = a;
//     int reverse = 0;

//     while (a != 0) {
//         int digit = a % 10;
//         reverse = reverse * 10 + digit;
//         a /= 10;
//     }

//     if (original == reverse) {
//         printf("%d is a palindrome of %d", original, reverse);
//     } else {
//         printf("%d is not a palindrome of %d", original, reverse);
//     }

//     return 0;
// }

//   #Code 47

// #include<stdio.h>
//    void change(int *x)
// {
//     *x = 100;
// }
// int main(){
//  int x = 10;
//     change(&x);
//     printf("%d", x);
//     return 0;
// }

//   #Code 48

// int calculate(int n)
// {
//       if(n == 0)
//         return 0;
//     return n+calculate(n-1);
// }
// #include<stdio.h>

// int main(){
//     printf("%d",calculate(5));
//     return 0;
// }

//   #Code 49

// #include<stdio.h>

// int main(){
//     int arr[4] = {1,2,8,9};
//     for(int i=3;i>=0;i--){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

//   #Code 50

// #include<stdio.h>

// int main(){
//     int arr[4] = {1,2,8,9};
//     int n;
//     int found = 0;
//     printf("Write the no.: ");
//     scanf("%d",&n);
//     for(int i=0;i<4;i++){
//         if(n==arr[i])
//          found = 1;
//     }

//     if(found == 1) {
//         printf("The %d is in the array", n);
//     }
//     else {
//         printf("The %d isn't in the array", n);
//     }

//     return 0;
// }

//   #Code 51

// #include<stdio.h>

// int main(){
//     char str[] = "Hello";
//     int count = 0;

// for(int i = 0; str[i] != '\0'; i++)
// {
//     count++;

// }
// for(int i=count-1;i>=0;i--)
// printf("%c",str[i]);
//     return 0;
// }

//   #Code 52

// int *a;
// int *b;
// void swap(int *a,int *b){
//     int temp =  *a;
//     *a = *b;
//     *b = temp;
// }
// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = 9;
//     swap(&x,&y);
//     printf("%d %d",x,y);
//     return 0;
// }

//   #Code 53

//  #include<stdio.h>

//  int main(){
//     int arr[6]={1,2,3,4,9,8};
//     int *p=arr;
//     int largest = 0;
//     for(int i=0;i<=5;i++){
//         printf("%d\n", *(p + i));
//     }
//       for(int i=0;i<=5;i++){
//         if(*(p+i) > largest)
//         largest = *(p+i);

//       }
// printf("The largest element is %d",largest);
//     return 0;
//  }

//   #Code 54

// struct lol
// {
//     char name[20];
//     int age;
// };

// #include<stdio.h>

// int main(){
//     struct lol l1={"lol",18};
//     struct lol *p = &l1;
//     printf("%s\n",(*p).name);
//     printf("%d\n",(*p).age);
//     return 0;
// }

//   #Code 55

// typedef struct
// {
//     char name[30];
//     int age;
//     int marks;
// } Student;

// #include<stdio.h>

// int main(){
//     int highest = 0;
//     Student s1[3] = {
//     {"bankai", 18, 98},
//     {"wow", 17, 99},
//     {"genius", 16, 100}
// };
// for(int i=0;i<3;i++){
//     if(s1[i].marks>highest)
//     highest = s1[i].marks;
// }
// printf("Highest marks %d",highest);
//     return 0;
// }

//   #Code 56

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *p=malloc(5*sizeof(int));
//     p=realloc(p,10*sizeof*p);
//     for(int i=0;i<10;i++){
//         printf("Write the no.: ");
//         scanf("%d",&p[i]);
//     }
//      for(int i=0;i<10;i++){
//         printf("%d\n",p[i]);
//      }
//     return 0;
// }

//   #Code 57

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Write the no. of array u wanna store.: ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Write the number: ");
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     int min = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < min)
//             min = arr[i];
//     }
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     printf("The max element is %d\n", max);
//     printf("The min element is %d\n", min);

//     return 0;
// }

//   #Code 58

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     printf("Write the no of array.: ");
//     scanf("%d",&n);
//     int *p = malloc(n*sizeof(int));
//     for(int i=0;i<n;i++){
//         printf("Write the no.: ");
//         scanf("%d",&p[i]);
//     }

//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum = sum + p[i];
//     }
//     printf("The sum of all element is %d\n",sum);
//     printf("The average is %d\n",sum/n);
//     p = realloc(p,2*n*sizeof *p);
//     for(int i=n;i<2*n;i++){
//         printf("Write the no.: ");
//         scanf("%d",&p[i]);
//     }
//     for(int i=0;i<2*n;i++){
//         printf("%d\n",p[i]);
//     }
//     free(p);
//     return 0;
// }

//   #Code 59

// #include<stdio.h>

// int main(){
//     char word[20];
//     int length = 0;
//     int vowel = 0;
//     char reverse[20];
//     int palindrome = 0;
//     printf("Write the word.: ");
//     scanf("%s",word);
//     printf("%s\n",word);
//     for(int i = 0; word[i] != '\0'; i++){
//     length++;
//     }
//     printf("The length of string is %d\n",length);
//    for(int i = 0; word[i] != '\0'; i++){
//     if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
//    word[i] == 'o' || word[i] == 'u')
//     vowel++;
//    }
//    printf("The no. of vowel is %d\n",vowel);

//    for(int i = length - 1, j = 0; i >= 0; i--, j++){
//     reverse[j] = word[i];

// }
// reverse[length] = '\0';
// printf("The reversed word is %s\n",reverse);
// for(int i=0;i<length;i++)
// if(word[i]==reverse[i])
// palindrome++;
// if(palindrome==length)
// printf("The word %s is palindrome",word);
// else
// printf("The word %s isnt palindrome",word);
//     return 0;
// }

//   #Code 60

// struct student
// {
//     char name[50];
//     int roll;
//     int marks;
// };
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     int highest = 0;
//     printf("Write the no. of students.: ");
//     scanf("%d", &n);
//     struct student *arr = malloc(n * sizeof(struct student));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (j == 0)
//             {
//                 printf("Enter name: ");
//                 scanf("%s", arr[i].name);
//             }

//             else if (j == 1)
//             {
//                 printf("Enter roll: ");
//                 scanf("%d", &arr[i].roll);
//             }

//             else if (j == 2)
//             {
//                 printf("Enter marks: ");
//                 scanf("%d", &arr[i].marks);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i].marks > highest)
//             highest = arr[i].marks;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (highest == arr[i].marks)
//             printf("%s got the highest marks %d\n", arr[i].name, highest);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Name: %s ", arr[i].name);
//         printf("Roll: %d ", arr[i].roll);
//         printf("Marks: %d\n", arr[i].marks);
//     }
//     free(arr);

//     return 0;
// }

//   #Code 61

// #include <stdio.h>

// void mystery(int *a, int *b)
// {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

// int main()
// {
//     int x = 7;
//     int y = 12;

//     mystery(&x, &y);

//     printf("%d %d\n", x, y);
//     return 0;
// }

//   #Code 62

// #include<stdio.h>

// int main(){
//     int arr[6] = {4, 8, 15, 16, 23, 42};

// int *p = arr;
//     for(int i=5;i>=0;i--){
//         printf("%d\n",*(p+i));
//     }
//     return 0;
// }

//   #Code 63

// #include<stdio.h>

// void reverse(int *arr)
// { int n = 0;
//     for (int i = 0, j = 3; i < 4 && j >= 0 && i < j; i++, j--){
//         if(*(arr+i)!=*(arr+j)){
//           n=*(arr + i);
//          *(arr + i) = *(arr + j);
//          *(arr + j) = n;}
//     }
// }

// int main(){
//     int arr[4]={1,2,3,4};
//     int *p=arr;
//     reverse(arr);
//     for(int i=0;i<4;i++){
//         printf("%d\n",*(p+i));
//     }

//     return 0;
// }

//   #Code 64

// #include<stdio.h>

// int has_pair_sum(int *arr, int target)
// {
//     for(int i=0;i<6;i++){
//         for(int j=i;j<6;j++){
//             if (*(arr + i )+ *(arr + j)==target){
//                 printf("%d + %d = %d\n",*(arr + i ), *(arr + j), target);
//             }
//         }
//     }
// }

// int main(){
//    int arr[6] = {1, 3, 4, 6, 8, 11};
// has_pair_sum(arr,14);
//     return 0;
// }

//   #Code 65

// #include<stdio.h>

// int main(){
//     int arr[] = {10, 20, 30, 40, 50};

// int *p = arr + 1; =20
// int *q = arr + 4; =50

// printf("%d\n", *p++); =20
// printf("%d\n", (*q)--); =50
// printf("%d\n", *(p + 1)); =40
// printf("%d\n", q[-2]); =30
// printf("%ld\n", q - p); = -2
//     return 0;
// }

//   #Code 66

// #include <stdio.h>

// void reverse(char *s)
// {
//     char *p = s;

//     while (*p != '\0')
//     {
//         p++;
//     }

//     p--;

//     while ( *s !=  *p){
//         char n;
//          n =  *s;
//         *s = *p;
//         *p = n;
//         s++;
//         p--;

//     }
// }

// int main()
// {
//     char s[100];
//     printf("Write the word: ");
//     scanf("%s", s);
//     reverse(s);
//     printf("%s",s);
//     return 0;
// }

//   #Code 67

// #include <stdio.h>

// void palindrome(char *s)
// {
//     char *p = s;
//     int isPalindrome = 1;

//     while (*p != '\0')
//     {
//         p++;
//     }

//     p--;

//     while (s < p)
//     {
//         if (*s != *p)
//         {
//             isPalindrome = 0;
//             break;
//         }

//         s++;
//         p--;
//     }

//     if (isPalindrome)
//     {
//         printf("The word is palindrome");
//     }
//     else
//     {
//         printf("The word isnt palindrome");
//     }
// }

// int main()
// {
//     char s[100];

//     printf("Write the word: ");
//     scanf("%s", s);

//     palindrome(s);

//     return 0;
// }

//   #Code 68

// #include<stdio.h>
// void compress(char *s){
//     char *p =s;
//     char *n =s;
//     while(*p != '\0'){
//         n++;
//         if(*p ==*n){
//             n++;

//         }
//         else{
//             p++;
//             *p=*n;
//         }
//     }
//     printf("%s",s);
// }

// int main(){
//     char s[100];
//     printf("Write the name: ");
//     scanf("%s",s);
//     compress(s);
//     return 0;
// }

//   #Code 69

// #include <stdio.h>

// void reverse(char *s)
// {
//     char *p = s;

//     while (*p != '\0')
//     {
//         p++;
//     }

//     p--;

//     while (s < p)
//     {

//         while (s < p &&
//                !(*s == 'a' || *s == 'e' || *s == 'i' ||
//                  *s == 'o' || *s == 'u'))
//         {
//             s++;
//         }

//         while (s < p &&
//                !(*p == 'a' || *p == 'e' || *p == 'i' ||
//                  *p == 'o' || *p == 'u'))
//         {
//             p--;
//         }

//         if (s < p)
//         {
//             char n = *s;
//             *s = *p;
//             *p = n;

//             s++;
//             p--;
//         }
//     }
// }

// int main()
// {
//     char s[100];

//     printf("Write the word: ");
//     scanf("%s", s);

//     reverse(s);

//     printf("%s", s);

//     return 0;
// }

//   #Code 70

#include <stdio.h>

void reverse(char *s)
{
    char *p = s;

    while (*p != '\0')
    {
        p++;
    }

    p--;

    while ( *s !=  *p){
        char n;
         n =  *s;
        *s = *p;
        *p = n;
        s++;
        p--;

    }
}

int main()
{
    char s[100];
    printf("Write the word: ");
     fgets(s, sizeof(s), stdin);
    reverse(s);
    printf("%s",s);
    return 0;
}