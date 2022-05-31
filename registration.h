#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<stdio_ext.h>

#define ROW_SIZE 30
#define COL_SIZE 30
#define MAX_LEN 80

typedef struct employee_data
{
    char fields[COL_SIZE];
    struct employee_data *link;
}Employee_training_data;

int Forms_count; //Variable to store count of training registration forms created
char Forms[ROW_SIZE][COL_SIZE]; //2d-array to store names of trainings
Employee_training_data *First_field[COL_SIZE]; //An array of pointer to store the address of first field in each training registration form

void Registration();
int main();
void create_training_registration_form();
void delete_training_registration_form();
void send_training_registration_form();

