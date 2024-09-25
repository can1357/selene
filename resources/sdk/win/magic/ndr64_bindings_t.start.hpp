#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_bind_primitive_t), "_NDR64_BINDINGS.Primitive", primitive, 0x0, 0x30, true, 0x3bd9ae7f923bac74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_bind_generic_t), "_NDR64_BINDINGS.Generic", generic, 0x0, 0x30, true, 0x6840fee41e52d691)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr64_bind_context_t), "_NDR64_BINDINGS.Context", context, 0x0, 0x30, true, 0xd05ecee20244fe30)
#else
#define _m00
#define _m01
#define _m02
#endif