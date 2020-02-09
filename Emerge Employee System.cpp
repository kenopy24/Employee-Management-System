#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Data structure created
struct Employees
{
	string Name, Phone, Address, Department_Name, Employee_Number, Department_No; 
	int Salary = 0;
	int Performance = 0;
	Employees *next;
}*list, *temp;

//Class created
class EmployeeFunctions
{

	public:
		//add new employee into the linked system
		void setEmployee(string name, string phone, string address, string department_name, int performance, int salary, string employee_number, string department_no)
		{
			Employees * newnode = new Employees;
			newnode->Name = name;
			newnode->next = NULL;

			newnode->Phone = phone;
			newnode->next = NULL;

			newnode->Address = address;
			newnode->next = NULL;

			newnode->Department_Name = department_name;
			newnode->next = NULL;

			newnode->Performance = performance;
			newnode->next = NULL;

			newnode->Salary = salary;
			newnode->next = NULL;

			newnode->Employee_Number = employee_number;
			newnode->next = NULL;

			newnode->Department_No = department_no;
			newnode->next = NULL;

			if (list == NULL)
			{
				list = newnode;
			}
			else
			{
				newnode->next = list;
				list = newnode;
			}

			
		}

		//display the list
		void display()
		{
			temp = list;
			int choice;
			EmployeeFunctions M;

			cout << endl;

			cout << left << setw(15) << "Employee ID";
			cout << left << setw(15) << "Name";
			cout << left << setw(10) << "Salary";
			cout << left << setw(15) << "Phone";
			cout << left << setw(35) << "Address";
			cout << left << setw(18) << "Department ID";
			cout << left << setw(20) << "Department Name";
			cout << left << setw(15) << "Performance";

			cout << endl;
			while (temp != NULL)
			{

				cout << left << setw(15) << temp->Employee_Number;
				cout << left << setw(15) << temp->Name;
				cout << left << setw(10) << temp->Salary;
				cout << left << setw(15) << temp->Phone;
				cout << left << setw(35) << temp->Address;
				cout << left << setw(18) << temp->Department_No;
				cout << left << setw(20) << temp->Department_Name;
				cout << left << setw(15) << temp->Performance;
				temp = temp->next; //move to the next node
				cout << endl;
			}
			cout << endl;
			cout << "Would you like to return back to the Main Menu ?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
				M.MainMenu();
				break;

			case 2:
				exit(0);
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
		}

