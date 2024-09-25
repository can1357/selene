#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(system_secureboot_policy_information_t ), "_SYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION.PolicyInformation", policy_information, 0x0, 0xc0, true, 0x7e8ba37bdd82e123)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION.PolicySize", policy_size, 0xc0, 0x20, true, 0xb4925ee909a46f81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION.Policy", policy, 0xe0, 0x8, true, 0x57b0f8b74eb3cc22)
#else
#define _m00
#define _m01
#define _m02
#endif