#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_IFR_OFFSET.Current", current, 0x0, 0x10, true, 0xf859a3adb603186a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WDF_IFR_OFFSET.Previous", previous, 0x10, 0x10, true, 0xc1e59b3c18adda0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_IFR_OFFSET.AsLONG", as_long, 0x0, 0x20, true, 0x28f0709fdae5bdba)
#else
#define _m00
#define _m01
#define _m02
#endif