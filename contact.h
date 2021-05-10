#ifndef _PRODU_H
#define _PRODU_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    char number[12];
    int del;
}Contact;

int createContact(Contact *p);
void readContact(Contact p);
int updateContact(Contact *p);
int deleteContact(Contact *p);
int selectMenu();
void searchName(Contact *p, int count);
void searchNumber(Contact*p, int count);

#endif
