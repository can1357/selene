#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwSize", dw_size, 0x0, 0x20, true, 0x5577aefc8e37184c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwVersion", dw_version, 0x20, 0x20, true, 0x81b1a61463daf214)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwFileType", dw_file_type, 0x40, 0x20, true, 0x365caa4efd4ca492)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILEMUIINFO.pChecksum", p_checksum, 0x60, 0x80, true, 0xf54b938327b2c560)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_FILEMUIINFO.pServiceChecksum", p_service_checksum, 0xe0, 0x80, true, 0x2bdc40594a029b88)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwLanguageNameOffset", dw_language_name_offset, 0x160, 0x20, true, 0x2c98a6029dc7076)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwTypeIDMainSize", dw_type_id_main_size, 0x180, 0x20, true, 0x6e61f6e7f9e2dfb0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwTypeIDMainOffset", dw_type_id_main_offset, 0x1a0, 0x20, true, 0x55f3b42d4b47e0e0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwTypeNameMainOffset", dw_type_name_main_offset, 0x1c0, 0x20, true, 0x77121c482e108c78)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwTypeIDMUISize", dw_type_idmui_size, 0x1e0, 0x20, true, 0xcffaf8ceadba821e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwTypeIDMUIOffset", dw_type_idmui_offset, 0x200, 0x20, true, 0x46886d62e2ea7e0a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILEMUIINFO.dwTypeNameMUIOffset", dw_type_name_mui_offset, 0x220, 0x20, true, 0x7dcb98d77eb1a9b4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_FILEMUIINFO.abBuffer", ab_buffer, 0x240, 0x40, true, 0x8a2b64c6042371a4)
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
#endif