		//Add new employees into the linked list
		void insertNewEmployee()
		{
			string name, phone, address, department_name, employee_number, department_no;
			int salary, choice, performance;
			EmployeeFunctions B;


			cout << "Enter Employee Name:";
			cin >> ws;
			getline(cin, name);
			cout << endl;

			cout << "Enter Phone Number:";
			cin >> ws;
			getline(cin, phone);
			cout << endl;

			cout << "Enter Address:";
			cin >> ws;
			getline(cin, address);
			cout << endl;

			cout << "Enter Department Name:";
			cin >> department_name;
			cout << endl;

			cout << "Enter Overall Performance:";
			cin >> performance;
			cout << endl;

			cout << "Enter Salary:";
			cin >> salary;
			cout << endl;

			cout << "Enter Employee ID:";
			cin >> employee_number;
			cout << endl;

			cout << "Enter Department Number:";
			cin >> department_no;
			cout << endl;

			B.setEmployee(name, phone, address, department_name, performance, salary, employee_number, department_no);

			cout << "Employee Added" << endl;
			cout << endl;

			cout << "Would you like to add another employee?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
				B.insertNewEmployee();
				break;

			case 2:
				B.MainMenu();
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				B.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				B.MainMenu();
			}

		}

		// Search Employee by using their ID (www.javatpoint.com, n.d.)
		void searchEmployeeID()
		{

			string EmpID;
			int choice;
			bool flag = 1;
			EmployeeFunctions M;
			temp = list;
			if (temp == NULL)
			{
				cout << "Empty List" << endl;
			}
			else
			{
				//ask user for input
				cout << "Enter employee ID: ";
				cin >> EmpID;
				cout << endl;
				//display the data
				cout << left << setw(15) << "Employee ID";
				cout << left << setw(15) << "Name";
				cout << left << setw(10) << "Salary";
				cout << left << setw(15) << "Phone";
				cout << left << setw(35) << "Address";
				cout << left << setw(18) << "Department ID";
				cout << left << setw(20) << "Department Name";
				cout << left << setw(15) << "Performance";
				cout << endl;
				while (temp != NULL)
				{
					if (temp->Employee_Number == EmpID) //if user input matach with the employee_number
					{
						cout << left << setw(15) << temp->Employee_Number;
						cout << left << setw(15) << temp->Name;
						cout << left << setw(10) << temp->Salary;
						cout << left << setw(15) << temp->Phone;
						cout << left << setw(35) << temp->Address;
						cout << left << setw(18) << temp->Department_No;
						cout << left << setw(20) << temp->Department_Name;
						cout << left << setw(15) << temp->Performance;

						cout << endl;

						flag = 0;
					}


					temp = temp->next; //move to the next node
				}
				if (flag == 1)
				{
					cout << "Employee not found" << endl;
				}


			}
			cout << endl;
			cout << "Would you like to return back to the Main Menu ?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
				M.MainMenu();
				break;

			case 2:
				exit(0);
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
		}

		//search employee by using performance (www.javatpoint.com, n.d.)
		void searchPerformance()
		{

			int OverallPerformance;
			bool flag = 1;
			int choice;
			EmployeeFunctions M;
			temp = list;
			if (temp == NULL)
			{
				cout << "Empty List" << endl;
			}
			else
			{
				cout << "Enter Overall Performance: ";
				cin >> OverallPerformance;
				cout << endl;
				cout << left << setw(15) << "Employee ID";
				cout << left << setw(15) << "Name";
				cout << left << setw(10) << "Salary";
				cout << left << setw(15) << "Phone";
				cout << left << setw(35) << "Address";
				cout << left << setw(18) << "Department ID";
				cout << left << setw(20) << "Department Name";
				cout << left << setw(15) << "Performance";
				cout << endl;
				while (temp != NULL)
				{
					if (temp->Performance == OverallPerformance)
					{
						cout << left << setw(15) << temp->Employee_Number;
						cout << left << setw(15) << temp->Name;
						cout << left << setw(10) << temp->Salary;
						cout << left << setw(15) << temp->Phone;
						cout << left << setw(35) << temp->Address;
						cout << left << setw(18) << temp->Department_No;
						cout << left << setw(20) << temp->Department_Name;
						cout << left << setw(15) << temp->Performance;

						cout << endl;

						flag = 0;
					}


					temp = temp->next; //move to the next node
				}
				//if flag is 1 means the employee doesnt exist in the linked list
				if (flag == 1)
				{
					cout << endl;
					cout << "Employee not found" << endl;
				}


			}
			cout << endl;
			cout << "Would you like to return back to the Main Menu ?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
				M.MainMenu();
				break;

			case 2:
				exit(0);
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}

		}

		//search employees by department name (www.javatpoint.com, n.d.)
		void searchDepartmentName()
		{

			string DepartmentName;
			bool flag = 1;
			int choice;
			EmployeeFunctions M;
			temp = list;
			if (temp == NULL)
			{
				cout << "Empty List" << endl;
			}
			else
			{
				cout << "Enter Department Name: ";
				cin >> DepartmentName;

				cout << endl;
				cout << left << setw(15) << "Employee ID";
				cout << left << setw(15) << "Name";
				cout << left << setw(10) << "Salary";
				cout << left << setw(15) << "Phone";
				cout << left << setw(35) << "Address";
				cout << left << setw(18) << "Department ID";
				cout << left << setw(20) << "Department Name";
				cout << left << setw(15) << "Performance";
				cout << endl;
				while (temp != NULL)
				{
					if (temp->Department_Name == DepartmentName)
					{
						cout << left << setw(15) << temp->Employee_Number;
						cout << left << setw(15) << temp->Name;
						cout << left << setw(10) << temp->Salary;
						cout << left << setw(15) << temp->Phone;
						cout << left << setw(35) << temp->Address;
						cout << left << setw(18) << temp->Department_No;
						cout << left << setw(20) << temp->Department_Name;
						cout << left << setw(15) << temp->Performance;

						cout << endl;
						flag = 0;
					}


					temp = temp->next;//move to the next node
				}
				if (flag == 1)
				{
					cout << "Employee not found" << endl;
				}

			}
			cout << endl;
			cout << "Would you like to return back to the Main Menu ?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
				M.MainMenu();
				break;

			case 2:
				exit(0);
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}

		}

		//update employee`s data (Cplusplus.com, 2017)
		void modifyEmployeeRecord(string empid)
		{
			int choice;
			Employees* update = list;
			EmployeeFunctions M;
			while (update != NULL)
			{
				if (update->Employee_Number == empid)
				{
					empid = update->Employee_Number;
					cout << "Enter Employee Name:";
					cin >> ws;
					getline(cin, update->Name);
					cout << endl;

					cout << "Enter Employee phone number:";
					cin >> ws;
					getline(cin, update->Phone);
					cout << endl;

					cout << "Enter Employee address:";
					cin >> ws;
					getline(cin, update->Address);
					cout << endl;
				}
				update = update->next; //move to the next node
			}
			cout << "Record has been updated successfully" << endl;
			return;
			cout << endl;
			cout << "Would you like to return back to the Main Menu ?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
				M.MainMenu();
				break;

			case 2:
				exit(0);
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}

		}

		//delete Employee record from the linked list (ReelLearning, 2012)
		void deleteEmployeeRecord(string DelEmpId)
		{
			EmployeeFunctions M;
			if (list == NULL)
			{
				cout << "List is Empty" << endl;
			}
			else
			{
				Employees* current = list;
				Employees* previous = list;

				while (current != NULL)
				{
					if (current->Employee_Number == DelEmpId)
					{
						break;
					}
					else
					{
						previous = current;
						current = current->next;
					}
				}
				if (current == NULL)
				{
					cout << "Record not found " << endl;
				}
				else
				{
					if (list == current)
					{
						list = list->next;
					}
					else
					{
						previous->next = current->next;
					}
					delete current;

				}
				cout << endl;
				cout << "Record Deleted" << endl;
				cout << endl;
			}

			//display main menu
			M.MainMenu();
		}

		//sort by Employee ID (Cplusplus.com, 2012)
		void sortingEmployeeID()
		{
			Employees* templist = list;
			string tempEmpID, tempName, tempPhone, tempAddress, tempDepartmentNo, tempDepartmentName;
			int tempSalary, tempPerformance;
			int counter = 0;
			while (templist)
			{
				templist = templist->next;
				counter++;
			}
			templist = list;
			for (int j = 0; j < counter; j++)
			{
				while (templist->next)
				{
					if (templist->Employee_Number > templist->next->Employee_Number)
					{
						//sorting part
						tempEmpID = templist->Employee_Number;
						templist->Employee_Number = templist->next->Employee_Number;
						templist->next->Employee_Number = tempEmpID;

						tempSalary = templist->Salary;
						templist->Salary = templist->next->Salary;
						templist->next->Salary = tempSalary;

						tempPerformance = templist->Performance;
						templist->Performance = templist->next->Performance;
						templist->next->Performance = tempPerformance;

						tempName = templist->Name;
						templist->Name = templist->next->Name;
						templist->next->Name = tempName;

						tempPhone = templist->Phone;
						templist->Phone = templist->next->Phone;
						templist->next->Phone = tempPhone;

						tempAddress = templist->Address;
						templist->Address = templist->next->Address;
						templist->next->Address = tempAddress;

						tempDepartmentNo = templist->Department_No;
						templist->Department_No = templist->next->Department_No;
						templist->next->Department_No = tempDepartmentNo;

						tempDepartmentName = templist->Department_Name;
						templist->Department_Name = templist->next->Department_Name;
						templist->next->Department_Name = tempDepartmentName;
					}
					else
					{
						templist = templist->next;
					}
				}
				templist = list;
			}

		}

		//sort by salary (Cplusplus.com, 2012)
		void sortingSalary()
		{
			Employees* templist = list;
			string tempEmpID, tempName, tempPhone, tempAddress, tempDepartmentNo, tempDepartmentName;
			int tempSalary, tempPerformance;
			int counter = 0;
			while (templist)
			{
				templist = templist->next;
				counter++;
			}
			templist = list;
			for (int j = 0; j < counter; j++)
			{
				while (templist->next)
				{
					if (templist->Salary > templist->next->Salary)
					{
						//sorting part
						tempSalary = templist->Salary;
						templist->Salary = templist->next->Salary;
						templist->next->Salary = tempSalary;

						tempEmpID = templist->Employee_Number;
						templist->Employee_Number = templist->next->Employee_Number;
						templist->next->Employee_Number = tempEmpID;

						tempPerformance = templist->Performance;
						templist->Performance = templist->next->Performance;
						templist->next->Performance = tempPerformance;

						tempName = templist->Name;
						templist->Name = templist->next->Name;
						templist->next->Name = tempName;

						tempPhone = templist->Phone;
						templist->Phone = templist->next->Phone;
						templist->next->Phone = tempPhone;

						tempAddress = templist->Address;
						templist->Address = templist->next->Address;
						templist->next->Address = tempAddress;

						tempDepartmentNo = templist->Department_No;
						templist->Department_No = templist->next->Department_No;
						templist->next->Department_No = tempDepartmentNo;

						tempDepartmentName = templist->Department_Name;
						templist->Department_Name = templist->next->Department_Name;
						templist->next->Department_Name = tempDepartmentName;
					}
					else
					{
						templist = templist->next;
					}
				}
				templist = list;
			}

		}

		//sort by performance (Cplusplus.com, 2012)
		void sortingPerformance()
		{
			Employees* templist = list;
			string tempEmpID, tempName, tempPhone, tempAddress, tempDepartmentNo, tempDepartmentName;
			int tempSalary, tempPerformance;
			int counter = 0;
			while (templist)
			{
				templist = templist->next;
				counter++;
			}
			templist = list;
			for (int j = 0; j < counter; j++)
			{
				while (templist->next)
				{
					if (templist->Performance > templist->next->Performance)
					{
						//sorting part
						tempPerformance = templist->Performance;
						templist->Performance = templist->next->Performance;
						templist->next->Performance = tempPerformance;

						tempEmpID = templist->Employee_Number;
						templist->Employee_Number = templist->next->Employee_Number;
						templist->next->Employee_Number = tempEmpID;

						tempSalary = templist->Salary;
						templist->Salary = templist->next->Salary;
						templist->next->Salary = tempSalary;

						tempName = templist->Name;
						templist->Name = templist->next->Name;
						templist->next->Name = tempName;

						tempPhone = templist->Phone;
						templist->Phone = templist->next->Phone;
						templist->next->Phone = tempPhone;

						tempAddress = templist->Address;
						templist->Address = templist->next->Address;
						templist->next->Address = tempAddress;

						tempDepartmentNo = templist->Department_No;
						templist->Department_No = templist->next->Department_No;
						templist->next->Department_No = tempDepartmentNo;

						tempDepartmentName = templist->Department_Name;
						templist->Department_Name = templist->next->Department_Name;
						templist->next->Department_Name = tempDepartmentName;
					}
					else
					{
						templist = templist->next;
					}
				}
				templist = list;
			}

		}

		//Calculate the salary package
		void calculateSalaryPackage(int BasicSalary)
		{
			int choice;
			double SalaryPackage;
			double houseRent = 1.50;
			int allowance = 1000;
			SalaryPackage = BasicSalary * houseRent + allowance;
			EmployeeFunctions M;
			cout << "The final Salary is " << SalaryPackage << endl;
			cout << endl;
			cout << "Would you like to return back to the Main Menu ?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;


			switch (choice)
			{
			case 1:
				M.MainMenu();
				break;

			case 2:
				exit(0);
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}



		}

		void searchIDandSalary()
		{
			string EmpID;
			int choice, Salary;
			bool flag = 1;
			EmployeeFunctions M;
			temp = list;
			if (temp == NULL)
			{
				cout << "Empty List" << endl;
			}
			else
			{
				//ask user for input
				cout << "Enter employee ID: ";
				cin >> EmpID;
				cout << endl;

				cout << "Enter Employee`s Salary: ";
				cin >> Salary;
				cout << endl;

				//display the data
				cout << left << setw(15) << "Employee ID";
				cout << left << setw(15) << "Name";
				cout << left << setw(10) << "Salary";
				cout << left << setw(15) << "Phone";
				cout << left << setw(35) << "Address";
				cout << left << setw(18) << "Department ID";
				cout << left << setw(20) << "Department Name";
				cout << left << setw(15) << "Performance";
				cout << endl;
				while (temp != NULL)
				{
					if (temp->Employee_Number == EmpID && temp -> Salary == Salary) //if user input matach with the employee_number
					{
						cout << left << setw(15) << temp->Employee_Number;
						cout << left << setw(15) << temp->Name;
						cout << left << setw(10) << temp->Salary;
						cout << left << setw(15) << temp->Phone;
						cout << left << setw(35) << temp->Address;
						cout << left << setw(18) << temp->Department_No;
						cout << left << setw(20) << temp->Department_Name;
						cout << left << setw(15) << temp->Performance;

						cout << endl;

						flag = 0;
					}


					temp = temp->next; //move to the next node
				}
				if (flag == 1)
				{
					cout << "Employee not found" << endl;
				}


			}
			cout << endl;
			cout << "Would you like to return back to the Main Menu ?" << endl;
			cout << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << endl;
			cout << "Choice:";
			cin >> choice;
			cout << endl;

			switch (choice)
			{
			case 1:
				M.MainMenu();
				break;

			case 2:
				exit(0);
				break;
			}
			//if user enters the wrong input
			if (choice > 2)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
			else if (choice <= 0)
			{
				cout << "Incorrect input moving back to main menu.";
				cout << endl;
				M.MainMenu();
			}
		}

		// Main Menu
		int MainMenu()
		{
			int i, BasicSalary;
			string empid, DelEmpId;
			EmployeeFunctions M;

			cout << endl;
			cout << "====================================" << endl;
			cout << "   Welcome to the Employee System" << endl;
			cout << "====================================" << endl;

			cout << "Select an option:" << endl;
			cout << "1. Add an Employee Record" << endl;
			cout << "2. Display all Records" << endl;
			cout << "3. Search by Employee ID" << endl;
			cout << "4. Search by Employee overall performance" << endl;
			cout << "5. Search by Employee Department Name" << endl;
			cout << "6. Modify an Employee Record" << endl;
			cout << "7. Delete an Employee Record" << endl;
			cout << "8. Calculate salary package of an employee" << endl;
			cout << "9. Exit" << endl;
			cout << "10. Search Employee using both ID and Salary";
			cout << endl;
			cout << "Choice: ";
			cin >> i;
			cout << endl;

			switch (i)
			{
			case 1:
				M.insertNewEmployee();
				break;
			case 2:
				//Give users the option to choose different sortings
				cout << "1. Sort and display by Employee ID in ascending order" << endl;
				cout << "2. Sort and display by Employee Salary in ascending order " << endl;
				cout << "3. Sort and display by Employee Overall Performance in ascending order " << endl;
				cout << "4. Display all records ";
				cout << endl;
				cout << "Choice: ";
				cin >> i;

				switch (i)
				{
				case 1:
					M.sortingEmployeeID();
					M.display();
					break;

				case 2:
					M.sortingSalary();
					M.display();
					break;
				case 3:
					M.sortingPerformance();
					M.display();
					break;
				case 4:
					M.display();
					break;
				}
				break;
			case 3:
				M.searchEmployeeID();
				break;
			case 4:
				M.searchPerformance();
				break;
			case 5:
				M.searchDepartmentName();
				break;
			case 6:
				cout << "Enter an Employee Id to update: ";
				cin >> empid;
				cout << endl;
				M.modifyEmployeeRecord(empid);
				M.MainMenu();
				break;
			case 7:
				cout << "Enter an Employee Id to delete: ";
				cin >> DelEmpId;
				cout << endl;
				M.deleteEmployeeRecord(DelEmpId);
				break;
			case 8:
				cout << "Enter Basic Salary: ";
				cin >> BasicSalary;
				M.calculateSalaryPackage(BasicSalary);
				break;
			case 9:
				exit(0);
				break;

			case 10:
				M.searchIDandSalary();
				break;

			}

			

			//if user enters the wrong input
			if (i > 10)
			{
				cout << "Incorrect input please try again.";
				cout << endl;
				M.MainMenu();
			}
			else if (i <= 0)
			{
				cout << "Incorrect input please try again.";
				cout << endl;
				M.MainMenu();
			}


			return 1;
		}


};



int main() 
{
	list = NULL;
	//predefined employee information
	EmployeeFunctions D;
	D.setEmployee("Ken", "0124409985", "48, jalan templar, puchong jaya", "finance", 3, 10000, "EM002", "DP001");
	D.setEmployee("Bob", "0123349985", "40, jalan temr, puchong jaya", "marketing", 4, 500000, "EM001", "DP002");
	D.setEmployee("Alex", "0125182385", "20, jalan templa,  jaya one", "finance", 3, 140020, "EM003", "DP001");
	D.setEmployee("Rey", "0124158385", "69, jalan ree,  jaya three", "HR", 2, 10020, "EM005", "DP003");
	D.setEmployee("Bane", "0130182385", "23, jalan wow,  jaya one", "HR", 3, 5000, "EM004", "DP003");
	D.setEmployee("Ri", "0125182085", "22, jalan qoq,  jaya two", "finance", 1, 6000, "EM006", "DP001");

	//displays main menu
	D.MainMenu();

	return 0;
}


