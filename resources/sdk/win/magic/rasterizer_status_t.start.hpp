#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_RASTERIZER_STATUS.nSize", n_size, 0x0, 0x10, true, 0xac330711d3dd06b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_RASTERIZER_STATUS.wFlags", w_flags, 0x10, 0x10, true, 0xa3d64088bfb3faa4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_RASTERIZER_STATUS.nLanguageID", n_language_id, 0x20, 0x10, true, 0xf4f2febeae740af0)
#else
#define _m00
#define _m01
#define _m02
#endif