#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_s__ThrowInfo.attributes", attributes, 0x0, 0x20, true, 0x6317e4d2c73bc791)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_s__ThrowInfo.pmfnUnwind", pmfn_unwind, 0x20, 0x40, true, 0xa7f2abc158932a5b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t()>*, sdk::function<int32_t(...)>*>), "_s__ThrowInfo.pForwardCompat", p_forward_compat, 0x60, 0x40, true, 0xc997a32c644893a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::s_catchable_type_array_t*), "_s__ThrowInfo.pCatchableTypeArray", p_catchable_type_array, 0xa0, 0x40, true, 0xe6903b4c52f17f1a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif