#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_QUEUE.Queue", queue, 0x0, 0x40, true, 0x494e7dd6c783de05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_QUEUE.ThreadId", thread_id, 0x40, 0x20, true, 0x135d701287411b7d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_QUEUE.Action", action, 0x60, 0x8, true, 0xe4d56692df757124)
#else
#define _m00
#define _m01
#define _m02
#endif