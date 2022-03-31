#include "main.h"
#include<stdio.h>

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

void test_add()
{
    if(0 == add(0,0))
    {
       printf("Add function works for null value.\n\n");
    }
    else
    {
       printf("Add fumction is not working for null value.\n\n");
    }
    if(10 == add(7,3))
    {
       printf("Add function works for positive numbers.\n\n");
    }
    else
    {
       printf("Add fumction is not working for positive numbers.\n\n");
    }
    if(-10 == add(-7,-3))
    {
       printf("Add function works for negative numbers.\n\n");
    }
    else
    {
       printf("Add fumction is not working for negative numbers.\n\n");
    }
    if(-10== add(-20,10))
    {
       printf("Add function works for different sign.\n\n");
    }
    else
    {
       printf("Add fumction is not working for different sign.\n\n");
    }
}
int avg(int c)
{
    int d;
    d=c/2;
    return d;
}

void test_avg()
{
    if(0==avg(0))
    {
       printf("Average function works for null value.\n\n");
    }
    else
    {
       printf("Average function does not works for null value.\n\n");
    }
    if(5==avg(10))
    {
       printf("Average function works for positive value.\n\n");
    }
    else
    {
       printf("Average function does not works for positive value.\n\n");
    }
    if(-5==avg(-10))
    {
       printf("Average function works for negative value.\n\n");
    }
    else
    {
       printf("Average function does not works for negative value.\n\n");
    }
}

int percentage(int d)
{
    int p;
    p=d*100;
    return p;
}

void test_percentage()
{
  if(0==percentage(0))
  {
      printf("Percentage function works for null value\n\n");
  }
  else
  {
      printf("Percentage function does not work for null value\n\n");
  }
  if(100==percentage(1))
  {
      printf("Percentage function works for positive value\n\n");
  }
  else
  {
      printf("Percentage function does not work for positive value\n\n");
  }
  if(-100==percentage(-1))
  {
      printf("Percentage function works for negative value\n\n");
  }
  else
  {
      printf("Percentage function does not work for negative value\n\n");
  }
}

 