#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSYSTEM_TIME.LowPart", low_part, 0x0, 0x20, true, 0x4b222c3a66ed981f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_KSYSTEM_TIME.High1Time", high1_time, 0x20, 0x20, true, 0x43112bc7d40dd9e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_KSYSTEM_TIME.High2Time", high2_time, 0x40, 0x20, true, 0x2387c07fcbef3c4a)
#else
#define _m00
#define _m01
#define _m02
#endif