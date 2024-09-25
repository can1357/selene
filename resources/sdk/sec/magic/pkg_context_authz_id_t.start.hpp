#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_AuthzID.AuthzIDLength", authz_id_length, 0x0, 0x20, true, 0xfeae5e8f423f04db)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_AuthzID.AuthzID", authz_id, 0x40, 0x40, true, 0x71e34f9edcdc863a)
#else
#define _m00
#define _m01
#endif