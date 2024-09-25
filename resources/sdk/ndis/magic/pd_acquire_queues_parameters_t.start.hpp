#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS.Header", header, 0x0, 0x20, true, 0xdeb30c62abe4881f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x23ce55729889df1a)
#else
#define _m00
#define _m01
#endif