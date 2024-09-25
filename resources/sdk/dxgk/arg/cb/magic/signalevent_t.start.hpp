#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_SIGNALEVENT.hDxgkProcess", h_dxgk_process, 0x0, 0x40, true, 0x656d45831f00d550)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_SIGNALEVENT.hEvent", h_event, 0x40, 0x40, true, 0x9954bcd512aa4f4b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_SIGNALEVENT.Flags", flags, 0x80, 0x20, true, 0x4b9a5d1c3ac159be)
#else
#define _m00
#define _m01
#define _m02
#endif