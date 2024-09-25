#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwActualSize", dw_actual_size, 0x0, 0x20, true, 0x5297e22e3b960a21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwRequiredSize", dw_required_size, 0x20, 0x20, true, 0x78d5867d6ca374a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwDevSpecificOffset", dw_dev_specific_offset, 0x40, 0x20, true, 0x32b6d5c205784a0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwDevSpecificSize", dw_dev_specific_size, 0x60, 0x20, true, 0xe28cbbcd6cd8b1e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwCallSetupFailTimer", dw_call_setup_fail_timer, 0x80, 0x20, true, 0x15aef090f02ec75c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwInactivityTimeout", dw_inactivity_timeout, 0xa0, 0x20, true, 0xebac58c1b8e71bda)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwSpeakerVolume", dw_speaker_volume, 0xc0, 0x20, true, 0x1378c9b284ae12b0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwSpeakerMode", dw_speaker_mode, 0xe0, 0x20, true, 0x2f7c4a086d629583)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwPreferredModemOptions", dw_preferred_modem_options, 0x100, 0x20, true, 0x98e3363628b20c42)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwNegotiatedModemOptions", dw_negotiated_modem_options, 0x120, 0x20, true, 0x1a07c328152eccbf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMSETTINGS.dwNegotiatedDCERate", dw_negotiated_dce_rate, 0x140, 0x20, true, 0xfb6b97b387c9ca93)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MODEMSETTINGS.abVariablePortion", ab_variable_portion, 0x160, 0x8, true, 0x94a43c0e41c918a9)
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
#define _m10
#define _m11
#endif