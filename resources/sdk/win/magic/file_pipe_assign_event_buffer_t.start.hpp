#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_FILE_PIPE_ASSIGN_EVENT_BUFFER.EventHandle", event_handle, 0x0, 0x40, true, 0x1976ea9c0e79b1c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PIPE_ASSIGN_EVENT_BUFFER.KeyValue", key_value, 0x40, 0x20, true, 0x3522b0e554970a10)
#else
#define _m00
#define _m01
#endif