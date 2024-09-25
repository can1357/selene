#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECTION_OBJECT_POINTERS.DataSectionObject", data_section_object, 0x0, 0x40, true, 0x1b000405cea90a6d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECTION_OBJECT_POINTERS.SharedCacheMap", shared_cache_map, 0x40, 0x40, true, 0xfcb7e7fdf62da058)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECTION_OBJECT_POINTERS.ImageSectionObject", image_section_object, 0x80, 0x40, true, 0xc74fa6a38e13af59)
#else
#define _m00
#define _m01
#define _m02
#endif