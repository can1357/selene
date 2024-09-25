#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateRefCountedBuffer@CRefCountedBuffer$dxgkrnl.sys", 0x3e1d0, 0x0, true, 0x26775986fdd6076d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RefCountedBufferRelease@CRefCountedBuffer$dxgkrnl.sys", 0x1d654, 0x0, true, 0x53ca2c0d76c985e5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif