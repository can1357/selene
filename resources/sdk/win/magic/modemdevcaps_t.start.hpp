#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwActualSize", dw_actual_size, 0x0, 0x20, true, 0x55c4804389ca826d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwRequiredSize", dw_required_size, 0x20, 0x20, true, 0x9327c767f9a0cded)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwDevSpecificOffset", dw_dev_specific_offset, 0x40, 0x20, true, 0xcdfde1eb689bd127)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwDevSpecificSize", dw_dev_specific_size, 0x60, 0x20, true, 0x2164fd0f2f709516)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemProviderVersion", dw_modem_provider_version, 0x80, 0x20, true, 0x66980d0c15053ed5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemManufacturerOffset", dw_modem_manufacturer_offset, 0xa0, 0x20, true, 0x25afdc5e1bb0c7fc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemManufacturerSize", dw_modem_manufacturer_size, 0xc0, 0x20, true, 0xdecbd9d23921f9c9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemModelOffset", dw_modem_model_offset, 0xe0, 0x20, true, 0xe2d5e8c062460873)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemModelSize", dw_modem_model_size, 0x100, 0x20, true, 0x21fe299f6f5e30c1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemVersionOffset", dw_modem_version_offset, 0x120, 0x20, true, 0x7a0017d4d908e155)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemVersionSize", dw_modem_version_size, 0x140, 0x20, true, 0x7f7ecba0acf0ec8c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwDialOptions", dw_dial_options, 0x160, 0x20, true, 0xbb2aa4fc22ca1ee1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwCallSetupFailTimer", dw_call_setup_fail_timer, 0x180, 0x20, true, 0x7f59535ecc87387a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwInactivityTimeout", dw_inactivity_timeout, 0x1a0, 0x20, true, 0xbfffc89f5440f20e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwSpeakerVolume", dw_speaker_volume, 0x1c0, 0x20, true, 0x13e816b4ef1097cd)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwSpeakerMode", dw_speaker_mode, 0x1e0, 0x20, true, 0x2212f416c35b93a1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwModemOptions", dw_modem_options, 0x200, 0x20, true, 0xb9721fa9e1d7ebb)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwMaxDTERate", dw_max_dte_rate, 0x220, 0x20, true, 0x3d0350801e1fea9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MODEMDEVCAPS.dwMaxDCERate", dw_max_dce_rate, 0x240, 0x20, true, 0x5741a4ef0979ce8)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MODEMDEVCAPS.abVariablePortion", ab_variable_portion, 0x260, 0x8, true, 0xb23c285c01b90b0c)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif