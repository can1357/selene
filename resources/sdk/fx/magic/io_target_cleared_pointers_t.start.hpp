#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTargetClearedPointers.TargetPdo", target_pdo, 0x0, 0x40, true, 0x73223c32b57858a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "FxIoTargetClearedPointers.TargetFileObject", target_file_object, 0x40, 0x40, true, 0x4f0d0f3128620338)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoTargetClearedPointers.TargetHandle", target_handle, 0x80, 0x40, true, 0xf82a130edc7fa52e)
#else
#define _m00
#define _m01
#define _m02
#endif