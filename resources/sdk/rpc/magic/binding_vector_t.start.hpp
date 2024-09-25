#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RPC_BINDING_VECTOR.Count", count, 0x0, 0x20, true, 0x72a4af0b568b88c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 1>), "_RPC_BINDING_VECTOR.BindingH", binding_h, 0x40, 0x40, true, 0x68191818929e15eb)
#else
#define _m00
#define _m01
#endif