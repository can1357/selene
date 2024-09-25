#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "CxFileObjectInit.Class", _class, 0x0, 0x20, true, 0x17678b294f86ea6c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "CxFileObjectInit.Attributes", attributes, 0x40, 0xc0, true, 0x9fbfb1efc3e0e8c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfcx_fileobject_config_t), "CxFileObjectInit.Callbacks", callbacks, 0x200, 0x40, true, 0x495938213a3644c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "CxFileObjectInit.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x340, 0x20, true, 0x86a73153a5aade25)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "CxFileObjectInit.Set", set, 0x360, 0x8, true, 0x32ebfc3a62d1e58e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif