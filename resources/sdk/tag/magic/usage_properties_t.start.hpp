#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagUSAGE_PROPERTIES.level", level, 0x0, 0x10, true, 0x30f7c8d665114d96)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagUSAGE_PROPERTIES.page", page, 0x10, 0x10, true, 0x7ff7d7a24486a5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagUSAGE_PROPERTIES.usage", usage, 0x20, 0x10, true, 0x9feeba4911422743)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagUSAGE_PROPERTIES.logicalMinimum", logical_minimum, 0x40, 0x20, true, 0x4aa2af2d6eb280b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagUSAGE_PROPERTIES.logicalMaximum", logical_maximum, 0x60, 0x20, true, 0x45199eabaeb0261e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagUSAGE_PROPERTIES.unit", unit, 0x80, 0x10, true, 0x81ec464f918c32cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagUSAGE_PROPERTIES.exponent", exponent, 0x90, 0x10, true, 0x253ac64ad0060424)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagUSAGE_PROPERTIES.count", count, 0xa0, 0x8, true, 0x1727f9c28b2c22c5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagUSAGE_PROPERTIES.physicalMinimum", physical_minimum, 0xc0, 0x20, true, 0x465aaf04bcd75d0e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagUSAGE_PROPERTIES.physicalMaximum", physical_maximum, 0xe0, 0x20, true, 0x2886af38eae0f0be)
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