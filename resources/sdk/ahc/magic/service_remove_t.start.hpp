#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ahc::info_class_t), "_AHC_SERVICE_REMOVE.InfoClass", info_class, 0x0, 0x20, true, 0x89962de9db5f12ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_REMOVE.PackageAlias", package_alias, 0x40, 0x80, true, 0x83f36bafcb45866d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AHC_SERVICE_REMOVE.FileHandle", file_handle, 0xc0, 0x40, true, 0x27f34acef447403)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_AHC_SERVICE_REMOVE.ExeSignature", exe_signature, 0x100, 0x80, true, 0x776d86733e2192df)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif