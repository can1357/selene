#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMsgRoutingInfo.SystemProcessID", system_process_id, 0x0, 0x20, true, 0x83a0702b8da26b28)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMsgRoutingInfo.SystemThreadID", system_thread_id, 0x20, 0x20, true, 0x1d3f86280d705fd1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMsgRoutingInfo.Identity", identity, 0x40, 0x40, true, 0xe3336518b7b9ee4a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMsgRoutingInfo.ItemID", item_id, 0x80, 0x40, true, 0xa6419e1568953466)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagMsgRoutingInfo.ConnectionGuid", connection_guid, 0xc0, 0x80, true, 0x454757f0e85b5052)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif