#include <iostream>
#include <fstream>

std::string getFileName()
{
	std::cout << "Who said this quote? ";
	std::string name;
	std::getline(std::cin, name);
	return name;
}

void writeToFile()
{	
	std::ofstream codeStream;
	std::string personToQuote = getFileName();
	std::ifstream isFilePresent(personToQuote + ".txt");
	if(!isFilePresent){
		codeStream.open(personToQuote + ".txt");
		std::string quote;
		std::cout << "What was the quote? ";
		std::getline(std::cin, quote);
		std::cout << "Writing info to file..." << std::endl; 
		codeStream << personToQuote << " said " << quote << ".";
		codeStream.close();
	} else {
		std::cout << "File already exists, there is already a quote from this person." << std::endl;
	}
	
}