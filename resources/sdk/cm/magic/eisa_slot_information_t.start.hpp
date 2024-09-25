#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_SLOT_INFORMATION.ReturnCode", return_code, 0x0, 0x8, true, 0xb449aa6b53b27be5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_SLOT_INFORMATION.ReturnFlags", return_flags, 0x8, 0x8, true, 0x6679336a9a29d6b5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_SLOT_INFORMATION.MajorRevision", major_revision, 0x10, 0x8, true, 0xcb7bdbdefb37f560)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_SLOT_INFORMATION.MinorRevision", minor_revision, 0x18, 0x8, true, 0xe59244da0b3856fb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_EISA_SLOT_INFORMATION.Checksum", checksum, 0x20, 0x10, true, 0xab1363e8488972b0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_SLOT_INFORMATION.NumberFunctions", number_functions, 0x30, 0x8, true, 0x6eb4f2d669f2f055)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_SLOT_INFORMATION.FunctionInformation", function_information, 0x38, 0x8, true, 0x6813a3d94838418c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_EISA_SLOT_INFORMATION.CompressedId", compressed_id, 0x40, 0x20, true, 0xbd4fde1c0962ab0e)
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