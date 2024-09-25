#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_OPEN_PARAMETERS.Header", header, 0x0, 0x20, true, 0x3df22aadc216f14b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_OPEN_PARAMETERS.AdapterName", adapter_name, 0x40, 0x40, true, 0xc1c06a6e1783955f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t*), "_NDIS_OPEN_PARAMETERS.MediumArray", medium_array, 0x80, 0x40, true, 0x54737c4b7e0b113b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_PARAMETERS.MediumArraySize", medium_array_size, 0xc0, 0x20, true, 0x3143957da10fec7d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDIS_OPEN_PARAMETERS.SelectedMediumIndex", selected_medium_index, 0x100, 0x40, true, 0xb611af601c2ffd6d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_NDIS_OPEN_PARAMETERS.FrameTypeArray", frame_type_array, 0x140, 0x40, true, 0xe3b6d8b1a2ff2940)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_PARAMETERS.FrameTypeArraySize", frame_type_array_size, 0x180, 0x20, true, 0xa6b84b0345967cc3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif