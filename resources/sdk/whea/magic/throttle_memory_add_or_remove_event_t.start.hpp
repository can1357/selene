#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, false, 0x7636212a68bde415)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT.SocketId", socket_id, 0x0, 0x0, false, 0x4d522463729de4f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT.ChannelId", channel_id, 0x0, 0x0, false, 0x3d3680829d542ed7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_THROTTLE_MEMORY_ADD_OR_REMOVE_EVENT.DimmSlot", dimm_slot, 0x0, 0x0, false, 0x4b8b96a9598b51d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif