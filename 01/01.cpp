#include <iostream>
#include <string>
using namespace std;
int main(int argc,char** argv)
{
	std::cout << "Welcome to My debugger" <<std::endl;
	while(true)
	{
		cout << "(mdb)";
		string line;
		getline(cin,line);
		if(line == "quit" || line == "q")
		{
			break;
		}
		else if(line=="r" || line=="run")
		{
			cout << "run command" << endl;
		}
		else if(line=="b" || line=="break")
		{
			cout << "set breakpoint command" << endl;

		}
		else if(line=="c" || line=="con" || line=="continue")
		{
			cout << "continue command" << endl;
		}
		else if(line=="help")
		{
			cout << "help command" << endl;

		}
		else
		{
			cout << "known command" <<endl;
		}
	}
	return 0;
}
