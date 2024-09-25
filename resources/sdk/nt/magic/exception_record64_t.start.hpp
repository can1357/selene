#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_EXCEPTION_RECORD64.ExceptionCode", exception_code, 0x0, 0x20, true, 0x54cae0ab8b7250a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD64.ExceptionFlags", exception_flags, 0x20, 0x20, true, 0xb1fc5dc97b1e3bb0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXCEPTION_RECORD64.ExceptionRecord", exception_record, 0x40, 0x40, true, 0x6e7ac0518101a428)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXCEPTION_RECORD64.ExceptionAddress", exception_address, 0x80, 0x40, true, 0x8a7029c13dc586a8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD64.NumberParameters", number_parameters, 0xc0, 0x20, true, 0x9c23a45428a025cd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 15>), "_EXCEPTION_RECORD64.ExceptionInformation", exception_information, 0x100, 0xc0, true, 0x49acea72cd409b31)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif