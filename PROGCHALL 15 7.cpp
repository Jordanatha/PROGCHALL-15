#include <iostream>
using namespace std;

class PersonData {
	private :
		string firstName;
		string lastName;
		string address;
		string city;
		string state;
		int zip;
		string phone;
	
	public :
		PersonData (string firstName, string lastName, string address, string city, string state, int zip, string phone){
			this -> firstName = firstName;
			this -> lastName = lastName;
			this -> address = address;
			this -> city = city;
			this -> state = state;
			this -> zip = zip;
			this -> phone = phone;
		}
		
		void setFirstName (string firstName){
			this -> firstName = firstName;	
		}
		
		void setLastName (string lastName){
			this -> lastName = lastName;
		}
		
		void setAddress (string address){
			this -> address = address;
		}
		
		void setCity (string city){
			this -> city = city;
		}
		
		void setState (string state){
			this -> state = state;
		}
		
		void setZip (int zip){
			this -> zip = zip;
		}
		
		void setPhone (int phone){
			this -> phone = phone;
		}
		
		string getFirstName (){
			return firstName;
		}
		
		string getLastName (){
			return lastName;
		}
		
		string getAddress (){
			return address;
		}
		
		string getCity (){
			return city;
		}
		
		string getState (){
			return state;
		}
		
		int getZip (){
			return zip;
		}
		
		string getPhone (){
			return phone;
		}
};

class CustomerData : public PersonData{
	private :
		int customerNumber;
		bool mailingList = false;
		
	public :
		
		CustomerData (string firstName, string lastName, string address, string city, string state, int zip, string phone) : PersonData (firstName, lastName, address, city, state, zip, phone){
		}
		
		void setCustomerNumber (int customerNumber){
			this -> customerNumber = customerNumber;
		}
		
		bool setMailingList (bool mailingList){
			this -> mailingList = mailingList;
		}
		
		bool getMailingList(){
			if (mailingList){ 
				cout << "Yes" << endl;
			} 
			else if (!mailingList){
				cout << "No" << endl;
			}
		}
				
		int getCustomerNumber (){
			return customerNumber;
		}
};

int main (){
	bool input;
	
	CustomerData obj ("Jordanatha", "J", "Budi Indah", "Jakarta", "Indonesia", 14022, "089627888389");
	
	cout << obj.getFirstName() << endl;
	cout << obj.getLastName() << endl;
	cout << obj.getAddress() << endl;
	cout << obj.getCity() << endl;
	cout << obj.getState() << endl;
	cout << obj.getZip() << endl;
	cout << obj.getPhone() << endl;
	
	cout << "Do you want to get to the mailing list? (1/0)";
	cin >> input;
	
	obj.setMailingList(input);
	obj.getMailingList();
	
	obj.setCustomerNumber(2892030);
	cout << obj.getCustomerNumber(); 
}
