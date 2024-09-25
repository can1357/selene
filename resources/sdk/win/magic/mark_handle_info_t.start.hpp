#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MARK_HANDLE_INFO.UsnSourceInfo", usn_source_info, 0x0, 0x0, false, 0x1d6b2678aac7e39c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MARK_HANDLE_INFO.CopyNumber", copy_number, 0x0, 0x0, false, 0xf32a349a302d0d0e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MARK_HANDLE_INFO.VolumeHandle", volume_handle, 0x0, 0x0, false, 0x2323d59aa836b5cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MARK_HANDLE_INFO.HandleInfo", handle_info, 0x0, 0x0, false, 0x5bc639e71954628a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif