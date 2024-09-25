#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIXDEVICE_ID.VendorId", vendor_id, 0x0, 0x10, true, 0x93c48a940e605148)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIXDEVICE_ID.DeviceId", device_id, 0x10, 0x10, true, 0x64662f4f537e2d05)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_WHEA_PCIXDEVICE_ID.ClassCode", class_code, 0x20, 0x18, true, 0xbb220be5b6b96989, 24, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIXDEVICE_ID.FunctionNumber", function_number, 0x38, 0x8, true, 0xe0d67ed089885a94, 8, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIXDEVICE_ID.DeviceNumber", device_number, 0x40, 0x8, true, 0x996a076d86e1e1f9, 8, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIXDEVICE_ID.BusNumber", bus_number, 0x48, 0x8, true, 0xd8dda450c26e9404, 8, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIXDEVICE_ID.SegmentNumber", segment_number, 0x50, 0x8, true, 0xd280bc140e72ead9, 8, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif