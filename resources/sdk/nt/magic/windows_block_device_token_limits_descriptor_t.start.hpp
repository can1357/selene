#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.DescriptorType", descriptor_type, 0x0, 0x10, true, 0x22ac698fb787f13f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.DescriptorLength", descriptor_length, 0x10, 0x10, true, 0x728f26c7986627e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.VendorSpecific", vendor_specific, 0x20, 0x30, true, 0xbff1cfb93776012f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.MaximumRangeDescriptors", maximum_range_descriptors, 0x50, 0x10, true, 0xb5176df6db207975)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.MaximumInactivityTimer", maximum_inactivity_timer, 0x60, 0x20, true, 0x3305d75f9be356ae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.DefaultInactivityTimer", default_inactivity_timer, 0x80, 0x20, true, 0xb1c8559a77c6024e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.MaximumTokenTransferSize", maximum_token_transfer_size, 0xa0, 0x40, true, 0x6813845ae3e744dd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_WINDOWS_BLOCK_DEVICE_TOKEN_LIMITS_DESCRIPTOR.OptimalTransferCount", optimal_transfer_count, 0xe0, 0x40, true, 0x64ed9ecbc137559b)
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