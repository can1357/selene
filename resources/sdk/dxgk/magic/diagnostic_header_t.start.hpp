#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_categories_t), "_DXGK_DIAGNOSTIC_HEADER.Category", category, 0x0, 0x20, true, 0xbb65d34ebd8f459e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_types_t), "_DXGK_DIAGNOSTIC_HEADER.Type", type, 0x20, 0x20, true, 0xd1761c2b48405644)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_DXGK_DIAGNOSTIC_HEADER.Size", size, 0x40, 0x10, true, 0x5ad50e87b27ac890, 16, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_HEADER.Value", value, 0x40, 0x20, true, 0x5544997dc2c71bf2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_HEADER.SequenceNumber", sequence_number, 0x60, 0x20, true, 0x4d52edfc631eea16)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_HEADER.TargetId", target_id, 0x80, 0x20, true, 0xebcb7ecf4ff16ce4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_HEADER.SourceId", source_id, 0x80, 0x20, true, 0xe572551b30fb5ded)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_HEADER.Id", id, 0x80, 0x20, true, 0xc893eda1c5f3aa21)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif