#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_CONFLICT_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0x3b229c69e4e2174c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_PLUGPLAY_CONTROL_CONFLICT_DATA.ResourceList", resource_list, 0x80, 0x40, true, 0xe99e4f9f71426319)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_DATA.ResourceListSize", resource_list_size, 0xc0, 0x20, true, 0x9684dd06588c26e9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::plugplay_control_conflict_list_t*), "_PLUGPLAY_CONTROL_CONFLICT_DATA.ConflictBuffer", conflict_buffer, 0x100, 0x40, true, 0x6ee0ec9c71bb5060)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_DATA.ConflictBufferSize", conflict_buffer_size, 0x140, 0x20, true, 0xd5fcbea041b3e826)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_CONFLICT_DATA.Flags", flags, 0x160, 0x20, true, 0xcea71a5e2eb6c239)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PLUGPLAY_CONTROL_CONFLICT_DATA.Status", status, 0x180, 0x20, true, 0x9acdf47f684f2b8e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif