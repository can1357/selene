#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SELECT_CRITERIA.dwType", dw_type, 0x0, 0x20, true, 0x4a367dd3db043c17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SELECT_CRITERIA.cPara", c_para, 0x20, 0x20, true, 0x3d3718937c6873a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_CERT_SELECT_CRITERIA.ppPara", pp_para, 0x40, 0x40, true, 0xb998f34ed4dc03f4)
#else
#define _m00
#define _m01
#define _m02
#endif