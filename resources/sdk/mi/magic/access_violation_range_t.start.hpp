#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MI_ACCESS_VIOLATION_RANGE.Node", node, 0x0, 0xc0, true, 0xffe798363c703acc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_ACCESS_VIOLATION_RANGE.Va", va, 0xc0, 0x40, true, 0xb78a85c6c09155db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_ACCESS_VIOLATION_RANGE.EndVaInclusive", end_va_inclusive, 0x100, 0x40, true, 0x4eb179cf30fe7dd4)
#else
#define _m00
#define _m01
#define _m02
#endif