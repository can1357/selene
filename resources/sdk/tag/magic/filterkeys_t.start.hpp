#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFILTERKEYS.cbSize", cb_size, 0x0, 0x20, true, 0x383ef59e99eb085)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFILTERKEYS.dwFlags", dw_flags, 0x20, 0x20, true, 0xdef4ecb67a7c3432)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFILTERKEYS.iWaitMSec", i_wait_m_sec, 0x40, 0x20, true, 0xda811371f89fb077)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFILTERKEYS.iDelayMSec", i_delay_m_sec, 0x60, 0x20, true, 0x92a666b312ce8f77)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFILTERKEYS.iRepeatMSec", i_repeat_m_sec, 0x80, 0x20, true, 0xe7bd2d92e53363de)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagFILTERKEYS.iBounceMSec", i_bounce_m_sec, 0xa0, 0x20, true, 0x136d330fb24c45b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif