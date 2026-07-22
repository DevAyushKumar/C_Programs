#include <stdio.h>

int main(void) {
    //Question 1
    int q1a,q1b;

    printf("Enter the first side of square:");
    scanf("%d", &q1a);

    printf("Enter the second side of the square:");
    scanf("%d", &q1b);

    int multiple = q1a*q1b;
    printf("Area of the square is: %d", multiple);

    //Question 2
        int q2;
    float q2a = 3.14;

    printf("Enter the radius : ");
    scanf("%d", &q2);
    
    float area = q2*q2*q2a;
    printf("The total are of the circle is: %f", area);

    //Question 3
        int q3=1.999999;
    printf("%d", q3);

    //Question 4
    int q4a = 5*2-2*3;
    printf("%d", q4a);

    int q4b = 5*2/2*3;
    printf("%d", q4b);

    int q4c = 5*(2/2)*3;
    printf("%d", q4c);

    int q4d = 5+2/2*3;
    printf("%d", q4d);

    //Question 5
    int q5a;
    printf("Enter the number: ");
    scanf("%d", &q5a);
    printf("%d", q5a % 2 == 0);

    //Question 6 and 7 are same thing

    //Question 8
    int sundaya = 1;
    int raininga = 1;
    printf("%d", sundaya && raininga);   

    int mondayb = 1;
    int rainingb = 1;
    printf("%d", mondayb || rainingb);

    int q8;
    printf("Enter the number you want to chek: ");
    scanf("&d", &q8);
    printf("%d", q8>9 && q8<100);

    //Question 9
    int a;
    printf("Enter marks: ");
    scanf("%d", &a);
    
    if(a>30){
        printf("Student is pass");
    }if(a<=30){
        printf("Student is fail");
    }else{
        printf("Enter a valid marks");
    }

    //Question 10
    int a;
    printf("Enter the marks: ");
    scanf("%d", &a);

    if(a<30){
        printf("C");
    }else if(30<=a<70){
        printf("B");
    }else if(70<=a<90){
        printf("A");
    }else if(90<=a<=100){
        printf("A+");
    }else{
        printf("Please enter a valid marks");
    }

    //Question 11
   int x=2;
    if(x=1){
        printf("x is equal to 1");
    }else{
        printf("x is not equal to 1");
    }

    //Question 12
    char a;
    printf("Enter the character: ");
    scanf("%c", &a);

    if(a >= 'A' && a <= 'Z'){
        printf("Upper case");
    }else if(a >= 'a' && a <= 'z'){
        printf("Lower case");
    }else{
        printf("Not english");
    }

    //Question 13
    for(int i=0; i<=10; i=i+1){
    printf("%d \n", i);
    }

    //Question 14
     //using while loop
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int i =0;
    while(i<=n){
        printf("%d", i);
        i++;
    }
     //using for loop
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i=0; i<=n;i++){
        printf("%d \n", i);
    }

    //Question 15
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum =0 ;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){
        sum=sum+i;
        printf("%d \n",j);
    }
    printf("Sum is %d \n", sum);

    //Question 16
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a=1;
    for(int i=n; a<=10; i++){
        printf("%d \n", a*n);
        a++;
    }

    //Question 17
    int a;
    printf("Enter how many nummbers you want to enter: ");
    scanf("%d", &a);
    int b;
    for(int i=0, m; i<=a; i++){
        printf("Enter even number: ");
        scanf("%d", &b);
        if(b%2==0){
            printf("even number: %d \n", b);
        }else{
            printf("Odd number found");
            break;
        }
    }

    //Question 18
    int b;
    for(int i=0; 1; i++){
        printf("Enter even number: ");
        scanf("%d", &b);
        if( b%7 !=0){
            printf("Not a multiple of 7: %d \n", b);
        }else{
            printf("Is a multiple of 7: %d ]-\n", b);
            break;
        }
    }

    //Question 19
    for(int i=1; i<=10; i++){
    if(i!=6){
    printf("%d \n",i);
        }else{
        continue;
    }
    }

    //Question 20
        for(int i=5; i<=50; i++){
        if(i % 2 != 0){
        printf("%d \n", i);
        }else{
            continue;
        }
    }

    //Question 21
    int n;
    int fac =1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fac = fac*i;
    }
    printf("factorial is: %d",fac);

    //Question 22
    int a;
    int mul;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(int i=10; i>=1; i--){
        mul=i*a;
        printf("%d \n", mul);
    }

    //Question 23
    for(int i=5, sum=0; i<=50; i++){
        sum=sum+i;
        printf("%d \n", sum);
    }
    return 0;
}

//Question 24
void Hello();
void goodbye();
int main(){
    Hello();
    goodbye();
    return 0;
}
void Hello(){
    printf("Hello \n");
}
void goodbye(){
    printf("Good bye \n");
}

//Question 25
void indian();
void french();
int main(){
    char a;
    char i;
    char f;
    printf("Enter your nationality i for indian and f for french: ");
    scanf("%c", &a);
    if(a=='i'){
        indian();
    }else{
        french();
    }
    return 0;
}
void indian(){
    printf("Namaste");
}
void french(){
    printf("Bonjour");
}

//Question 26
#include<math.h>
int main(){
    int n=4;
    printf("%f", pow(n,2));
}

//Question 27
#include<math.h>
void areaS();
void areaC();
void areaR();
int main(){
    char a;
    printf("To enter calculate the area of square use S, to calculate the area of rectangle use R, to calculate the area of circle use C: ");
    scanf(" %c", &a);
    if(a=='S'){
        areaS();
    }else if(a=='R'){
        areaR();
    }else if(a=='C'){
        areaC();
    }else{
        printf("Please enter a valid value");
    }
    return 0;
}
void areaS(){
    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    printf("The area of square is: %d", side*side);
}
void areaC(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    radius = 3.14 *radius*radius;
    printf("The area of circle is: %f", radius);
}
void areaR(){
    int len;
    int bre;
    int area;
    printf("Enter the length of rectangle: ");
    scanf("%d", &len);
    printf("Enter the breath of the rectangle: ");
    scanf("%d", &bre);
    area = len*bre;
    printf("Area of the rectangle is: %d", area);
}

//Question 28
void hello();
int main(){
    for(int i=1; i<=5; i++){
        hello();
    }
    return 0;
}
void hello(){
    printf("Hello world \n");
}

//Question 29
void s(int n);
int main(){
    int n;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    s(n);
    return 0;
}
void s(int n){
    int sum;
    for(int i =0; i<=n; i++){
        sum =sum+i;
    }
    printf("The sum of n are %d ", sum);

}
//Alternate meathod
int fact(int n);

int main(){
    printf("Factorial is: %d", fact(6));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }else{
        int factNm1 = fact(n-1);
        int factN = factNm1 * n;
        return factN;

    }
}

//Question 30
float conv(float cel);
int main(){
    float cel;
    printf("Enter the degree in celcius: ");
    scanf("%f", &cel);
    float far = conv(cel);
    printf("Temperature in farenhite is: %f", far);
    return 0;
}
float conv(float cel){
    float f;
    f = cel * (9/5) + 32;
    return f;
}

//Question 31
float percent(int Tmarks);
int main(){
    float Sc,Ma,Sa,Total;
    printf("Enter the marks of Science: ");
    scanf("%f", &Sc);
    printf("Enter the marks of Maths: ");
    scanf("%f", &Ma);
    printf("Enter the marks of Sanskrit: ");
    scanf("%f", &Sa);
    Total = Sc+Ma+Sa;
    float res = percent(Total);
    printf("The total percent is: %f",res);
}

float percent(int marks){
    marks = marks / 3;
    return marks;
}

//Question 32
int fib(int n);
int main(){
    int n;
    printf("Enter the number you want fibonaci series of: ");
    scanf("%d",&n);
    int fibN = fib(n);
    printf("the fibonaci serier is: %d", fibN);
    return 0;
}

int fib(int n){
    if( n==0 || n==1){
        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }
    }else{
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN =fibNm1 + fibNm2;
    return fibN;
    }
}

//Question 32 is same as 31

//Question 33
int main(){
int *ptr;
int x;

ptr = &x;
*ptr = 0;
 printf("x = %d\n",x);
 printf("*ptr = %d\n, *ptr");

 *ptr += 5;
 printf("x = %d\n", x);
 printf("*ptr = %d\n",*ptr);

 (*ptr)++;
 printf("x = %d\n",x);
 printf("*ptr = %d\n", *ptr);
    return 0;
}

//Question 34
int main(){
    int i=5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
    return 0;
}

//Question 35
void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
    int x = 3, y = 5;
    _swap(&x, &y);
    printf("x = %d, y = %d", x, y);
    return 0;
}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d", a, b);
}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

//Question 36
void printAddress(int n);

int main(){
    int n = 4;

    printf("%p\n", &n);
    printAddress(n);

    return 0;
}

void printAddress(int n){
    printf("%p\n", &n);
}

//Question 37
void dowork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3, b = 4;
    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);
    printf("sum = %d, prod = %d, avg = %d");
    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}

//Question 38
void printaddress(int n);

int main(){
    int n = 4;

    printf("%p\n", &n);
    printaddress(n);

    return 0;
}

void printaddress(int n){
    printf("%p\n", &n);
}

