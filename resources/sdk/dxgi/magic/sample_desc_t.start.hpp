#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_SAMPLE_DESC.Count", count, 0x0, 0x20, true, 0x6bfea730d18bbe19)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_SAMPLE_DESC.Quality", quality, 0x20, 0x20, true, 0x4166b51a13002e34)
#else
#define _m00
#define _m01
#endif