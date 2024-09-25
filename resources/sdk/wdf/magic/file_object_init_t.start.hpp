#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "FileObjectInit.Class", _class, 0x0, 0x20, true, 0x891e23e44eac3a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FileObjectInit.Attributes", attributes, 0x40, 0xc0, true, 0xc124712e405785fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::fileobject_config_t), "FileObjectInit.Callbacks", callbacks, 0x200, 0x40, true, 0x9d92566a054cd26e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "FileObjectInit.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x340, 0x20, true, 0xf8881942b37887e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FileObjectInit.Set", set, 0x360, 0x8, true, 0xb56ea83336319bd5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif