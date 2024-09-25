#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 41>), "_STOR_ATA_DEVICE_ID.ModelNumber", model_number, 0x0, 0x48, true, 0x12e98ec0acf56b5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 9>), "_STOR_ATA_DEVICE_ID.FirmwareRevision", firmware_revision, 0x148, 0x48, true, 0xc953fa74b0c0b2cb)
#else
#define _m00
#define _m01
#endif