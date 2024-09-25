#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_s__CatchableTypeArray.nCatchableTypes", n_catchable_types, 0x0, 0x20, true, 0xa82089c3c7d9b983)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<const struct win::s_catchable_type_t*>), "_s__CatchableTypeArray.arrayOfCatchableTypes", array_of_catchable_types, 0x20, 0x0, true, 0x26cddaf692725eb)
#else
#define _m00
#define _m01
#endif