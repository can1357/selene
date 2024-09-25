#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_s__CatchableType.properties", properties, 0x0, 0x20, true, 0xb3b61ef62f99ce94)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::type_descriptor_t*), "_s__CatchableType.pType", p_type, 0x20, 0x40, true, 0x87a87d10a60cb821)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::pmd_t), "_s__CatchableType.thisDisplacement", this_displacement, 0x60, 0x60, true, 0xd34bf6226a9a5cb7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_s__CatchableType.sizeOrOffset", size_or_offset, 0xc0, 0x20, true, 0xa2627673ae8c4457)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_s__CatchableType.copyFunction", copy_function, 0xe0, 0x40, true, 0x451995fb935d5979)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif