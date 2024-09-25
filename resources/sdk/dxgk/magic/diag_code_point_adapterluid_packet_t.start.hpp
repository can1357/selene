#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dxgk::diag_header_t), "_DXGK_DIAG_CODE_POINT_ADAPTERLUID_PACKET.Header", header, 0x0, 0x80, true, 0xd1c1d8bb9a48865f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_code_point_type_t), "_DXGK_DIAG_CODE_POINT_ADAPTERLUID_PACKET.CodePointType", code_point_type, 0x180, 0x20, true, 0x8cc22923f40d9faa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_CODE_POINT_ADAPTERLUID_PACKET.Param1", param1, 0x1a0, 0x20, true, 0xb9b3b5b49841bf29)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_CODE_POINT_ADAPTERLUID_PACKET.Param2", param2, 0x1c0, 0x20, true, 0x3a8659c7aeaeb6e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_CODE_POINT_ADAPTERLUID_PACKET.Param3", param3, 0x1e0, 0x20, true, 0x4cf49482d6c36de8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_DXGK_DIAG_CODE_POINT_ADAPTERLUID_PACKET.AdapterLuid", adapter_luid, 0x200, 0x40, true, 0x9d0d9d8373eb4dee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif