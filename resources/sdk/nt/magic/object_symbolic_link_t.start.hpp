#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_OBJECT_SYMBOLIC_LINK.CreationTime", creation_time, 0x0, 0x40, true, 0x1b0898bd86bce72f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_OBJECT_SYMBOLIC_LINK.LinkTarget", link_target, 0x40, 0x80, true, 0xa3ced5a656f855ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_SYMBOLIC_LINK.DosDeviceDriveIndex", dos_device_drive_index, 0xc0, 0x20, true, 0x53c7e04139cfb26e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_SYMBOLIC_LINK.Flags", flags, 0xe0, 0x20, true, 0x315ca4454429263e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_SYMBOLIC_LINK.AccessMask", access_mask, 0x100, 0x20, true, 0xa348fedbe8861ad6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::object_symbolic_link_t*, void*, nt::unicode_view*, void**)>*), "_OBJECT_SYMBOLIC_LINK.Callback", callback, 0x40, 0x40, true, 0x90e471e1654a929)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_SYMBOLIC_LINK.CallbackContext", callback_context, 0x80, 0x40, true, 0x58ddb2b48583f696)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_SYMBOLIC_LINK.IntegrityLevel", integrity_level, 0x0, 0x0, false, 0x3a2adee5dd465922)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif