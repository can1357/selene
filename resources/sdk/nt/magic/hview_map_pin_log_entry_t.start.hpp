#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HVIEW_MAP_PIN_LOG_ENTRY.ViewOffset", view_offset, 0x0, 0x0, false, 0x1f6651d8fa14b698)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HVIEW_MAP_PIN_LOG_ENTRY.Pinned", pinned, 0x0, 0x0, false, 0xdd740a578878da4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HVIEW_MAP_PIN_LOG_ENTRY.PinMask", pin_mask, 0x0, 0x0, false, 0xea6e2515a7d01497)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_HVIEW_MAP_PIN_LOG_ENTRY.Thread", thread, 0x0, 0x0, false, 0xe5ef7ffb1818fbb4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 6>), "_HVIEW_MAP_PIN_LOG_ENTRY.Stack", stack, 0x0, 0x0, false, 0xba1af98e54e3e929)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif