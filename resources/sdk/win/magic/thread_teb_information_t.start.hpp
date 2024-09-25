#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_THREAD_TEB_INFORMATION.TebInformation", teb_information, 0x0, 0x40, true, 0x70379d4f4452cf21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_TEB_INFORMATION.TebOffset", teb_offset, 0x40, 0x20, true, 0x5940d8a2200e1da8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THREAD_TEB_INFORMATION.BytesToRead", bytes_to_read, 0x60, 0x20, true, 0xf1073d0caa714f15)
#else
#define _m00
#define _m01
#define _m02
#endif