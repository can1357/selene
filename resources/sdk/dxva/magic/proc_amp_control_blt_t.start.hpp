#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ProcAmpControlBlt.Size", size, 0x0, 0x20, true, 0x6a0993e0dcfcf9bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_ProcAmpControlBlt.DstRect", dst_rect, 0x20, 0x80, true, 0x6989cd9f1c368a48)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_ProcAmpControlBlt.SrcRect", src_rect, 0xa0, 0x80, true, 0x44a0cdfbae075235)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_ProcAmpControlBlt.Alpha", alpha, 0x120, 0x20, true, 0xc777297106615bec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_ProcAmpControlBlt.Brightness", brightness, 0x140, 0x20, true, 0x8a3e9d2e0afa9f72)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_ProcAmpControlBlt.Contrast", contrast, 0x160, 0x20, true, 0x5948bd3b85dd649d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_ProcAmpControlBlt.Hue", hue, 0x180, 0x20, true, 0xeb304b95bc62f20d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_ProcAmpControlBlt.Saturation", saturation, 0x1a0, 0x20, true, 0x4499d57433efa1d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif