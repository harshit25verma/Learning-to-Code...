class employee
{
    char name[50];
    int cash;

    public:

    employee(char emp_name[50], int emp_cash)
    {
        name = emp_name;
        cash = emp_cash;
    }

    void print_emp_details();
    void pay_cash(int amount);
}
 // function to print info
void employee :: print_emp_details()
{
	printf("Name: %s\n", name);
    printf("Cash: %d\n", cash);
}
// function to pay an employee specified amount of cash
void employee :: pay_cash(int amount)
{
	cash += amount;
}
//subclass programmer
class programmer : public employee
{
    char emp_role[50];

    public:
    programmer()
    {
        emp_role = "Programmer";
    }
    void print_emp_details();
}

void programmer :: print_emp_details()
{
	printf("Name: %s\n", name);
    printf("Cash: %d\n", cash);
    printf("Employee Role: %s\n", emp_role);
}
// subclass manager
class manager : public employee
{
    char emp_role[50];

    public:
    programmer()
    {
        emp_role = "Manager";
    }
    void print_emp_details();
}
//overloading employee method
void manager :: print_emp_details()
{
	printf("Name: %s\n", name);
    printf("Cash: %d\n", cash);
    printf("Employee Role: %s\n", emp_role);
}