#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_devicemodeW.dmDeviceName", dm_device_name, 0x0, 0x0, true, 0x9df91137605ea5aa)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeW.dmSpecVersion", dm_spec_version, 0x200, 0x10, true, 0x7a806946eaad0586)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeW.dmDriverVersion", dm_driver_version, 0x210, 0x10, true, 0xb1add0f9d03cfeb)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeW.dmSize", dm_size, 0x220, 0x10, true, 0x2b1e1d5326fb8d7d)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeW.dmDriverExtra", dm_driver_extra, 0x230, 0x10, true, 0x6017b17552db5d10)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmFields", dm_fields, 0x240, 0x20, true, 0xda5118491d55c5b2)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmOrientation", dm_orientation, 0x260, 0x10, true, 0x2f463da31e30744a)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmPaperSize", dm_paper_size, 0x270, 0x10, true, 0xb940a80d52133c)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmPaperLength", dm_paper_length, 0x280, 0x10, true, 0x6f9040195578dddc)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmPaperWidth", dm_paper_width, 0x290, 0x10, true, 0x3050cd88d69248a4)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmScale", dm_scale, 0x2a0, 0x10, true, 0x4d3c9abf4033c6e4)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmCopies", dm_copies, 0x2b0, 0x10, true, 0x45a82ac2f995abae)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmDefaultSource", dm_default_source, 0x2c0, 0x10, true, 0xc012dc9c1bd7b2a8)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmPrintQuality", dm_print_quality, 0x2d0, 0x10, true, 0x36442fc64f31c913)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointl_t), "_devicemodeW.dmPosition", dm_position, 0x260, 0x40, true, 0x9b03b475f3d9a774)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmDisplayOrientation", dm_display_orientation, 0x2a0, 0x20, true, 0x6d8c848c0b89ec78)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmDisplayFixedOutput", dm_display_fixed_output, 0x2c0, 0x20, true, 0x2fe90aac9d6a81b8)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmColor", dm_color, 0x2e0, 0x10, true, 0xdc7cb6d5ea3255ff)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmDuplex", dm_duplex, 0x2f0, 0x10, true, 0x671ae2b65f2ada40)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmYResolution", dm_y_resolution, 0x300, 0x10, true, 0x4c3dff7d837ccdd6)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmTTOption", dm_tt_option, 0x310, 0x10, true, 0xf2a7e300ee2b5d9e)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_devicemodeW.dmCollate", dm_collate, 0x320, 0x10, true, 0xb9c0406c6db0c12e)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_devicemodeW.dmFormName", dm_form_name, 0x330, 0x0, true, 0x40fefb3c35784484)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_devicemodeW.dmLogPixels", dm_log_pixels, 0x530, 0x10, true, 0xee8e32d58d221286)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmBitsPerPel", dm_bits_per_pel, 0x540, 0x20, true, 0x2a1041e5bdda88f7)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmPelsWidth", dm_pels_width, 0x560, 0x20, true, 0x8d01e5453e48fb8c)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmPelsHeight", dm_pels_height, 0x580, 0x20, true, 0x4980d1d793550b5b)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmDisplayFlags", dm_display_flags, 0x5a0, 0x20, true, 0x4866f1a53c8aaa31)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmNup", dm_nup, 0x5a0, 0x20, true, 0x3a942d8b4e54a8af)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmDisplayFrequency", dm_display_frequency, 0x5c0, 0x20, true, 0x2f9020500ff89e71)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmICMMethod", dm_icm_method, 0x5e0, 0x20, true, 0x6b031aecd65408da)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmICMIntent", dm_icm_intent, 0x600, 0x20, true, 0xb6020122098e72d0)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmMediaType", dm_media_type, 0x620, 0x20, true, 0x5b75906e7e4b8f19)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmDitherType", dm_dither_type, 0x640, 0x20, true, 0xa179e63f059fdf1)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmReserved1", dm_reserved1, 0x660, 0x20, true, 0x87d44644d940ba53)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmReserved2", dm_reserved2, 0x680, 0x20, true, 0x1c01c0c3acdf8896)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmPanningWidth", dm_panning_width, 0x6a0, 0x20, true, 0xf44aa232478bd5cb)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_devicemodeW.dmPanningHeight", dm_panning_height, 0x6c0, 0x20, true, 0x1ea00e34e94c671b)
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