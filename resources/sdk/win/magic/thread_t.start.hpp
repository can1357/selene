#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::lock_entry_t*), "Thread.pHead", p_head, 0x0, 0x40, true, 0x771d18b443949db6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::lock_entry_t*), "Thread.pLastEmbeddedEnty", p_last_embedded_enty, 0x40, 0x40, true, 0x19ed813054ebeacf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class win::lock_entry_t, 1>), "Thread.embeddedEntry", embedded_entry, 0x80, 0x0, true, 0x8d356bca794e189c)
#else
#define _m00
#define _m01
#define _m02
#endif