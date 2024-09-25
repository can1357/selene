#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MARK_HANDLE_INFO32.UsnSourceInfo", usn_source_info, 0x0, 0x0, false, 0x118c4a7551575578)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MARK_HANDLE_INFO32.CopyNumber", copy_number, 0x0, 0x0, false, 0x48a82876e5f26466)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MARK_HANDLE_INFO32.VolumeHandle", volume_handle, 0x0, 0x0, false, 0xd6a5f1d36564359)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MARK_HANDLE_INFO32.HandleInfo", handle_info, 0x0, 0x0, false, 0x7b0434a3c2dc40ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif