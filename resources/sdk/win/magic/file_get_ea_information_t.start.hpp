#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_GET_EA_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x32517e840f00afc7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_GET_EA_INFORMATION.EaNameLength", ea_name_length, 0x20, 0x8, true, 0xd4965e06697a0f75)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_FILE_GET_EA_INFORMATION.EaName", ea_name, 0x28, 0x8, true, 0x8aa3af3b5566cd7e)
#else
#define _m00
#define _m01
#define _m02
#endif