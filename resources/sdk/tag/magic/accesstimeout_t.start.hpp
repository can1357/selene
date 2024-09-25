#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACCESSTIMEOUT.cbSize", cb_size, 0x0, 0x20, true, 0x7dbd9eae2940f214)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACCESSTIMEOUT.dwFlags", dw_flags, 0x20, 0x20, true, 0x2118630493c5ff42)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagACCESSTIMEOUT.iTimeOutMSec", i_time_out_m_sec, 0x40, 0x20, true, 0x12f258d399662ebe)
#else
#define _m00
#define _m01
#define _m02
#endif