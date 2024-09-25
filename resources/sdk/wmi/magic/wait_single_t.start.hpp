#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_WAIT_SINGLE.ThreadId", thread_id, 0x0, 0x20, true, 0x4e476a635f2fec44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WMI_WAIT_SINGLE.Object", object, 0x40, 0x40, true, 0x62bbf7de98b876fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_WAIT_SINGLE.ObjectType", object_type, 0x80, 0x8, true, 0x56a7cd4238df9e85)
#else
#define _m00
#define _m01
#define _m02
#endif