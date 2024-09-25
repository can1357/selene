#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComActivator._ulRef", ul_ref, 0xc0, 0x20, true, 0xa90dd6c3d471b566)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_data_info_t*), "CComActivator._pOpaqueData", p_opaque_data, 0x100, 0x40, true, 0xe08f64caedf50c89)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::special_properties_t*), "CComActivator._pProps", p_props, 0x140, 0x40, true, 0x58621e81858be1c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComActivator._fActPropsInitNecessary", f_act_props_init_necessary, 0x180, 0x20, true, 0xe0700a693892bfd2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif