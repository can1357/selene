#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pphysical_counter_event_buffer_overflow_handler_t ), "_PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION.OverflowHandler", overflow_handler, 0x0, 0x40, true, 0x10868ff4fc7e4b1d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION.CustomEventBufferEntrySize", custom_event_buffer_entry_size, 0x40, 0x20, true, 0xa128b048e2553045)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION.EventThreshold", event_threshold, 0x60, 0x20, true, 0x2484f78137dfd334)
#else
#define _m00
#define _m01
#define _m02
#endif