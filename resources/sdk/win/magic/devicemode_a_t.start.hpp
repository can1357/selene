#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_devicemodeA.dmDeviceName", dm_device_name, 0x0, 0x0, true, 0xd6138e9e47f829d4)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeA.dmSpecVersion", dm_spec_version, 0x100, 0x10, true, 0x4dcc02fd3d5ddab)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeA.dmDriverVersion", dm_driver_version, 0x110, 0x10, true, 0xee654ffe5cdd9779)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeA.dmSize", dm_size, 0x120, 0x10, true, 0x7cdc19937afbf55c)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeA.dmDriverExtra", dm_driver_extra, 0x130, 0x10, true, 0x29b341c34d14350b)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmFields", dm_fields, 0x140, 0x20, true, 0x29a3889c17979d96)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmOrientation", dm_orientation, 0x160, 0x10, true, 0xea8417afc56a5889)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmPaperSize", dm_paper_size, 0x170, 0x10, true, 0x7a914d9c54f3c81b)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmPaperLength", dm_paper_length, 0x180, 0x10, true, 0xe21ee26e4fe3d296)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmPaperWidth", dm_paper_width, 0x190, 0x10, true, 0xdd12da1a247526cb)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmScale", dm_scale, 0x1a0, 0x10, true, 0x735ccb0fb763977c)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmCopies", dm_copies, 0x1b0, 0x10, true, 0xb1057a1a540bc7d3)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmDefaultSource", dm_default_source, 0x1c0, 0x10, true, 0xa330a03ec287730c)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmPrintQuality", dm_print_quality, 0x1d0, 0x10, true, 0xac27d8558a089114)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "_devicemodeA.dmPosition", dm_position, 0x160, 0x40, true, 0x3936585ff7b868ca)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmDisplayOrientation", dm_display_orientation, 0x1a0, 0x20, true, 0x8869dc7f1b4cb209)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmDisplayFixedOutput", dm_display_fixed_output, 0x1c0, 0x20, true, 0x3bade667ae299b6d)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmColor", dm_color, 0x1e0, 0x10, true, 0x5e8beccd241b1323)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmDuplex", dm_duplex, 0x1f0, 0x10, true, 0xf0a8218cc1670a40)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmYResolution", dm_y_resolution, 0x200, 0x10, true, 0x523b7b9de4743c83)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmTTOption", dm_tt_option, 0x210, 0x10, true, 0x2b06d17b43c13462)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeA.dmCollate", dm_collate, 0x220, 0x10, true, 0xde5c63da1d80699d)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_devicemodeA.dmFormName", dm_form_name, 0x230, 0x0, true, 0xf859f27b02ca7961)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeA.dmLogPixels", dm_log_pixels, 0x330, 0x10, true, 0x8fd4b654deea319d)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmBitsPerPel", dm_bits_per_pel, 0x340, 0x20, true, 0xcdb400a609c87220)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmPelsWidth", dm_pels_width, 0x360, 0x20, true, 0x6ee8850ec5f2ac6d)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmPelsHeight", dm_pels_height, 0x380, 0x20, true, 0xb75621f3f061a49)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmDisplayFlags", dm_display_flags, 0x3a0, 0x20, true, 0x972457dace1d85b8)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmNup", dm_nup, 0x3a0, 0x20, true, 0x77062617701a8f9c)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmDisplayFrequency", dm_display_frequency, 0x3c0, 0x20, true, 0x99bf36f3f9210128)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmICMMethod", dm_icm_method, 0x3e0, 0x20, true, 0xa01b0fd4b86f91d3)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmICMIntent", dm_icm_intent, 0x400, 0x20, true, 0x4be860e4673328dd)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmMediaType", dm_media_type, 0x420, 0x20, true, 0x2e6650ba5d1370bc)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmDitherType", dm_dither_type, 0x440, 0x20, true, 0xb39a5297705fa1ab)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmReserved1", dm_reserved1, 0x460, 0x20, true, 0x30936a1457a9f0aa)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmReserved2", dm_reserved2, 0x480, 0x20, true, 0xc956d795969d951d)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmPanningWidth", dm_panning_width, 0x4a0, 0x20, true, 0x9df29cb0d380f107)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeA.dmPanningHeight", dm_panning_height, 0x4c0, 0x20, true, 0xefd1a94a3b360708)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#endif