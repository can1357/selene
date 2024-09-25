#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_FIRMWARE_ERROR_RECORD_REFERENCE.Type", type, 0x0, 0x8, true, 0x102b2b1ff0925e05)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_FIRMWARE_ERROR_RECORD_REFERENCE.FirmwareRecordId", firmware_record_id, 0x40, 0x40, true, 0x1f44e0f0b7959742)
#else
#define _m00
#define _m01
#endif