#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_INITIATE_REPAIR_OUTPUT_BUFFER.Hint1", hint1, 0x0, 0x40, true, 0xb70a348bceca1a6a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_INITIATE_REPAIR_OUTPUT_BUFFER.Hint2", hint2, 0x40, 0x40, true, 0xc97e66fca0d18a2a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_INITIATE_REPAIR_OUTPUT_BUFFER.Clsn", clsn, 0x80, 0x40, true, 0xdf8cdeeb4ab9dc4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_FILE_INITIATE_REPAIR_OUTPUT_BUFFER.Status", status, 0xc0, 0x20, true, 0xb19746a5077d8fb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif