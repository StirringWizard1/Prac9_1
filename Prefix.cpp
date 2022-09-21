#include "Prefix.h"
#include <stack>
#include <string>
#include <sstream>
#include <vector>


#include <iostream>
int Prefix::evaluate(std::string input)
{


	// std::string operators;
	// int expressionArray[input.length()];
	// int ArrayIncrement = 0;


	
	std::stack<int> sta;
	

	for(int i = input.length() -1; i >= 0; i--)
		{
			std::string curent = "";
			
			if (isdigit(input[i] ))
			{
				while (isdigit(input[i]))
				{

					curent = input[i]+ curent;
					i--;

				}
				
				int num = stoi(curent);
				// expressionArray[ArrayIncrement] = i;
				sta.push(num);
				// ArrayIncrement++;
			}






			if (input[i] == '+' ||input[i] == '-' ||input[i] == '*' ||input[i] == '/' )
			{
				// operators =input[i]+ operators;
				int first =sta.top();
				sta.pop();
				int second =sta.top();
			
				sta.pop();

				if (input[i]=='+')
				{
					first = first + second;
					sta.push(first);
				}
				else if (input[i]=='-')
				{
					first = first - second;
					sta.push(first);
				}
				if (input[i] == '*')
				{
					first = first*second;
					sta.push(first);
				}
				if (input[i] == '/')
				{
					first = first/second;
					sta.push(first);
				}
			
			}
	

		}
		///////////////////////////////////////////////////////////////
		// std::string expression; 
		// int bracketcounter =0;
		// for (int l=0)
		// 	{			

		// 			expression = 	expression +input[expressionArray[l]];

		// 			expression = operators[l] + expression;


		// 							if (operators[l] == '*' && bracketcounter == 0)
		// 							{
		// 								expression = 	")" + expression;
		// 								bracketcounter++;
		// 							}

		// 							if (operators[l] == '*' && bracketcounter == 1)
		// 							{
		// 								expression = 	"(" + expression
		// 								bracketcounter = 0;
		// 							}

		// 							if (operators[i] == '/l')
		// 							{
										
		// 							}



		// 	}
							

			////////////////////////////////////////////////////////////	

	return sta.top();
}
