#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.Version", version, 0x0, 0x20, true, 0xf346b00b7d1680fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.cbHeaderLength", cb_header_length, 0x20, 0x10, true, 0x2280b92e6a2e704c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.cbStructureLength", cb_structure_length, 0x40, 0x20, true, 0x6262bc977ae54393)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.UserOffset", user_offset, 0x60, 0x20, true, 0xb4be0c78f9d1818c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.UserLength", user_length, 0x80, 0x10, true, 0xcd707fda6cd62b23)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.DomainOffset", domain_offset, 0xa0, 0x20, true, 0x59a008e6b1157840)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.DomainLength", domain_length, 0xc0, 0x10, true, 0xdda460a1c5e872a9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.PackedCredentialsOffset", packed_credentials_offset, 0xe0, 0x20, true, 0xfb3d26d0b1956889)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.PackedCredentialsLength", packed_credentials_length, 0x100, 0x10, true, 0xb60fd8d7bf8ac183)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.Flags", flags, 0x120, 0x20, true, 0xf48d8ce2cc904e86)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.PackageListOffset", package_list_offset, 0x140, 0x20, true, 0xc24fb6f6b188da27)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_WINNT_AUTH_IDENTITY_EX2.PackageListLength", package_list_length, 0x160, 0x10, true, 0x5136e2e8b72d911)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif