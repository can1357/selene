#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dxgk::diag_header_t), "_DXGK_DIAG_CODE_POINT_PACKET.Header", header, 0x0, 0x80, true, 0x86821025d05d7757)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_code_point_type_t), "_DXGK_DIAG_CODE_POINT_PACKET.CodePointType", code_point_type, 0x180, 0x20, true, 0xe9dbd5e7cd7e578b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_CODE_POINT_PACKET.Param1", param1, 0x1a0, 0x20, true, 0x14161c5af486fd35)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_CODE_POINT_PACKET.Param2", param2, 0x1c0, 0x20, true, 0x4e9f713b87c873ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_CODE_POINT_PACKET.Param3", param3, 0x1e0, 0x20, true, 0xf093907e15372b7e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif