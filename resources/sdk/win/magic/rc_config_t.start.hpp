#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwSignature", dw_signature, 0x0, 0x20, true, 0x1a89356975d8e625)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwLength", dw_length, 0x20, 0x20, true, 0xcee53f54a08d34e5)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwRCConfigVersion", dw_rc_config_version, 0x40, 0x20, true, 0x55b55892d6cd6664)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwFilePathType", dw_file_path_type, 0x60, 0x20, true, 0x5c2d5c691f7f9e4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwFileType", dw_file_type, 0x80, 0x20, true, 0xa509cc75b2c4777f)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwSystemAttributes", dw_system_attributes, 0xa0, 0x20, true, 0x5a7249c1ac4d54f0)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwUltimateFallbackLocation", dw_ultimate_fallback_location, 0xc0, 0x20, true, 0xf9d9a52bdd82f2d6)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_RC_CONFIG.dwServiceCheckSum", dw_service_check_sum, 0xe0, 0x80, true, 0x9349721fdfa812e1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_RC_CONFIG.dwChecksum", dw_checksum, 0x160, 0x80, true, 0x76410a215245ea1e)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwReserved1", dw_reserved1, 0x1e0, 0x20, true, 0x6b2786c18e87158e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwReserved2", dw_reserved2, 0x200, 0x20, true, 0xac0d92a2493ca463)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIFileNameOffset", dw_mui_file_name_offset, 0x220, 0x20, true, 0x5686faced6a0dc9b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIFileNameLength", dw_mui_file_name_length, 0x240, 0x20, true, 0x3ea19ea1c3c8371a)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIFilePathOffset", dw_mui_file_path_offset, 0x260, 0x20, true, 0x925855f77e55b356)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIFilePathLength", dw_mui_file_path_length, 0x280, 0x20, true, 0xfaae162e5c90b712)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMainResNameTypesOffset", dw_main_res_name_types_offset, 0x2a0, 0x20, true, 0xa172d93da13a88a3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMainResNameTypesLength", dw_main_res_name_types_length, 0x2c0, 0x20, true, 0x20d067132dfb78f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMainResIDTypesOffset", dw_main_res_id_types_offset, 0x2e0, 0x20, true, 0xf13150aa5a868811)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMainResIDTypesLength", dw_main_res_id_types_length, 0x300, 0x20, true, 0x28449072990736b9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIResNameTypesOffset", dw_mui_res_name_types_offset, 0x320, 0x20, true, 0x21575ed392798b59)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIResNameTypesLength", dw_mui_res_name_types_length, 0x340, 0x20, true, 0x6f55a4e2522d0fb7)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIResIDTypesOffset", dw_mui_res_id_types_offset, 0x360, 0x20, true, 0xeaa9fb7a2b171b6f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwMUIResIDTypesLength", dw_mui_res_id_types_length, 0x380, 0x20, true, 0x17b58cf4bc5e5b19)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwLanguageOffset", dw_language_offset, 0x3a0, 0x20, true, 0x1bb8647bb57e2fe2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwLanguageLength", dw_language_length, 0x3c0, 0x20, true, 0x4fc075ac577c1001)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwUltimateFallbackLanguageOffset", dw_ultimate_fallback_language_offset, 0x3e0, 0x20, true, 0x8e5a330bd3cb1260)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RC_CONFIG.dwUltimateFallbackLanguageLength", dw_ultimate_fallback_language_length, 0x400, 0x20, true, 0xc1dc6eecb84b425d)
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
#endif