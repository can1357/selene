#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_NAME_CONSTRAINTS_INFO.cPermittedSubtree", c_permitted_subtree, 0x0, 0x20, true, 0xa9b026a2c51e9e37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_general_subtree_t*), "_CERT_NAME_CONSTRAINTS_INFO.rgPermittedSubtree", rg_permitted_subtree, 0x40, 0x40, true, 0xe039a6baa0aad779)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_NAME_CONSTRAINTS_INFO.cExcludedSubtree", c_excluded_subtree, 0x80, 0x20, true, 0xc1c173115de49745)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_general_subtree_t*), "_CERT_NAME_CONSTRAINTS_INFO.rgExcludedSubtree", rg_excluded_subtree, 0xc0, 0x40, true, 0x7981b21d47400619)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif