#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.CommandStatus", command_status, 0x0, 0x20, true, 0x6ccdc29d4802715a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.MaximumRangeDescriptors", maximum_range_descriptors, 0x20, 0x10, true, 0x382bed3fc9c9c2ea)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.Restricted", restricted, 0x30, 0x8, true, 0x854c8f93eeceaf9f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.MaximumInactivityTimer", maximum_inactivity_timer, 0x40, 0x20, true, 0xf16708a15be4b87b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.DefaultInactivityTimer", default_inactivity_timer, 0x60, 0x20, true, 0xd79324e95b45b525)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.MaximumTokenTransferSize", maximum_token_transfer_size, 0x80, 0x40, true, 0x8a6f318accc4a65d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.OptimalTransferCount", optimal_transfer_count, 0xc0, 0x40, true, 0xf0b968f9be3eac81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif