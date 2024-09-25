#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_DELETE_PARAMETERS.Version", version, 0x0, 0x20, true, 0xdb5b8aae06df30b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_EXT_DELETE_PARAMETERS.DeleteCallback", delete_callback, 0x40, 0x40, true, 0x14723118013ace20)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_EXT_DELETE_PARAMETERS.DeleteContext", delete_context, 0x80, 0x40, true, 0xada1e7de1752e041)
#else
#define _m00
#define _m01
#define _m02
#endif