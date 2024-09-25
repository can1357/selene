#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERIC_MAPPING.GenericRead", generic_read, 0x0, 0x20, true, 0x1a005afdbfcbae54)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERIC_MAPPING.GenericWrite", generic_write, 0x20, 0x20, true, 0x7f2b917eec9237a9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERIC_MAPPING.GenericExecute", generic_execute, 0x40, 0x20, true, 0xa55b36ee18386d7d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GENERIC_MAPPING.GenericAll", generic_all, 0x60, 0x20, true, 0x883e48d91d0e8fbf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif