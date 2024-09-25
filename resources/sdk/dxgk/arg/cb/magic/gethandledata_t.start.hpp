#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_GETHANDLEDATA.hObject", h_object, 0x0, 0x20, true, 0xb49e412116282c36)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::handle_type_t), "_DXGKARGCB_GETHANDLEDATA.Type", type, 0x20, 0x20, true, 0xa036a58a226e5544)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::cb::gethandledataflags_t), "_DXGKARGCB_GETHANDLEDATA.Flags", flags, 0x40, 0x20, true, 0x6e38f58f00a59c42)
#else
#define _m00
#define _m01
#define _m02
#endif