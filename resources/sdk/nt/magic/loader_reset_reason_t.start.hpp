#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOADER_RESET_REASON.Supplied", supplied, 0x0, 0x8, true, 0xb287b3c6bdb1bf4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOADER_RESET_REASON.Basic.Component.Pch", pch, 0x0, 0x8, true, 0xfc8002eea646fc68)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOADER_RESET_REASON.Basic.Component.EmbeddedController", embedded_controller, 0x8, 0x8, true, 0x52639a6548481378)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_component_t), "_LOADER_RESET_REASON.Basic.Component", component, 0x0, 0x40, true, 0x495df2fec899a108)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_RESET_REASON.Basic.AsULONG64", as_ulong64, 0x0, 0x40, true, 0x1c796910486f09fe)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_LOADER_RESET_REASON.Basic.AsBytes", as_bytes, 0x0, 0x40, true, 0x797b44285f886010)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_basic_t), "_LOADER_RESET_REASON.Basic", basic, 0x40, 0x40, true, 0x2884b3bbbb75df60)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_LOADER_RESET_REASON.AdditionalInfo", additional_info, 0x80, 0x0, true, 0xbc238fd030391753)
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