#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "KSMETHOD_SET.Set", set, 0x0, 0x0, false, 0x8cd24cee6872361e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMETHOD_SET.MethodsCount", methods_count, 0x0, 0x0, false, 0x8dd16400936cda0e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksmethod_item_t*), "KSMETHOD_SET.MethodItem", method_item, 0x0, 0x0, false, 0xa4c3c496b74093c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSMETHOD_SET.FastIoCount", fast_io_count, 0x0, 0x0, false, 0xcafabf268e7add2e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksfastmethod_item_t*), "KSMETHOD_SET.FastIoTable", fast_io_table, 0x0, 0x0, false, 0x2df1285725ec5148)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif