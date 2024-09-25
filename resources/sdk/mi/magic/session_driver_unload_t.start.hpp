#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_MI_SESSION_DRIVER_UNLOAD.Function", function, 0x0, 0x40, true, 0x25a55bdd12610d85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SESSION_DRIVER_UNLOAD.FunctionValue", function_value, 0x0, 0x40, true, 0xe083aec88cde4d6f)
#else
#define _m00
#define _m01
#endif