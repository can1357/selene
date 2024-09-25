#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_MI_DYNAMIC_BITMAP.Bitmap", bitmap, 0x0, 0x80, true, 0xf52696c399653f14)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_DYNAMIC_BITMAP.MaximumSize", maximum_size, 0x80, 0x40, true, 0xa977c462cc42a82b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_DYNAMIC_BITMAP.Hint", hint, 0xc0, 0x40, true, 0x3d4612dc26a7088e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_DYNAMIC_BITMAP.BaseVa", base_va, 0x100, 0x40, true, 0x636344db947b4e58)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_DYNAMIC_BITMAP.SizeTopDown", size_top_down, 0x140, 0x40, true, 0xe64a5fd485f32323)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_DYNAMIC_BITMAP.HintTopDown", hint_top_down, 0x180, 0x40, true, 0xc8e02d85fd71c937)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_DYNAMIC_BITMAP.BaseVaTopDown", base_va_top_down, 0x1c0, 0x40, true, 0xfac7add647a7730b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_DYNAMIC_BITMAP.SpinLock", spin_lock, 0x200, 0x40, true, 0xae706d591a46cf4f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_instance_t*), "_MI_DYNAMIC_BITMAP.Vm", vm, 0x0, 0x0, false, 0xb7a799220e8c3069)
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
#endif