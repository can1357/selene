#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_INFORMATION64.Length", length, 0x0, 0x20, true, 0x36b81664dc94f796)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RTL_USER_PROCESS_INFORMATION64.Process", process, 0x40, 0x40, true, 0xc3a56d27dc1c0b89)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RTL_USER_PROCESS_INFORMATION64.Thread", thread, 0x80, 0x40, true, 0xf45b3d0660c4b51c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id64_t), "_RTL_USER_PROCESS_INFORMATION64.ClientId", client_id, 0xc0, 0x80, true, 0xd2962fe87f7525a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::section_image_information64_t), "_RTL_USER_PROCESS_INFORMATION64.ImageInformation", image_information, 0x140, 0x0, true, 0xc34cf4535a709566)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif