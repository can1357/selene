#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCONTEXT_QUEUE.NumberOfObjects", number_of_objects, 0x0, 0x20, true, 0xc7226c768046174e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_SCONTEXT_QUEUE.ArrayOfObjects.pad", pad, 0x0, 0x80, true, 0xa651be2bc5f148d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SCONTEXT_QUEUE.ArrayOfObjects.userContext", user_context, 0x80, 0x40, true, 0xa49f5356e4bbc0d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<u0_array_of_objects_t**, struct win::ndr_scontext_t**>), "_SCONTEXT_QUEUE.ArrayOfObjects", array_of_objects, 0x40, 0x40, true, 0x8e187163ae829912)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif