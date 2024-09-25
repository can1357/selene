#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSCInnerUnknown._iRefCount", i_ref_count, 0x40, 0x20, true, 0xd02a26fc57f09100)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_synchronize_container_t*), "CSCInnerUnknown._pParent", p_parent, 0x80, 0x40, true, 0x46261ac861174bf)
#else
#define _m00
#define _m01
#endif