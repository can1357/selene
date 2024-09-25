#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_QUEUE_TAG_ENTRY.Entry", entry, 0x0, 0x80, true, 0x2065ffd666746af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_QUEUE_TAG_ENTRY.Dummy", dummy, 0x0, 0x40, true, 0x9ad72df5551eba22)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUEUE_TAG_ENTRY.Tag", tag, 0x40, 0x20, true, 0x59fc5389a7092e52)
#else
#define _m00
#define _m01
#define _m02
#endif