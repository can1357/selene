#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PSINJECTDATA.DataBytes", data_bytes, 0x0, 0x20, true, 0xbae7426720676ca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PSINJECTDATA.InjectionPoint", injection_point, 0x20, 0x10, true, 0x224f0051705411e4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PSINJECTDATA.PageNumber", page_number, 0x30, 0x10, true, 0x91bb52e41839945b)
#else
#define _m00
#define _m01
#define _m02
#endif