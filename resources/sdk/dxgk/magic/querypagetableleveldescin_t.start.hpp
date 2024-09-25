#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_QUERYPAGETABLELEVELDESCIN.LevelIndex", level_index, 0x0, 0x10, true, 0xc28aa5fb181c04db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_QUERYPAGETABLELEVELDESCIN.PhysicalAdapterIndex", physical_adapter_index, 0x10, 0x10, true, 0x18ac6a57beab4437)
#else
#define _m00
#define _m01
#endif