//Question 39
void work(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the seconnd number: ");
    scanf("%d", &b);

    int sum, prod, avg;
    
    work(a,b, &sum, &prod, &avg);
    printf("The sum is %d\n the product is %d\n the average is %d\n", sum, prod, avg);
    
    return 0;
}

void work(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a+b)/2;
}

//Question 40
int main(){
    float price[3];

    printf("Enter the price of first product: ");
    scanf("%f", &price[0]);

    printf("Enter the price of second product: ");
    scanf("%f", &price[1]);

    printf("Enter the price of third product: ");
    scanf("%f", &price[2]);

    float gst[3];

    gst[0] = (price[0] * 0.18) + price[0];
    gst[1] = (price[1] * 0.18) + price[1];
    gst[2] = (price[2] * 0.18) + price[2];

    printf("The price of product 1 is %f", gst[0]);
    printf("The price of product 2 is %f", gst[1]);
    printf("The price of product 3 is %f", gst[2]);

    return 0;
}

//Question 41
int main(){
    int aadhar[10];
    int *ptr = &aadhar[0];
    for(int i=0; i<=9; i++){
        printf("Enter aadhar numbers: ");
        scanf("%d",(ptr + i));
    }

    for(int i=0; i<=9; i++){
        printf("%d", *(ptr+i));
    }
    return 0;
}

//Question 42
void numbers(int arr[], int n);

int main(){
    int n;
    int arr[n];
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
    printf("Enter numbrs: ");
    scanf("%d", &arr[i]);
    }
    numbers(arr, n);
    return 0;
}

void numbers(int arr[], int n){
    for(int i=0; i<=n; i++){
        printf("%d\n",arr[i]);
    }
}

//Question 42
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int total = 0;
    for(int i=0; i<=9;i++){
        if(arr[i]%2==0){
            continue;
        }else{
            total++;
        }
    }
    printf("Total number of odd nunbers: %d", total);
    return 0;
}

//Question 43
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n", *(arr+2));
    printf("%d\n", *(arr+5));
    return 0;
}

//Question 44
int main(){
    int n;
    printf("Enter how many numbers u want: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n;i++){
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n/2;i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i]= secondval;
        arr[n-i-1]=firstval;
    }
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}

//Question 45
int main(){
    int n;
    printf("Enter the n numbers: ");
    scanf("%d", &n);

    int fib[n];
    fib[0]=0;
    printf("%d\n", fib[0]);

    if(n>=1){
        fib[1]=1;
        printf("%d\n", fib[1]);
    }

    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\n", fib[i]);
    }
    return 0;
}

//Question 46
void tables(int arr[][10], int n, int m, int number);

int main(){
    int table[2][10];
    tables(table, 0, 10, 2);
    tables(table, 1, 10, 3);

    for(int i=0; i<10; i++){
        printf("%d\n", table[0][i]);
    }

    for(int i=0; i<10; i++){
        printf("%d\n", table[1][i]);
    }
    return 0;
}

void tables(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}

//Questions 47
void printstring(char arr[]);

int main(){
    char firstname[]= "Ayush";
    char lastname[]= "Kumar";

    printstring(firstname);
    printstring(lastname);
    return 0;
}

void printstring(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}

//Question 48
int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Your name is: %s", name);
    return 0;
}

//Question 49

int length(char arr[]);

int main(){
    char name[100];
    printf("Enter name: ");
    fgets(name, 100, stdin);
    
    int a;
    a = length(name);
    printf("The length of your name is: %d", a);
    return 0;
}

int length(char arr[]){
    int sum=0;
    for(int i=0; arr[i] != '\0'; i++){
        sum ++;
    }
    return sum-1;
}

//Question 50
#include <string.h>

int main(){
    char str[100];
    char ch;
    int i = 0;
    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}

//Question 51
void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newpassword[200];

    strcpy(newpassword, password);
    strcat(newpassword, salt);

    puts(newpassword);
}

//Question 52
void slice(char str[], int n, int m);

int main(){
    char str[100];
    int n,m;
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the start of slicing: ");
    scanf("%d", &n);
    printf("Enter the end of slicing: ");
    scanf("%d", &m);
    slice(str, n, m);
    return 0;
}

void slice(char str[], int n, int m){
    char newstr[100];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}

//Quesiton 53
int occurance(char str[]);

int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Total numbers of vowels are: %d", occurance(str));
    return 0;
}

int occurance(char str[]){
    int occur = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]=='a' || str[i] == 'e' ||str[i] == 'i' || str[i] == 'o' ||str[i]== 'u'){
            occur ++;
        }
    }
    return occur;
}

//Question 54
void checkchar(char str[], char ch);

int main(){
    char str[100];
    char ch;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    printf("Enter the character to be searched: ");
    scanf(" %c", &ch);

    checkchar(str, ch);
    return 0;
}

