#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::domain_configuration_arch_t), "_DOMAIN_CONFIGURATION.Type", type, 0x0, 0x20, true, 0x6390918017677eba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::domain_configuration_arm64_t), "_DOMAIN_CONFIGURATION.Arm64", arm64, 0x40, 0x0, true, 0xd33727d601e369ed)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::domain_configuration_x64_t), "_DOMAIN_CONFIGURATION.X64", x64, 0x40, 0x80, true, 0xab4578065ef034e2)
#else
#define _m00
#define _m01
#define _m02
#endif