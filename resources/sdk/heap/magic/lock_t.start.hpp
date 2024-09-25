#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "_HEAP_LOCK.Lock.CriticalSection", critical_section, 0x0, 0x40, true, 0xdeacd29ce4f095f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t), "_HEAP_LOCK.Lock.Resource", resource, 0x0, 0x40, true, 0xe6648c869d4a7bc4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_lock_t), "_HEAP_LOCK.Lock", lock, 0x0, 0x40, true, 0x777bdb1423e06111)
#else
#define _m00
#define _m01
#define _m02
#endif