#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_EA_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x8f49bddc597b0d5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_FULL_EA_INFORMATION.Flags", flags, 0x20, 0x8, true, 0x9a83f927ed8caf41)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_FULL_EA_INFORMATION.EaNameLength", ea_name_length, 0x28, 0x8, true, 0xaf999c2e8d67e149)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_FULL_EA_INFORMATION.EaValueLength", ea_value_length, 0x30, 0x10, true, 0x48f3260222b20f9f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_FILE_FULL_EA_INFORMATION.EaName", ea_name, 0x40, 0x8, true, 0x13ee722d4ab23630)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif