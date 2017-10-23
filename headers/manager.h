#ifndef UNAPDF_MANAGER_H_
#define  UNAPDF_MANAGER_H_
#include "file_reader.h"
#include "file_writer.h"
#include "constants.h"

namespace NManager 
{

	class Manager {
	public:
		explicit inline Manager(const std::string &input_file_path, const std::string &output_dir_path) : 	input_file_reader_(input_file_path)
																											, output_dir_path_(output_dir_path)
		{}
		~Manager() {}

	private:
		NFileReader::FileReader input_file_reader_;
		std::string output_dir_path_;
	};
}


#endif // UNAPDF_MANAGER_H_