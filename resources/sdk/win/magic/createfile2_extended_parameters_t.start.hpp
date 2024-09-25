#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATEFILE2_EXTENDED_PARAMETERS.dwSize", dw_size, 0x0, 0x20, true, 0x4c06863e83135b3a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATEFILE2_EXTENDED_PARAMETERS.dwFileAttributes", dw_file_attributes, 0x20, 0x20, true, 0xee69a1e170632a2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATEFILE2_EXTENDED_PARAMETERS.dwFileFlags", dw_file_flags, 0x40, 0x20, true, 0x10db374e633eff7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATEFILE2_EXTENDED_PARAMETERS.dwSecurityQosFlags", dw_security_qos_flags, 0x60, 0x20, true, 0x34042494dff6a49e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::attributes_t*), "_CREATEFILE2_EXTENDED_PARAMETERS.lpSecurityAttributes", lp_security_attributes, 0x80, 0x40, true, 0x1f879a2917c254d0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CREATEFILE2_EXTENDED_PARAMETERS.hTemplateFile", h_template_file, 0xc0, 0x40, true, 0xeeb29ebe6f487223)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif