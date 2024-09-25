#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.iType", i_type, 0x0, 0x20, true, 0x37ccfdd59bf0e76d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.nSize", n_size, 0x20, 0x20, true, 0x521d7286f289fc66)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagENHMETAHEADER.rclBounds", rcl_bounds, 0x40, 0x80, true, 0x833d51a5a7531f12)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::rectl_t), "tagENHMETAHEADER.rclFrame", rcl_frame, 0xc0, 0x80, true, 0xaa8d059a43a053e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.dSignature", d_signature, 0x140, 0x20, true, 0xa204c649c78e62ea)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.nVersion", n_version, 0x160, 0x20, true, 0x414637e3ea0a383a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.nBytes", n_bytes, 0x180, 0x20, true, 0x1478f4631e3f09c3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.nRecords", n_records, 0x1a0, 0x20, true, 0x135370b8171d7c27)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagENHMETAHEADER.nHandles", n_handles, 0x1c0, 0x10, true, 0x10bd177479e06120)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagENHMETAHEADER.sReserved", s_reserved, 0x1d0, 0x10, true, 0x7387b82cd969ed74)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.nDescription", n_description, 0x1e0, 0x20, true, 0x435e80298e10c095)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.offDescription", off_description, 0x200, 0x20, true, 0x493884279792a8ab)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.nPalEntries", n_pal_entries, 0x220, 0x20, true, 0x8161b28e54fba232)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::size_t), "tagENHMETAHEADER.szlDevice", szl_device, 0x240, 0x40, true, 0xeafdb55db208c089)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::size_t), "tagENHMETAHEADER.szlMillimeters", szl_millimeters, 0x280, 0x40, true, 0x77a9c52dc0427a64)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.cbPixelFormat", cb_pixel_format, 0x2c0, 0x20, true, 0x77eb20d1bc9dae27)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.offPixelFormat", off_pixel_format, 0x2e0, 0x20, true, 0x979907dd1c026392)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagENHMETAHEADER.bOpenGL", b_open_gl, 0x300, 0x20, true, 0xa7d409b0164c1ac2)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::size_t), "tagENHMETAHEADER.szlMicrometers", szl_micrometers, 0x320, 0x40, true, 0xaed52f6b71b0a07d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif