#include <unistd.h>
#include "holberton.h"

/**
 * main - Check description
 * Description: It prints the word Putchar, followed by a new line.
 * Return: 0.
 */

int main(void)
{
  
  char word[7] = "Putchar";
  
  int i;
  

  
  for (i = 0; i < 9; i++)
    
    _putchar(word[i]);
  
  _putchar('\n');
  

  
  return (0);
  
