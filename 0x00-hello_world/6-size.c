<<<<<<< HEAD
​#​include​ ​<​stdio.h​> 
  
 ​/​ 
 ​ * main - Entry point 
 ​ * 
 ​ * Return: Always 0 (Success) 
 ​ ​*/ 
 ​int​ ​main​(​void​) 
 ​{ 
 ​        ​printf​(​"​Size of a char: ​%zu​ byte(s)​\n​"​, ​sizeof​(​char​)); 
 ​        ​printf​(​"​Size of an int: ​%zu​ byte(s)​\n​"​, ​sizeof​(​int​)); 
 ​        ​printf​(​"​Size of a long int: ​%zu​ byte(s)​\n​"​, ​sizeof​(​long​ ​int​)); 
 ​        ​printf​(​"​Size of a long long int: ​%zu​ byte(s)​\n​"​, ​sizeof​(​long​ ​long​ ​int​)); 
 ​        ​printf​(​"​Size of a float: ​%zu​ byte(s)​\n​"​, ​sizeof​(​float​)); 
 ​        ​return​ (​0​); 
 ​}
=======
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        printf("Size of a char: %zu byte(s)\n", sizeof(char));
        printf("Size of an int: %zu byte(s)\n", sizeof(int));
        printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %zu byte(s)\n", sizeof(float));
        return (0);
}
>>>>>>> 415e92f0e994f7d48e0a7cda7b277de12d4a2ad3
