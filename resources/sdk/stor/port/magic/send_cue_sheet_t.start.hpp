#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_CUE_SHEET.OperationCode", operation_code, 0x0, 0x8, true, 0xba760c3a3c49361c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_SEND_CUE_SHEET.CueSheetSize", cue_sheet_size, 0x30, 0x18, true, 0x2ae95ef238e37e7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_CUE_SHEET.Control", control, 0x48, 0x8, true, 0x451a231b8dbf7d51)
#else
#define _m00
#define _m01
#define _m02
#endif