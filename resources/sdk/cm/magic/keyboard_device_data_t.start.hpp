#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEYBOARD_DEVICE_DATA.Version", version, 0x0, 0x10, true, 0x16fb1ec7e6af9b96)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEYBOARD_DEVICE_DATA.Revision", revision, 0x10, 0x10, true, 0x4c55c1ade67baeac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_KEYBOARD_DEVICE_DATA.Type", type, 0x20, 0x8, true, 0x347de15215dd89ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_KEYBOARD_DEVICE_DATA.Subtype", subtype, 0x28, 0x8, true, 0x87d389cd8809ba59)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEYBOARD_DEVICE_DATA.KeyboardFlags", keyboard_flags, 0x30, 0x10, true, 0xc9688d8146038bd9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif