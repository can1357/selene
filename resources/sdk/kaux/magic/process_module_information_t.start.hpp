#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AUX_PROCESS_MODULE_INFORMATION.Section", section, 0x0, 0x40, true, 0xc7d7638038d654ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AUX_PROCESS_MODULE_INFORMATION.MappedBase", mapped_base, 0x40, 0x40, true, 0x65707fa4c1f0c067)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AUX_PROCESS_MODULE_INFORMATION.ImageBase", image_base, 0x80, 0x40, true, 0x180600d9543b476f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUX_PROCESS_MODULE_INFORMATION.ImageSize", image_size, 0xc0, 0x20, true, 0xd035c501dd4b63be)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUX_PROCESS_MODULE_INFORMATION.Flags", flags, 0xe0, 0x20, true, 0xfa3e18220752f961)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AUX_PROCESS_MODULE_INFORMATION.LoadOrderIndex", load_order_index, 0x100, 0x10, true, 0x8e8b7c26a32468f5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AUX_PROCESS_MODULE_INFORMATION.InitOrderIndex", init_order_index, 0x110, 0x10, true, 0x64cc3b1639d34da4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AUX_PROCESS_MODULE_INFORMATION.LoadCount", load_count, 0x120, 0x10, true, 0x1070ec0e481c2788)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_AUX_PROCESS_MODULE_INFORMATION.OffsetToFileName", offset_to_file_name, 0x130, 0x10, true, 0x12031097121099c3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_AUX_PROCESS_MODULE_INFORMATION.FullPathName", full_path_name, 0x140, 0x0, true, 0xf0dc51499fc4a113)
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