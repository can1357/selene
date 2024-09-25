#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::exclusive_access_request_type_t), "_CDROM_EXCLUSIVE_ACCESS.RequestType", request_type, 0x0, 0x20, true, 0x86314dc7155e5cfa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CDROM_EXCLUSIVE_ACCESS.Flags", flags, 0x20, 0x20, true, 0xde66d329f18929be)
#else
#define _m00
#define _m01
#endif