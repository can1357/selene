#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_RELEASEHANDLEDATA.ReleaseHandle", release_handle, 0x0, 0x40, true, 0xdb07e9768e7ffff3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::handle_type_t), "_DXGKARGCB_RELEASEHANDLEDATA.Type", type, 0x40, 0x20, true, 0x50e286ce6750238c)
#else
#define _m00
#define _m01
#endif