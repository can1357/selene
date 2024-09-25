#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_EXCEPTION_RECORD.ExceptionCode", exception_code, 0x0, 0x20, true, 0xeeae59b370f081)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD.ExceptionFlags", exception_flags, 0x20, 0x20, true, 0xc640026a95dbf12a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t*), "_EXCEPTION_RECORD.ExceptionRecord", exception_record, 0x40, 0x40, true, 0xa1ef1d2020daf7e2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_EXCEPTION_RECORD.ExceptionAddress", exception_address, 0x80, 0x40, true, 0xbe18f98181776813)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD.NumberParameters", number_parameters, 0xc0, 0x20, true, 0xf2051f51741c2775)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 15>), "_EXCEPTION_RECORD.ExceptionInformation", exception_information, 0x100, 0xc0, true, 0x790727120ebc7c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif