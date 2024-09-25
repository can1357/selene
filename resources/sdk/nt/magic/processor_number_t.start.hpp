#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESSOR_NUMBER.Group", group, 0x0, 0x10, true, 0xea597a803cfdbe04)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCESSOR_NUMBER.Number", number, 0x10, 0x8, true, 0x4bb1115b046c9cb5)
#else
#define _m00
#define _m01
#endif