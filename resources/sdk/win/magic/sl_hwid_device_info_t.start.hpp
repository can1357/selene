#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_HWID_DEVICE_INFO.SizeBytes", size_bytes, 0x0, 0x20, true, 0xb9ce6e9d689f0fd8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SL_HWID_DEVICE_INFO.Type", type, 0x20, 0x8, true, 0x84a89d94e4f78c7f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SL_HWID_DEVICE_INFO.DeviceRemovalPolicy", device_removal_policy, 0x28, 0x8, true, 0x8afbd2349983fc03)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SL_HWID_DEVICE_INFO.AuthenticationStatus", authentication_status, 0x30, 0x8, true, 0x23e1a8c6f4f282cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SL_HWID_DEVICE_INFO.Disposition", disposition, 0x38, 0x8, true, 0x4f15fa925d3557ab)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SL_HWID_DEVICE_INFO.DeviceNodeLevel", device_node_level, 0x40, 0x20, true, 0xf0428be9ee0eedc4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SL_HWID_DEVICE_INFO.Guid", guid, 0x60, 0x80, true, 0xb83dfa70991920e6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SL_HWID_DEVICE_INFO.Data", data, 0xe0, 0x8, true, 0x4fdf8d424e950401)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif