#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::event_log_entry_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.WheaEventLogEntry", whea_event_log_entry, 0x0, 0x0, true, 0x85de75c1b3358602)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.FirmwareBank", firmware_bank, 0x100, 0x10, true, 0x6ab8b792bb7cbace)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.FirmwareCol", firmware_col, 0x110, 0x10, true, 0x2114f625484ed077)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.FirmwareRow", firmware_row, 0x120, 0x10, true, 0x725e335961e32a1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.RetryRdBank", retry_rd_bank, 0x130, 0x10, true, 0x30e8ee7d6a53804c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.RetryRdCol", retry_rd_col, 0x140, 0x10, true, 0xbe3285f2dcf1720)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.RetryRdRow", retry_rd_row, 0x150, 0x10, true, 0x3e571bef02ee1323)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.TaBank", ta_bank, 0x160, 0x10, true, 0xe4c9321affa9aac2)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.TaCol", ta_col, 0x170, 0x10, true, 0xdd3abc8d1f001916)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PSHED_PLUGIN_DIMM_MISMATCH.TaRow", ta_row, 0x180, 0x10, true, 0xfa32f9bebfd14c99)
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
#define _m09
#endif