void checkchar(char str[], char ch){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i]==ch){
            printf("The character exist");
            return;
        }
        
    }
    printf("The character is not present");
}

//Question 55
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Ayush");

    struct student s2;
    s2.roll = 1664;
    s2.cgpa = 9.2;
    strcpy(s2.name, "Ayush");

    struct student s3;
    s3.roll = 1664;
    s3.cgpa = 9.2;
    strcpy(s3.name, "Ayush");
    return 0;
}

//Question 56
typedef struct Addressdetails{
    int HouseNo;
    int block;
    char cityName[100];
} Ad;

void print(struct Addressdetails add);

int main(){
    char name1, name2, name3, name4, name5;
    struct Addressdetails adds[5];

    printf("Enter the details of person 1: ");
    scanf("%d", &adds[0].HouseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].cityName);

    printf("Enter the details of person 2: ");
    scanf("%d", &adds[1].HouseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].cityName);

    printf("Enter the details of person 3: ");
    scanf("%d", &adds[2].HouseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].cityName);

    printf("Enter the details of person 4: ");
    scanf("%d", &adds[3].HouseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", &adds[3].cityName);

    printf("Enter the details of person 5: ");
    scanf("%d", &adds[4].HouseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", &adds[4].cityName);

    print(adds[0]);
    print(adds[1]);
    print(adds[2]);
    print(adds[3]);
    print(adds[4]);
    return 0;
}

void print(struct Addressdetails adds){
    printf("The address is : %d, %d, %s", adds.HouseNo, adds.block, adds.cityName);
}

//Question 57
struct vector{
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct vector v1 = {5,10};
    struct vector v2 = {10,19};
    struct vector sum = {0};

    calcSum(v1, v2, sum);
    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("The sum of x are: %d\n", sum.x);
    printf("The sum of y are: %d\n", sum.y);
}

//Question 58
struct complexNumber{
    int real;
    int img;
};

int main(){
    struct complexNumber number={1,2};
    struct complexNumber *ptr = &number;
    printf("The imaginary part is: %d", ptr-> img);
    printf("The real part is: %d", ptr-> real);
    return 0;
}

//Question 59
typedef struct BankAccount{
    int accountNumber;
    char name[100];
}acc;

int main(){
    acc acc1 = {123, "ayush"};
    acc acc2 = {234, "radhika"};

    printf("acc no = %d\n", acc1.accountNumber);
    printf("name = %s", acc1.name);
    return 0;
}

//Question 60
//a

//Question 61
int main(){
    FILE *fptr;
    fptr = fopen("Testing.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    return 0;
}

//Question 62
int main(){
    FILE *details;
    details = fopen("Student", "w");

    char name[100];
    int age;
    float cgpa;

        printf("Enter name: ");
        fgets(name, 100, stdin);
        printf("Enter age: ");
        scanf("%d", &age);
        printf("Enter cgpa: ");
        scanf("%f", &cgpa);
        fprintf(details, "%s\t", name);
        fprintf(details, "%d\t", age);
        fprintf(details, "%f\t", cgpa);
    return 0;
}

//Question 63
int main(){
    FILE *fptr;
    fptr = fopen("Odd.txt", "r");

    int a,b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    FILE *ptr;
    ptr = fopen("Odd.txt", "w");

    int sum = a + b;
    fprintf(ptr, "%d", sum);

    fclose(ptr);
    return 0;
}

//Question 64
#include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;

    for(int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}

//Question 65
int main(){
    int *ptr;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i=0; i<=n; i++){
        printf("%d", ptr[i]);
    }
    return 0;
}

//Question 66
int main(){
    int n;
    int *ptr;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int *) calloc(n, sizeof(int));

    for(int i=0; i<=n; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int *) calloc(2, sizeof(int));
    for(int i=0; i<=2; i++){
        printf("%d", ptr[i]);
    }
    return 0;
}

//Question 67
int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);

    printf("Enter 8 numbers: ");
    for(int i=0; i<8; i++){
        scanf("%d\n", &ptr[i]);
    }

    for(int i=0; i<8; i++){
        printf("The number %d is %d\n", i, ptr[i]);
    }
    return 0;
}

//Question 68
int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }
    return 0;
}

//Question 70
int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    for(int i=0, j=0; i<=10; i++, j++){
        if(i%2 != 0){
            ptr[i] = i;
        }
    }

    for(int i=0; i<5; i++){
        printf("%d", ptr[i]);
    }

    printf("\n");
    ptr = realloc(ptr, 6);

    for(int i=0,j=0; i<=10; i++){
        if(i%2 == 0){
            ptr[i]=i;
        }
    }
    
    for(int i=0; i<=10; i++){
        printf("%d", ptr[i]);
    }
    return 0;
}
