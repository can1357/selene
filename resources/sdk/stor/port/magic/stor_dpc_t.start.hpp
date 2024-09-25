#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dpc_buffer_t), "_STOR_DPC.Dpc", dpc, 0x0, 0x0, true, 0x515c9f43493a0910)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_DPC.Lock", lock, 0x200, 0x40, true, 0x33e42a6bbe6ba55e)
#else
#define _m00
#define _m01
#endif