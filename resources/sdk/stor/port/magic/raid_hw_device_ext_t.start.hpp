#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_miniport_t*), "_RAID_HW_DEVICE_EXT.Miniport", miniport, 0x0, 0x40, true, 0x7e48db88ca5e26e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_RAID_HW_DEVICE_EXT.HwDeviceExtension", hw_device_extension, 0x80, 0x0, true, 0x94d7f98f924e1628)
#else
#define _m00
#define _m01
#endif