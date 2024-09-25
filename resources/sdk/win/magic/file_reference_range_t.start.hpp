#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_REFERENCE_RANGE.StartingFileReferenceNumber", starting_file_reference_number, 0x0, 0x40, true, 0x7e39d83af7ebeff5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_REFERENCE_RANGE.EndingFileReferenceNumber", ending_file_reference_number, 0x40, 0x40, true, 0x69b75485bb5cee5d)
#else
#define _m00
#define _m01
#endif