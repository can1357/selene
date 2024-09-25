#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxFileObjectInfo.ListEntry", list_entry, 0x0, 0x80, true, 0x5c79a762798f802a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::file_object_file_create_t), "FxFileObjectInfo.EvtFileCreate", evt_file_create, 0x80, 0x80, true, 0x472e24df8e5525d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::cx_file_object_file_create_t), "FxFileObjectInfo.EvtCxFileCreate", evt_cx_file_create, 0x100, 0x80, true, 0x5be19b9d046a4727)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::file_object_file_cleanup_t), "FxFileObjectInfo.EvtFileCleanup", evt_file_cleanup, 0x180, 0x80, true, 0x1d50167fa89ff998)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::file_object_file_close_t), "FxFileObjectInfo.EvtFileClose", evt_file_close, 0x200, 0x80, true, 0xf1f52f995381a923)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "FxFileObjectInfo.FileObjectClass", file_object_class, 0x280, 0x20, true, 0x61506cd0439165a3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxFileObjectInfo.Attributes", attributes, 0x2c0, 0xc0, true, 0x82bab254782add4c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "FxFileObjectInfo.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x480, 0x20, true, 0xc9f74c952356349b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxFileObjectInfo.ClassExtension", class_extension, 0x4a0, 0x8, true, 0xf395ae11edd75786)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cx_device_info_t*), "FxFileObjectInfo.CxDeviceInfo", cx_device_info, 0x4c0, 0x40, true, 0xab9c55feec01e516)
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
#endif