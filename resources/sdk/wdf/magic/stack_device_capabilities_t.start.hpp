#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_capabilities_t), "_STACK_DEVICE_CAPABILITIES.DeviceCaps", device_caps, 0x0, 0x0, true, 0x5c8654db8fc8af92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum nt::device_wake_depth_t, 6>), "_STACK_DEVICE_CAPABILITIES.DeepestWakeableDstate", deepest_wakeable_dstate, 0x200, 0xc0, true, 0x39b76b06aed1bffd)
#else
#define _m00
#define _m01
#endif