#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::drive_letter_curdir_t*), "_RTL_PERTHREAD_CURDIR.CurrentDirectories", current_directories, 0x0, 0x40, true, 0x273e20e04a4968c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_RTL_PERTHREAD_CURDIR.ImageName", image_name, 0x40, 0x40, true, 0xbaad45d8e348efba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_PERTHREAD_CURDIR.Environment", environment, 0x80, 0x40, true, 0x48d20833c2136834)
#else
#define _m00
#define _m01
#define _m02
#endif