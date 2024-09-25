#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_GDI_DRIVER_INFORMATION.DriverName", driver_name, 0x0, 0x80, true, 0xa1cc49be02393c1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_GDI_DRIVER_INFORMATION.ImageAddress", image_address, 0x80, 0x40, true, 0x189c2d04fd52c81b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_GDI_DRIVER_INFORMATION.SectionPointer", section_pointer, 0xc0, 0x40, true, 0xdb140386645620f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_GDI_DRIVER_INFORMATION.EntryPoint", entry_point, 0x100, 0x40, true, 0xa5c3d57f21f5832d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::export_directory_t*), "_SYSTEM_GDI_DRIVER_INFORMATION.ExportSectionPointer", export_section_pointer, 0x140, 0x40, true, 0x5573702cc5c62594)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_GDI_DRIVER_INFORMATION.ImageLength", image_length, 0x180, 0x20, true, 0x60642dc7cf5fc75b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif