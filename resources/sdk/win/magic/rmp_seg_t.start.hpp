#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "rmp_seg.rmp_gpa", rmp_gpa, 0x0, 0x0, false, 0xfa8d54f91b2dcac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "rmp_seg.rmp_entry", rmp_entry, 0x0, 0x0, false, 0xfe062fce5ca4ff46)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "rmp_seg.rmp_pageSize", rmp_page_size, 0x0, 0x0, false, 0xe2e1efe071608cb9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "rmp_seg.rmp_pageMark", rmp_page_mark, 0x0, 0x0, false, 0xe91838f090a5faea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "rmp_seg.rmp_reserved", rmp_reserved, 0x0, 0x0, false, 0x3713c42a3d5c93c4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "rmp_seg.rmp_ASID", rmp_asid, 0x0, 0x0, false, 0xe2c2524672d124f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif