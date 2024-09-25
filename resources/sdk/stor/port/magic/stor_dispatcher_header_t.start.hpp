#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_DISPATCHER_HEADER.Data.Type", type, 0x0, 0x8, true, 0x507673a59084d95e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_DISPATCHER_HEADER.Data.Flags", flags, 0x8, 0x8, true, 0x57a8e4014993461a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_DISPATCHER_HEADER.Data.Size", size, 0x10, 0x8, true, 0xb8b040a14c1c51af)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_DISPATCHER_HEADER.Data.Inserted", inserted, 0x18, 0x8, true, 0xb3357cdf923fca6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_DISPATCHER_HEADER.Data.DebugActive", debug_active, 0x18, 0x8, true, 0x73fbc02014daa673)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_STOR_DISPATCHER_HEADER.Data", data, 0x0, 0x20, true, 0x70fdc6307a001cd6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_STOR_DISPATCHER_HEADER.Lock", lock, 0x0, 0x20, true, 0x9e64dfe7a3b4b547)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_STOR_DISPATCHER_HEADER.SignalState", signal_state, 0x20, 0x20, true, 0xaf334aa3deeb4db4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_list_entry_t), "_STOR_DISPATCHER_HEADER.WaitListHead", wait_list_head, 0x40, 0x80, true, 0x4e02dfdbc7ff4b4d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif