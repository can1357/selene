#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PHYSICAL_LOCATION_LH.BusNumber", bus_number, 0x0, 0x20, true, 0x16b054307859c5a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PHYSICAL_LOCATION_LH.SlotNumber", slot_number, 0x20, 0x20, true, 0xc530c5752528d6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PHYSICAL_LOCATION_LH.FunctionNumber", function_number, 0x40, 0x20, true, 0xc41110942e39f7df)
#else
#define _m00
#define _m01
#define _m02
#endif