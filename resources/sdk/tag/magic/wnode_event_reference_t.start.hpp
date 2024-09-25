#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "tagWNODE_EVENT_REFERENCE.WnodeHeader", wnode_header, 0x0, 0x80, true, 0xb0cbbd4ea310d204)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagWNODE_EVENT_REFERENCE.TargetGuid", target_guid, 0x180, 0x80, true, 0x34ec34180128eb93)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_EVENT_REFERENCE.TargetDataBlockSize", target_data_block_size, 0x200, 0x20, true, 0x2b28daed94659c5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNODE_EVENT_REFERENCE.TargetInstanceIndex", target_instance_index, 0x220, 0x20, true, 0xc7b432f9e4f3e30d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t>), "tagWNODE_EVENT_REFERENCE.TargetInstanceName", target_instance_name, 0x220, 0x0, true, 0x71104a0b3087590)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif