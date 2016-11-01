#include <iostream>
using namespace std;

class GradedActivity{
	
	protected:
		double score; // To hold the numeric score
		
	public:
		GradedActivity(){
			score = 0.0;
		}

		GradedActivity(double s){ 
			score = s; 
		}


		void setScore(double s){ 
			score = s; 
		}


		double getScore() const{
			return score; 
		}

		
};

class Essay : public GradedActivity{
	protected :
		int maxGrammar;
		int maxSpelling;
		int maxLength;
		int maxContent;
	public :
		Essay (int Gscore, int Sscore, int Lscore, int Cscore) {
			maxGrammar = Gscore;
			maxSpelling = Sscore;
			maxLength = Lscore;
			maxContent = Cscore;
		}
		
		void setMaxGrammarScore (int gscore){
			this -> maxGrammar = gscore;
		}
		
		void setMaxSpellingScore (int sscore){
			this -> maxSpelling = sscore;
		}
		
		void setMaxLengthScore (int lscore){
			this -> maxLength = lscore;
		}
		
		void setMaxContentScore (int cscore){
			this -> maxContent = cscore;
		}
		
		int getMaxGrammarScore (){
			return maxGrammar;
		}
		
		int getMaxSpellingScore (){
			return maxSpelling;
		}
		
		int getMaxLengthScore (){
			return maxLength;
		}
		
		int getMaxContentScore (){
			return maxContent;
		}
		
		void showData (){
			cout << "Grammar Score  : " << maxGrammar << endl;
			cout << "Spelling Score : " << maxSpelling << endl;
			cout << "Correct Length : " << maxLength << endl;
			cout << "Content Score  : " << maxContent << endl << endl;
		}
};

int main (){
	int InputGrammar;
	int InputSpelling;
	int InputLength;
	int InputContent;

	cout << "Input Score " << endl;
	cout << "------------" << endl;
	
	cout << "Grammar Score  : ";
	cin >> InputGrammar;
	
	cout << "Spelling Score : ";
	cin >> InputSpelling;
	
	cout << "Correct Length : ";
	cin >> InputLength;
	
	cout << "Content Score  : ";
	cin >> InputContent;
	cout << endl;
	
	Essay obj (InputGrammar, InputSpelling, InputLength, InputContent);
	obj.showData();
	
	cout << "Total Score : " << obj.getMaxContentScore() + obj.getMaxGrammarScore() + obj.getMaxLengthScore() + obj.getMaxSpellingScore();
	
}






