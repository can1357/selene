#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_OFFLOAD_HEADER.Version", version, 0x0, 0x20, true, 0xe2cad26fcfab01fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_OFFLOAD_HEADER.Size", size, 0x20, 0x20, true, 0xbd743b72949a9e1a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TASK_OFFLOAD_HEADER.OffsetFirstTask", offset_first_task, 0x60, 0x20, true, 0x796fe65413e9171f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::encapsulation_format_t), "_NDIS_TASK_OFFLOAD_HEADER.EncapsulationFormat", encapsulation_format, 0x80, 0x60, true, 0x856e2ed7c48fe3aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif