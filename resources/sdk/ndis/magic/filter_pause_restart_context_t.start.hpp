#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_FILTER_PAUSE_RESTART_CONTEXT.Filter", filter, 0x0, 0x40, true, 0xf01fff44c6777fa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FILTER_PAUSE_RESTART_CONTEXT.Status", status, 0x40, 0x20, true, 0x9200b4b47efa22ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FILTER_PAUSE_RESTART_CONTEXT.Event", event, 0x80, 0xc0, true, 0xbc2767df6ea9ab23)
#else
#define _m00
#define _m01
#define _m02
#endif