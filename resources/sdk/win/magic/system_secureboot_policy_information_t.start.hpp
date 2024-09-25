#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_SECUREBOOT_POLICY_INFORMATION.PolicyPublisher", policy_publisher, 0x0, 0x80, true, 0xd32dc7ecd8fd7d37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECUREBOOT_POLICY_INFORMATION.PolicyVersion", policy_version, 0x80, 0x20, true, 0xe15232bc921e5808)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECUREBOOT_POLICY_INFORMATION.PolicyOptions", policy_options, 0xa0, 0x20, true, 0x7a34c03b9d532c6c)
#else
#define _m00
#define _m01
#define _m02
#endif