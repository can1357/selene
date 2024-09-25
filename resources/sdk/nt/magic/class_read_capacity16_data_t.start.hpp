#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CLASS_READ_CAPACITY16_DATA.CommandStatus", command_status, 0x0, 0x20, true, 0xff62b1500b75d64)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_READ_CAPACITY16_DATA.BytesPerLogicalSector", bytes_per_logical_sector, 0x20, 0x20, true, 0x970245b294b0df8d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_READ_CAPACITY16_DATA.BytesPerPhysicalSector", bytes_per_physical_sector, 0x40, 0x20, true, 0x8ba4a22ca3f85821)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_READ_CAPACITY16_DATA.BytesOffsetForSectorAlignment", bytes_offset_for_sector_alignment, 0x60, 0x20, true, 0x931ac590360755fd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_READ_CAPACITY16_DATA.LBProvisioningEnabled", lb_provisioning_enabled, 0x80, 0x8, true, 0x9ae625ff722700e0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_READ_CAPACITY16_DATA.LBProvisioningReadZeros", lb_provisioning_read_zeros, 0x88, 0x8, true, 0x4f09d5e12f8c3976)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif