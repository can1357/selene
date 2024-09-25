#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_COMM_FAULT_OFFSETS.CommOffset", comm_offset, 0x0, 0x10, true, 0xe3776c126acf1c7e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_COMM_FAULT_OFFSETS.FaultOffset", fault_offset, 0x10, 0x10, true, 0x76673172133e8c7)
#else
#define _m00
#define _m01
#endif