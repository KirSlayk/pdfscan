#include <iostream>
#include <unistd.h>
#include <memory>
#include "../headers/manager.h"

void help(){
	using std::cout; 
	using std::endl;
	cout<<"OPTIONS"<<endl;
	cout<<"\tMUST BE:"<<endl;
	cout<<"\t\t-f"<<endl;
	cout<<"\t\t\tFilepath to input file (absolute or relative)"<<endl;
	cout<<"\t\t-o"<<endl;
	cout<<"\t\t\tFilepath to output dir (absolute or relative)"<<endl<<endl;
	cout<<"\tRUN MODE OPTIONS:"<<endl;
	cout<<"\tAll modes extract index.txt file and structure.json file"<<endl;
	cout<<"\t\t-a"<<endl;
	cout<<"\t\t\tFull parse (DEFAULT)"<<endl;
	cout<<endl;
	cout<<"\tEXAMPLE:"<<endl;
	cout<<"\t\t./unapdf -f \'filepath\' -o \'output dir\'"<<endl;
	exit(1);
}

int main(int argc, char *argv[]) {
	int flag = 0,
		mode = 0;
	std::string input_file_path = "", 
				output_dir_path = "";
	while ( -1 != (flag = getopt(argc,argv,"f:o:a?"))){
		switch (flag){
			case 'f': input_file_path = optarg; break;
			case 'o': output_dir_path = optarg; break;
			case 'a': mode = NRunMode::kAll; break;
			case '?': help(); break;
        };
	};
	manager::Manager manager;
	
	return 0;
}