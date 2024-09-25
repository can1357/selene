#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_SEQUENCE.SequenceD1", sequence_d1, 0x0, 0x20, true, 0x20cfed25fb41263d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_SEQUENCE.SequenceD2", sequence_d2, 0x20, 0x20, true, 0x57a0a8a047be80dd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_SEQUENCE.SequenceD3", sequence_d3, 0x40, 0x20, true, 0xee361cc225b922a7)
#else
#define _m00
#define _m01
#define _m02
#endif