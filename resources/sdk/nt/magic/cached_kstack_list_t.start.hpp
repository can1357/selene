#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_CACHED_KSTACK_LIST.SListHead", s_list_head, 0x0, 0x80, true, 0xf0ff087848ca70be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CACHED_KSTACK_LIST.MinimumFree", minimum_free, 0x80, 0x20, true, 0x90b6534598851c99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CACHED_KSTACK_LIST.Misses", misses, 0xa0, 0x20, true, 0xda081d26a16b3105)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CACHED_KSTACK_LIST.MissesLast", misses_last, 0xc0, 0x20, true, 0xbb73b5e60da972af)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_CACHED_KSTACK_LIST.AllStacksInUse", all_stacks_in_use, 0xe0, 0x20, true, 0x11bf0eab24ab8d73, 0, uint32_t,uint8_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CACHED_KSTACK_LIST.NonIdealStacksPresent", non_ideal_stacks_present, 0x0, 0x0, false, 0xbba347b0d873e5c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif