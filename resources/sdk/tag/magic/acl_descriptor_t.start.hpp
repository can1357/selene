#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagACL_DESCRIPTOR.pACLBuffer", p_acl_buffer, 0x0, 0x40, true, 0xd6283b5911e73bc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACL_DESCRIPTOR.ulACLBufferSize", ul_acl_buffer_size, 0x40, 0x20, true, 0x6c81186eb04c1c2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACL_DESCRIPTOR.ulSIDSize", ul_sid_size, 0x60, 0x20, true, 0x5e28fa73c5d7ff9e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagACL_DESCRIPTOR.bDirtyACL", b_dirty_acl, 0x80, 0x20, true, 0x21360dca38a4575a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::descriptor_t), "tagACL_DESCRIPTOR.SecDesc", sec_desc, 0xc0, 0x40, true, 0xffe17e73f870d4a0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif