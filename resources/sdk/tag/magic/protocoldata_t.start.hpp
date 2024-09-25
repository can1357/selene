#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagPROTOCOLDATA.grfFlags", grf_flags, 0x0, 0x20, true, 0x7dd97b8d59d0698c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagPROTOCOLDATA.dwState", dw_state, 0x20, 0x20, true, 0x6b08223e1ef190a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_tagPROTOCOLDATA.pData", p_data, 0x40, 0x40, true, 0x417fcdffac1d02f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_tagPROTOCOLDATA.cbData", cb_data, 0x80, 0x20, true, 0xad1461aa58321be4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif