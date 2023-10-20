#include "LinkedList.cpp"
#include "company.h"

int main() {
		SingleLinkedList<string> my_list; 
			// Testing the functions
			my_list.push_front("Matt");
			my_list.push_front("Bradley");
			my_list.push_back("Mahomes");
			my_list.push_back("Jaden");
			my_list.insert(2, "Mohamed"); 
			cout << "List as of now: [" << my_list.front() << ", " << my_list.back() << "]" << endl;
			my_list.pop_front();
			my_list.pop_back();
			my_list.remove(2);
			cout << "List after operated on: [" << my_list.front() << ", " << my_list.back() << "]" << endl;
			int index = my_list.find("Mohamed");
			if (index <= my_list.find("Mohamed")) {
					cout << "Mohamed was found at index: " << index << endl;
			} else {
					cout << "Mohamed was not found in the list" << endl;
			}

	cout<<endl;
		cout << "Part 2:\n";
			// Professional Employee 
			Professional employeePro = Professional();
			cout << "\nProfessional Employee:" << endl;
			cout << "  Weekly Salary: $" << employeePro.salary() << endl;
			cout << "  Weekly Healthcare: $" << employeePro.healthCost()
					 << endl;
			cout << "  Vacation Days Earned this Week: " << employeePro.vacationDays() << endl
					 << endl;

			// Non-Professional 
			double hours = 0;
			cout << "How many hours did the non-professional employee work this week? ";
			cin >> hours;
			Nonprofessional employeeNon = Nonprofessional(hours);
			cout << endl << "Nonprofessional Employee:" << endl ;
			cout << "\tWeekly Salary: $" << employeeNon.salary() << endl;
			cout << "\tWeekly Healthcare: $" << employeeNon.healthCost()
					 << endl;
			cout << "\tVacation Days Earned this Week: " << employeeNon.vacationDays() << endl << endl;
	
		}