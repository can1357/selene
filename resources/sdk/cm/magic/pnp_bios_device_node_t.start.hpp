#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PNP_BIOS_DEVICE_NODE.Size", size, 0x0, 0x10, true, 0x5fb704a5fd5d520e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PNP_BIOS_DEVICE_NODE.Node", node, 0x10, 0x8, true, 0xa2e5c4e7c2f19f40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PNP_BIOS_DEVICE_NODE.ProductId", product_id, 0x18, 0x20, true, 0x5ed6f02246b1ef7c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CM_PNP_BIOS_DEVICE_NODE.DeviceType", device_type, 0x38, 0x18, true, 0xcade23a7eae3df8b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PNP_BIOS_DEVICE_NODE.DeviceAttributes", device_attributes, 0x50, 0x10, true, 0x4420bb7771b83746)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif