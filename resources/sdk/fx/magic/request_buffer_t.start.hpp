#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::request_buffer_type_t), "FxRequestBuffer.DataType", data_type, 0x0, 0x20, true, 0x585a4240c2212b7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxRequestBuffer.Memory.Memory", memory, 0x0, 0x40, true, 0x35c54ae20ef1a00f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_t*), "FxRequestBuffer.Memory.Offsets", offsets, 0x40, 0x40, true, 0xa83e077c18f687be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_memory_t), "FxRequestBuffer.Memory", memory, 0x40, 0x80, true, 0x3e6995c9fd1c1016)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxRequestBuffer.Mdl.Mdl", mdl, 0x0, 0x40, true, 0xc8dcda0dc8201a2f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxRequestBuffer.Mdl.Length", length, 0x40, 0x20, true, 0xa2643bf8be4c9963)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_mdl_t), "FxRequestBuffer.Mdl", mdl, 0x40, 0x80, true, 0xd9d83dbd7c914374)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRequestBuffer.Buffer.Buffer", buffer, 0x0, 0x40, true, 0x270e6f5be3d88ed7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxRequestBuffer.Buffer.Length", length, 0x40, 0x20, true, 0x16fa1fa973616ca0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_buffer_t), "FxRequestBuffer.Buffer", buffer, 0x40, 0x80, true, 0x5a6893e4e6ee9ce9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class wdf::i_fx_memory_t*), "FxRequestBuffer.RefMdl.Memory", memory, 0x0, 0x40, true, 0x861437ab5d210a7e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_t*), "FxRequestBuffer.RefMdl.Offsets", offsets, 0x40, 0x40, true, 0xb9bc34958fbb763a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxRequestBuffer.RefMdl.Mdl", mdl, 0x80, 0x40, true, 0x7c34fecaad70e6fa)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_ref_mdl_t), "FxRequestBuffer.RefMdl", ref_mdl, 0x40, 0xc0, true, 0x3159c6cc0ad6a8b7)
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
#endif