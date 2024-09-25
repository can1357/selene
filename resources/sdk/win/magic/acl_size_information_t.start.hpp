#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACL_SIZE_INFORMATION.AceCount", ace_count, 0x0, 0x20, true, 0xf02e1b924acd1fe9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACL_SIZE_INFORMATION.AclBytesInUse", acl_bytes_in_use, 0x20, 0x20, true, 0x8ab12bd93fb6b343)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACL_SIZE_INFORMATION.AclBytesFree", acl_bytes_free, 0x40, 0x20, true, 0x98761ecf1c53dd8d)
#else
#define _m00
#define _m01
#define _m02
#endif