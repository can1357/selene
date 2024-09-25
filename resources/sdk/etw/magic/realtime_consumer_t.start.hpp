#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ETW_REALTIME_CONSUMER.Links", links, 0x0, 0x80, true, 0x60e5cc4d1da96e75)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REALTIME_CONSUMER.ProcessHandle", process_handle, 0x80, 0x40, true, 0x2670ecff9f40239d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_ETW_REALTIME_CONSUMER.ProcessObject", process_object, 0xc0, 0x40, true, 0x70931b37ed875a23)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REALTIME_CONSUMER.NextNotDelivered", next_not_delivered, 0x100, 0x40, true, 0x20488f2087cbef1f)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_REALTIME_CONSUMER.RealtimeConnectContext", realtime_connect_context, 0x140, 0x40, true, 0x8828c15b70b08cd5)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_ETW_REALTIME_CONSUMER.DisconnectEvent", disconnect_event, 0x180, 0x40, true, 0x6ab5749b5de05475)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_ETW_REALTIME_CONSUMER.DataAvailableEvent", data_available_event, 0x1c0, 0x40, true, 0x10a6d14053e6494b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_ETW_REALTIME_CONSUMER.UserBufferCount", user_buffer_count, 0x200, 0x40, true, 0x502125bc7ba1b155)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_ETW_REALTIME_CONSUMER.UserBufferListHead", user_buffer_list_head, 0x240, 0x40, true, 0xa853de9eaa1e06d2)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REALTIME_CONSUMER.BuffersLost", buffers_lost, 0x280, 0x20, true, 0x61a56ed3d2160263)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REALTIME_CONSUMER.EmptyBuffersCount", empty_buffers_count, 0x2a0, 0x20, true, 0xccd2b9a6331b7607)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_REALTIME_CONSUMER.LoggerId", logger_id, 0x2c0, 0x10, true, 0x68583c4c591b02f5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_REALTIME_CONSUMER.Flags", flags, 0x2d0, 0x8, true, 0xd815de490a94442c)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REALTIME_CONSUMER.ShutDownRequested", shut_down_requested, 0x2d0, 0x1, true, 0xd21497e8a0f097b, 1, uint8_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REALTIME_CONSUMER.NewBuffersLost", new_buffers_lost, 0x2d1, 0x1, true, 0xefbc3a17012dd66d, 1, uint8_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REALTIME_CONSUMER.Disconnected", disconnected, 0x2d2, 0x1, true, 0xb0801714af0e639e, 1, uint8_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REALTIME_CONSUMER.Notified", notified, 0x2d3, 0x1, true, 0x2cd647cebd85c61d, 1, uint8_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_REALTIME_CONSUMER.Wow", wow, 0x2d4, 0x1, true, 0x8feca03c535fd82f, 1, uint8_t)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_ETW_REALTIME_CONSUMER.ReservedBufferSpaceBitMap", reserved_buffer_space_bit_map, 0x300, 0x80, true, 0xdb723f7dcd17b38d)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_ETW_REALTIME_CONSUMER.ReservedBufferSpace", reserved_buffer_space, 0x380, 0x40, true, 0xaeb77bdf6759915a)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REALTIME_CONSUMER.ReservedBufferSpaceSize", reserved_buffer_space_size, 0x3c0, 0x20, true, 0x9d0bd1b1b37877c2)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REALTIME_CONSUMER.UserPagesAllocated", user_pages_allocated, 0x3e0, 0x20, true, 0x5d8a0ea5f30672ab)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_REALTIME_CONSUMER.UserPagesReused", user_pages_reused, 0x400, 0x20, true, 0x33a597f536d98c40)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_ETW_REALTIME_CONSUMER.EventsLostCount", events_lost_count, 0x440, 0x40, true, 0xa6c9714625861011)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_ETW_REALTIME_CONSUMER.BuffersLostCount", buffers_lost_count, 0x480, 0x40, true, 0x4eac3e6d6f4cae8a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::silodriverstate_t*), "_ETW_REALTIME_CONSUMER.SiloState", silo_state, 0x4c0, 0x40, true, 0xfdb9ffa3d4024e9b)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#endif