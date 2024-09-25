#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::irc_entry_t*), "IRCEntry.pNext", p_next, 0x0, 0x40, true, 0x13e945f466f35750)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ref_cache_t*), "IRCEntry.pRefCache", p_ref_cache, 0x40, 0x40, true, 0xc4b91c72435a81a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IRCEntry.cStrongUsage", c_strong_usage, 0x80, 0x20, true, 0x3758adc846002dc8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IRCEntry.cWeakUsage", c_weak_usage, 0xa0, 0x20, true, 0x1f59571b0fb53b8e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IRCEntry.cStrongRefs", c_strong_refs, 0xc0, 0x20, true, 0xd932a196b4c05f32)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IRCEntry.cPrivateRefs", c_private_refs, 0xe0, 0x20, true, 0x90051f8845ffe555)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IRCEntry.cWeakRefs", c_weak_refs, 0x100, 0x20, true, 0x5f2b14d201387fa4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "IRCEntry.ipid", ipid, 0x120, 0x80, true, 0x3091112df4953b58)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif