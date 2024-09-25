#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_MMIORANGEINFO.BasePageNumber", base_page_number, 0x0, 0x40, true, 0x9a901a958b312159)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_MMIORANGEINFO.BasePhysicalPageNumber", base_physical_page_number, 0x40, 0x40, true, 0x69e36e86cb1e1c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_MMIORANGEINFO.BasePhysicalResourceNumber", base_physical_resource_number, 0x80, 0x8, true, 0xcb149e102b301925)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_MMIORANGEINFO.InterceptReads", intercept_reads, 0x88, 0x8, true, 0xe3e181f95fdeaf94)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_MMIORANGEINFO.InterceptWrites", intercept_writes, 0x90, 0x8, true, 0x1ef316ec63104559)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MMIORANGEINFO.PageCount", page_count, 0xa0, 0x20, true, 0xd3c5fca8b9976430)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif