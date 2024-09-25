#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SD_CHANGE_MACHINE_SID_INPUT.CurrentMachineSIDOffset", current_machine_sid_offset, 0x0, 0x10, true, 0x62c483376926a4c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SD_CHANGE_MACHINE_SID_INPUT.CurrentMachineSIDLength", current_machine_sid_length, 0x10, 0x10, true, 0x63719e857b02f72a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SD_CHANGE_MACHINE_SID_INPUT.NewMachineSIDOffset", new_machine_sid_offset, 0x20, 0x10, true, 0xd43ad20d5af3e09a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SD_CHANGE_MACHINE_SID_INPUT.NewMachineSIDLength", new_machine_sid_length, 0x30, 0x10, true, 0xd9a1fcc49a10aed6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif