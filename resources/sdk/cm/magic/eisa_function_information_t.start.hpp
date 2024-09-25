#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_EISA_FUNCTION_INFORMATION.CompressedId", compressed_id, 0x0, 0x20, true, 0xcd3fd5aa62e48964)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_FUNCTION_INFORMATION.IdSlotFlags1", id_slot_flags1, 0x20, 0x8, true, 0x96cf2812c52b5773)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_FUNCTION_INFORMATION.IdSlotFlags2", id_slot_flags2, 0x28, 0x8, true, 0x9ae0edd96d81638d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_FUNCTION_INFORMATION.MinorRevision", minor_revision, 0x30, 0x8, true, 0x647e4e5016cd551c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_FUNCTION_INFORMATION.MajorRevision", major_revision, 0x38, 0x8, true, 0xc19109894ee3a2e7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 26>), "_CM_EISA_FUNCTION_INFORMATION.Selections", selections, 0x40, 0xd0, true, 0xe9e23108c8de95cc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_EISA_FUNCTION_INFORMATION.FunctionFlags", function_flags, 0x110, 0x8, true, 0x727e5cdf555863fd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 80>), "_CM_EISA_FUNCTION_INFORMATION.TypeString", type_string, 0x118, 0x80, true, 0xf34e95b0e908664a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::eisa_memory_configuration_t, 9>), "_CM_EISA_FUNCTION_INFORMATION.EisaMemory", eisa_memory, 0x398, 0xf8, true, 0x3124eb2925570486)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::eisa_irq_configuration_t, 7>), "_CM_EISA_FUNCTION_INFORMATION.EisaIrq", eisa_irq, 0x590, 0x70, true, 0x3dbf24754a09381e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::eisa_dma_configuration_t, 4>), "_CM_EISA_FUNCTION_INFORMATION.EisaDma", eisa_dma, 0x600, 0x40, true, 0xf0c3a13493670f56)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::eisa_port_configuration_t, 20>), "_CM_EISA_FUNCTION_INFORMATION.EisaPort", eisa_port, 0x640, 0xe0, true, 0xd483001c8b6bee67)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 60>), "_CM_EISA_FUNCTION_INFORMATION.InitializationData", initialization_data, 0x820, 0xe0, true, 0x389690304a85ec53)
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
#define _m10
#define _m11
#define _m12
#endif