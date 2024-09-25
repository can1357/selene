#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_HIVE_WRITE_WAIT_QUEUE.ActiveThread", active_thread, 0x0, 0x40, true, 0xd2b471a94a5080cd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hive_wait_packet_t*), "_HIVE_WRITE_WAIT_QUEUE.WaitList", wait_list, 0x40, 0x40, true, 0xb3d3896780bf99d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_HIVE_WRITE_WAIT_QUEUE.OwnerBoosted", owner_boosted, 0x0, 0x0, false, 0x93e3d1cb212fe238)
#else
#define _m00
#define _m01
#define _m02
#endif