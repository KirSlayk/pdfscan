#ifndef UNAPDF_FILE_READER_H_
#define  UNAPDF_FILE_READER_H_
#include <fstream>
#include <string.h>

namespace NFileReader {
	
	class FileReader {
	public:
		explicit inline FileReader() {}
		explicit inline FileReader(const char *arg) : 	input_(arg, std::ios::in | std::ios::binary)
														, size_(0)
		{
			this->init();			
		}
		explicit inline FileReader(const std::string &arg) : 	input_(arg, std::ios::in | std::ios::binary)
																, size_(0)
		{
			this->init();			
		}
		
		inline ~FileReader() {
			if (this->input_.is_open()) {
			 this->input_.close();
			}
		}

		inline bool is_open() const {
			return this->input_.is_open();
		}
		
		inline void open(std::string arg) {
			this->input_.open(arg, std::ios::in | std::ios::binary);
		}

		inline const size_t size() const {
		 	return this->size_;
		}

	private:
		std::ifstream input_;
		size_t size_;

		inline void init() {
			if (true == this->input_.is_open()) {
				auto cur_pos = this->input_.tellg();
				this->input_.seekg(0, std::ios_base::end);
			  	this->size_ = this->input_.tellg();
			 	this->input_.seekg(cur_pos, std::ios::beg);		
			}
		}
	};
}
#endif // UNAPDF_FILE_READER_H_