#include <iostream>
using namespace std;

class Employee{
	private :
		string name;
		int number;
		string hireDate;
		
	public :
		Employee (string name, int number, string hireDate){
			this -> name = name;
			this -> number = number;
			this -> hireDate = hireDate;
		}
		
		void setName (string name){
			this -> name = name;
		}
		
		void setNumber (int number){
			this -> number = number;
		}
		
		void setDate (string date){
			this -> hireDate = date;
		}
		
		string getName (){
			return name;
		}
		
		int getNumber (){
			return number;
		}
		
		string getDate (){
			return hireDate;
		}
};

class ProductionWorker : public Employee {
	private :
		string shift;
		double payRate;
		
	public :
		
		ProductionWorker (string name, int number, string date) : Employee (name, number, date){
			
		}
		
		void setShift (string shift){
			this -> shift = shift;
		}
		
		void setPayRate (double pay){
			this -> payRate = pay;
		}
		
		string getShift (){
			return shift;
		}
		
		int getPayRate (){
			return payRate;
		}
}; 

class ShiftSupervisor : public ProductionWorker{
	private :
		int annualSalary;
		int bonus;
		
	public :
		
		ShiftSupervisor (string name, int number, string date) : ProductionWorker (name, number, date){
			
		}
		
		void setSalary (int salary){
			this -> annualSalary = salary;
		}
		
		void setBonus (int bonus){
			this -> bonus = bonus;
		}
		
		int getSalary (){
			return annualSalary;
		}
		
		int getBonus (){
			return bonus;
		}
		
};

class TeamLeader : public ShiftSupervisor{
	private :
		int monthlyBonus;
		int trainingHour;
		int attendedTrainingHour;
		
	public :
		TeamLeader (string name, int number, string date) : ShiftSupervisor (name, number, date){
		}
		
		void setMonthlyBonus (int bonus){
			this -> monthlyBonus = bonus;
		}
		
		void setTrainingHour(int hours){
			this -> trainingHour = hours;
		}
		
		void setAttendedTrainingHour(int attendedHour){
			this -> attendedTrainingHour = attendedHour;
		}
		
		int getMonthlyBonus (){
			return monthlyBonus;
		}
		
		int getTrainingHour(){
			return trainingHour;
		}
		
		int getAttendedTrainingHour (){
			return attendedTrainingHour;
		}
		
};

int main (){
	
	TeamLeader productionWorker1 = TeamLeader ("Jordanatha", 101010, "12 Dec 2001");
	TeamLeader productionWorker2 = TeamLeader ("Jordan", 202020, "12 Dec 2002");
	TeamLeader productionWorker3 = TeamLeader ("Jor", 303030, "12 Dec 2003");
	
	TeamLeader Array[3] = {productionWorker1, productionWorker2, productionWorker3};
	
	cout << productionWorker1.getName() << endl;
	cout << productionWorker1.getNumber() << endl; 
	cout << productionWorker1.getDate() << endl;
	productionWorker1.setShift ("Day Shift");
	cout << productionWorker1.getShift();
	productionWorker1.setPayRate(1000);
	cout << endl << "Pay rate : " << productionWorker1.getPayRate() << endl << endl;
	
	cout << productionWorker2.getName() << endl;
	cout << productionWorker2.getNumber() << endl; 
	cout << productionWorker2.getDate() << endl;
	productionWorker2.setSalary (1000);
	cout << "Salary : " << productionWorker2.getSalary() << endl;
	productionWorker2.setBonus(2000);
	cout << "Bonus  : " << productionWorker2.getBonus() << endl << endl;
	
	cout << productionWorker3.getName() << endl;
	cout << productionWorker3.getNumber() << endl; 
	cout << productionWorker3.getDate() << endl;
	productionWorker3.setMonthlyBonus(2000);
	cout << "Monthly Bonus\t\t:" << productionWorker3.getMonthlyBonus() << endl;
	productionWorker3.setTrainingHour(10);
	cout << "Training hour\t\t:" << productionWorker3.getTrainingHour() << endl;
	productionWorker3.setAttendedTrainingHour (3);
	cout << "Attended Training Hour\t:" << productionWorker3.getAttendedTrainingHour() << endl;
	
	
	
	
	
	}



