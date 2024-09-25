#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_RICH_DEVICE_DESCRIPTION.Version", version, 0x0, 0x20, true, 0x222a2c7bba20818f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_RICH_DEVICE_DESCRIPTION.Size", size, 0x20, 0x20, true, 0x88314db6fe1832ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 17>), "_STOR_RICH_DEVICE_DESCRIPTION.VendorId", vendor_id, 0x40, 0x88, true, 0x263689bbfce15273)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 65>), "_STOR_RICH_DEVICE_DESCRIPTION.ModelNumber", model_number, 0xc8, 0x8, true, 0xca2ef2b141732635)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 17>), "_STOR_RICH_DEVICE_DESCRIPTION.FirmwareRevision", firmware_revision, 0x2d0, 0x88, true, 0x712642f542612fc6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif