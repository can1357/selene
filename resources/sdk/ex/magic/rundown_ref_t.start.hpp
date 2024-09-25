#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EX_RUNDOWN_REF.Count", count, 0x0, 0x40, true, 0x2dca5e01bc5cd286)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_EX_RUNDOWN_REF.Ptr", ptr, 0x0, 0x40, true, 0x33fec83ba5710bf7)
#else
#define _m00
#define _m01
#endif