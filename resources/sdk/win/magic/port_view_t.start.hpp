#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_VIEW.Length", length, 0x0, 0x20, true, 0xcc404f903b3327b6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PORT_VIEW.SectionHandle", section_handle, 0x40, 0x40, true, 0xa1c5bf693f6e9e64)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_VIEW.SectionOffset", section_offset, 0x80, 0x20, true, 0xc36794a8e196ae26)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PORT_VIEW.ViewSize", view_size, 0xc0, 0x40, true, 0x763199646851fbf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PORT_VIEW.ViewBase", view_base, 0x100, 0x40, true, 0x31fd5ad893eb2a3e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PORT_VIEW.ViewRemoteBase", view_remote_base, 0x140, 0x40, true, 0xbfb490b17f04a96a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif