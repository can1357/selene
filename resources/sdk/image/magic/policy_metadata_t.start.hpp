#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_POLICY_METADATA.Version", version, 0x0, 0x8, true, 0x5a3c561170d296ec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_POLICY_METADATA.ApplicationId", application_id, 0x40, 0x40, true, 0xc44d1263bcfd3330)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct image::policy_entry_t>), "_IMAGE_POLICY_METADATA.Policies", policies, 0x80, 0x0, true, 0x391b8f61882dc212)
#else
#define _m00
#define _m01
#define _m02
#endif