#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RESOURCE_DATA_ENTRY.OffsetToData", offset_to_data, 0x0, 0x20, true, 0x7451b1723886eb5d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RESOURCE_DATA_ENTRY.Size", size, 0x20, 0x20, true, 0x62e21f0f664c8ba5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RESOURCE_DATA_ENTRY.CodePage", code_page, 0x40, 0x20, true, 0x608cddb687e8b335)
#else
#define _m00
#define _m01
#define _m02
#endif