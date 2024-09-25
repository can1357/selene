#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_ID_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x35c5504cc9cb8a92)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_ID_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xf9eb03d28568ea38)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_ID_DESCRIPTOR.NumberOfIdentifiers", number_of_identifiers, 0x40, 0x20, true, 0x9ee5377065e279b6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_DEVICE_ID_DESCRIPTOR.Identifiers", identifiers, 0x60, 0x8, true, 0x531dbbe4ee2f807b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif