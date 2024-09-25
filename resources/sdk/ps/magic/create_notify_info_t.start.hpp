#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_CREATE_NOTIFY_INFO.Size", size, 0x0, 0x40, true, 0x531ceb261d93b3cb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_NOTIFY_INFO.Flags", flags, 0x40, 0x20, true, 0x64a98841f1af10c2)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_NOTIFY_INFO.FileOpenNameAvailable", file_open_name_available, 0x40, 0x1, true, 0x7b26e4d858c42bae, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PS_CREATE_NOTIFY_INFO.ParentProcessId", parent_process_id, 0x80, 0x40, true, 0xbe175948d230c01b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_PS_CREATE_NOTIFY_INFO.CreatingThreadId", creating_thread_id, 0xc0, 0x80, true, 0xe58cae5eb8acaad7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_PS_CREATE_NOTIFY_INFO.FileObject", file_object, 0x140, 0x40, true, 0x5dec9ce293809b06)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_PS_CREATE_NOTIFY_INFO.ImageFileName", image_file_name, 0x180, 0x40, true, 0x5eb23912a7fc3887)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_PS_CREATE_NOTIFY_INFO.CommandLine", command_line, 0x1c0, 0x40, true, 0x645313437a7499e0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_PS_CREATE_NOTIFY_INFO.CreationStatus", creation_status, 0x200, 0x20, true, 0x3af125163c1d7114)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_NOTIFY_INFO.IsSubsystemProcess", is_subsystem_process, 0x41, 0x1, true, 0x9d8434c8e50fa165, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif