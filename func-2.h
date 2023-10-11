#include<iostream>

#include<stdlib.h>
using namespace std;
class Node

{

public:
int info;
Node* next;
};

class List:public Node
{
Node *first,*last;
public:
List()
{
first=NULL;
last=NULL;
}

void create();
void insert();
void delet();
void display();
void search();
};

class Employee {
private $hourly_rate;
private $monthly_salary;
private $vacation_days;
public function get_hourly_rate() {
return $this->hourly_rate;
}
public function get_monthly_salary() {
return $this->monthly_salary;
}
public function get_vacation_days() {
return $this->vacation_days;
}
}