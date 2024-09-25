#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVIDEO_MONITOR_DESCRIPTOR.DescriptorSize", descriptor_size, 0x0, 0x20, true, 0x1d25fd2a827644d1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagVIDEO_MONITOR_DESCRIPTOR.Descriptor", descriptor, 0x20, 0x8, true, 0xc41ced4a7e6e3b89)
#else
#define _m00
#define _m01
#endif