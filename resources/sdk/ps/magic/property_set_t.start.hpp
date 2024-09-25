#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PS_PROPERTY_SET.ListHead", list_head, 0x0, 0x80, true, 0x3274f3cd423f1130)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_PROPERTY_SET.Lock", lock, 0x80, 0x40, true, 0x36e697519f676f50)
#else
#define _m00
#define _m01
#endif