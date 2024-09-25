#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_EXCEPTION_RECORD32.ExceptionCode", exception_code, 0x0, 0x20, true, 0x4973644c6ea8971f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD32.ExceptionFlags", exception_flags, 0x20, 0x20, true, 0xa55231a5afa122a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD32.ExceptionRecord", exception_record, 0x40, 0x20, true, 0xb5842d29f106c86)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD32.ExceptionAddress", exception_address, 0x60, 0x20, true, 0x1f3fb215c57c992f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_RECORD32.NumberParameters", number_parameters, 0x80, 0x20, true, 0x61c35d4ee99ab8f1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 15>), "_EXCEPTION_RECORD32.ExceptionInformation", exception_information, 0xa0, 0xe0, true, 0xabee0af8fca12813)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif