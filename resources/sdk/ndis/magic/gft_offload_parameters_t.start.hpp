#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GFT_OFFLOAD_PARAMETERS.Header", header, 0x0, 0x20, true, 0xf6af431663d12523)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x9cd39a0350a322cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_PARAMETERS.ExceptionVPortId", exception_v_port_id, 0x40, 0x20, true, 0x24e2e82f74937b5f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_PARAMETERS.CopyLookaheadLength", copy_lookahead_length, 0x60, 0x20, true, 0x4ac12979b6f97107)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_GFT_OFFLOAD_PARAMETERS.SampleLookaheadLength", sample_lookahead_length, 0x80, 0x20, true, 0x4031709c835a460c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif