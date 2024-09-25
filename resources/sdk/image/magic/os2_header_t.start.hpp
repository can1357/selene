#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_magic", ne_magic, 0x0, 0x10, true, 0x84ac5ba65645f27a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_IMAGE_OS2_HEADER.ne_ver", ne_ver, 0x10, 0x8, true, 0x1ff75d1ead710c0a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_IMAGE_OS2_HEADER.ne_rev", ne_rev, 0x18, 0x8, true, 0x3fc8109be940359c)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_enttab", ne_enttab, 0x20, 0x10, true, 0x379d665e4b4d74c5)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_cbenttab", ne_cbenttab, 0x30, 0x10, true, 0x5f940dfd66d91a8c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IMAGE_OS2_HEADER.ne_crc", ne_crc, 0x40, 0x20, true, 0x84ed0ce510e549b6)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_flags", ne_flags, 0x60, 0x10, true, 0x75f017282e23455)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_autodata", ne_autodata, 0x70, 0x10, true, 0xd78044634871edd2)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_heap", ne_heap, 0x80, 0x10, true, 0x91b1bffb661eb237)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_stack", ne_stack, 0x90, 0x10, true, 0x1fe72010e8578eec)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IMAGE_OS2_HEADER.ne_csip", ne_csip, 0xa0, 0x20, true, 0x37def9fedce123d4)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IMAGE_OS2_HEADER.ne_sssp", ne_sssp, 0xc0, 0x20, true, 0x15afeca1367df1d2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_cseg", ne_cseg, 0xe0, 0x10, true, 0x2612767feef33c68)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_cmod", ne_cmod, 0xf0, 0x10, true, 0xd67be263acf48fe0)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_cbnrestab", ne_cbnrestab, 0x100, 0x10, true, 0xb71f020c34813550)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_segtab", ne_segtab, 0x110, 0x10, true, 0x579a490a038d291d)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_rsrctab", ne_rsrctab, 0x120, 0x10, true, 0xcaad4b361319ba8)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_restab", ne_restab, 0x130, 0x10, true, 0x3b556e6992589a3f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_modtab", ne_modtab, 0x140, 0x10, true, 0x5850e97653be0682)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_imptab", ne_imptab, 0x150, 0x10, true, 0xc1a00ec4e42e15db)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IMAGE_OS2_HEADER.ne_nrestab", ne_nrestab, 0x160, 0x20, true, 0x2a7c75ee69585988)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_cmovent", ne_cmovent, 0x180, 0x10, true, 0x724f6e60884ed2a6)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_align", ne_align, 0x190, 0x10, true, 0x6eeef3b98de6c85b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_cres", ne_cres, 0x1a0, 0x10, true, 0x9ab44ae55289a433)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_OS2_HEADER.ne_exetyp", ne_exetyp, 0x1b0, 0x8, true, 0xa2d4fc165145ccc9)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_OS2_HEADER.ne_flagsothers", ne_flagsothers, 0x1b8, 0x8, true, 0x2ffdcde02e2c3580)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_pretthunks", ne_pretthunks, 0x1c0, 0x10, true, 0x41a770e560506ef2)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_psegrefbytes", ne_psegrefbytes, 0x1d0, 0x10, true, 0x52d2aa97d48bd83b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_swaparea", ne_swaparea, 0x1e0, 0x10, true, 0x259e04b7027aa8a6)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_OS2_HEADER.ne_expver", ne_expver, 0x1f0, 0x10, true, 0xbae96db69eecf3e3)
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
#endif