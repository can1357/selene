#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSECURE_FAULT_INFORMATION.FaultCode", fault_code, 0x0, 0x40, true, 0xe67db3556ecb1cac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSECURE_FAULT_INFORMATION.FaultVa", fault_va, 0x40, 0x40, true, 0x8a910a8b8bf318ed)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSECURE_FAULT_INFORMATION.FaultPa", fault_pa, 0x0, 0x0, false, 0xa0845ca0ebe43e70)
#else
#define _m00
#define _m01
#define _m02
#endif