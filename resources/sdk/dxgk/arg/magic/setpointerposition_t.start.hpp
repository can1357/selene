#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETPOINTERPOSITION.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x2ec92fd22e8a856d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_SETPOINTERPOSITION.X", x, 0x20, 0x20, true, 0x4c9eab16e7d0848a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_SETPOINTERPOSITION.Y", y, 0x40, 0x20, true, 0x76c2cd5b9e5d542)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::setpointerpositionflags_t), "_DXGKARG_SETPOINTERPOSITION.Flags", flags, 0x60, 0x20, true, 0xa67d810fac6e997d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif