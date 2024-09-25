#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NET_BUFFER_POOL_PARAMETERS.Header", header, 0x0, 0x20, true, 0x86b395e1bab76556)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_POOL_PARAMETERS.PoolTag", pool_tag, 0x20, 0x20, true, 0xfa9eb8976637eaaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_BUFFER_POOL_PARAMETERS.DataSize", data_size, 0x40, 0x20, true, 0x8a3aa95a4296bd13)
#else
#define _m00
#define _m01
#define _m02
#endif