#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNODE_HEADER.BufferSize", buffer_size, 0x0, 0x20, true, 0xd4905c855e55494e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNODE_HEADER.ProviderId", provider_id, 0x20, 0x20, true, 0x1f6749cbca25f961)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WNODE_HEADER.HistoricalContext", historical_context, 0x40, 0x40, true, 0x975294592190614c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNODE_HEADER.Version", version, 0x40, 0x20, true, 0xf72e15cae794f5c4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNODE_HEADER.Linkage", linkage, 0x60, 0x20, true, 0x7da24b357f0c83a9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNODE_HEADER.CountLost", count_lost, 0x80, 0x20, true, 0xa365190c81728afa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WNODE_HEADER.KernelHandle", kernel_handle, 0x80, 0x40, true, 0x3e01eeb81ed6c05c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WNODE_HEADER.TimeStamp", time_stamp, 0x80, 0x40, true, 0xd848a19427351e25)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WNODE_HEADER.Guid", guid, 0xc0, 0x80, true, 0x1eed8ceb0a478f57)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNODE_HEADER.ClientContext", client_context, 0x140, 0x20, true, 0x1b0ab4ca341a14fe)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNODE_HEADER.Flags", flags, 0x160, 0x20, true, 0x95fe4cb80d8139c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif