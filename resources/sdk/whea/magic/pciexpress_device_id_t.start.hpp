#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIEXPRESS_DEVICE_ID.VendorID", vendor_id, 0x0, 0x10, true, 0xaeaa72cfa3244f5b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIEXPRESS_DEVICE_ID.DeviceID", device_id, 0x10, 0x10, true, 0x48c1cc8cc9484e1e)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_WHEA_PCIEXPRESS_DEVICE_ID.ClassCode", class_code, 0x20, 0x18, true, 0xfd4507bc3ed8154d, 24, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIEXPRESS_DEVICE_ID.FunctionNumber", function_number, 0x38, 0x8, true, 0xfb4e4e525d6bd8a2, 8, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIEXPRESS_DEVICE_ID.DeviceNumber", device_number, 0x40, 0x8, true, 0x105d7fa1a1b99eb5, 8, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_WHEA_PCIEXPRESS_DEVICE_ID.Segment", segment, 0x48, 0x10, true, 0x56fa8d6141f54380, 16, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIEXPRESS_DEVICE_ID.PrimaryBusNumber", primary_bus_number, 0x58, 0x8, true, 0x84850bbbbb45f46c, 8, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_PCIEXPRESS_DEVICE_ID.SecondaryBusNumber", secondary_bus_number, 0x60, 0x8, true, 0xd92420de467f61bf, 8, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint13_t), "_WHEA_PCIEXPRESS_DEVICE_ID.SlotNumber", slot_number, 0x6b, 0xd, true, 0x287996f29eeb3961, 13, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif