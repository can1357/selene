#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_XSTATE_CONTEXT.Mask", mask, 0x0, 0x40, true, 0x239cc832f4ef418b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_XSTATE_CONTEXT.Length", length, 0x40, 0x20, true, 0xfa38fe7b6756e2fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::xsave_area_t*), "_XSTATE_CONTEXT.Area", area, 0x80, 0x40, true, 0x4836d2f11af61d92)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_XSTATE_CONTEXT.Buffer", buffer, 0xc0, 0x40, true, 0xcfa697265d099668)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif