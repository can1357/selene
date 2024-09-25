#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eresource_t), "_FLT_RESOURCE_LIST_HEAD.rLock", r_lock, 0x0, 0x40, true, 0xfccc014b33671400)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_RESOURCE_LIST_HEAD.rList", r_list, 0x340, 0x80, true, 0x32f1ec75cef5c67d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_RESOURCE_LIST_HEAD.rCount", r_count, 0x3c0, 0x20, true, 0x2f7c1bebbb844161)
#else
#define _m00
#define _m01
#define _m02
#endif