#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecBuffer.cbBuffer", cb_buffer, 0x0, 0x20, true, 0x892193166d961a1f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecBuffer.BufferType", buffer_type, 0x20, 0x20, true, 0x65a05747a54c7b2c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SecBuffer.pvBuffer", pv_buffer, 0x40, 0x40, true, 0xcab21b5483c901f4)
#else
#define _m00
#define _m01
#define _m02
#endif