#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ECP_LIST.Signature", signature, 0x0, 0x20, true, 0xc4a25e9cd7448535)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ECP_LIST.Flags", flags, 0x20, 0x20, true, 0xadb67c8acdfe1689)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_ECP_LIST.EcpList", ecp_list, 0x40, 0x80, true, 0x330ef7d910c31814)
#else
#define _m00
#define _m01
#define _m02
#endif