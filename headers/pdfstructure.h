#ifndef UNAPDF_PDFSTRUCTURE_H_
#define  UNAPDF_PDFSTRUCTURE_H_
#include <vector>
#include "types.h"


namespace pdfstructure {
using std::vector;

	class PdfSt {
	public:
		explicit PdfSt() {}
		
		~PdfSt() {}		
	
	private:
		// static const vector<Byte> pdf_signature_ {0x25, 0x50, 0x44, 0x46, 0x2D};
		UInt16 version_;



	};


}


#endif // UNAPDF_PDFSTRUCTURE_H_