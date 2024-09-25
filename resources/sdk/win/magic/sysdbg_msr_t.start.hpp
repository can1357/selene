#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSDBG_MSR.Msr", msr, 0x0, 0x20, true, 0x846ce2f08f21d778)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSDBG_MSR.Data", data, 0x40, 0x40, true, 0xb08c2bce0692a2f1)
#else
#define _m00
#define _m01
#endif