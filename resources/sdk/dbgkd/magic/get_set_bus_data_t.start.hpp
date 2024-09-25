#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_SET_BUS_DATA.BusDataType", bus_data_type, 0x0, 0x20, true, 0xcd0a1296f4a52f0c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_SET_BUS_DATA.BusNumber", bus_number, 0x20, 0x20, true, 0x14d9714ff3c31324)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_SET_BUS_DATA.SlotNumber", slot_number, 0x40, 0x20, true, 0x70d6ec817f87a76f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_SET_BUS_DATA.Offset", offset, 0x60, 0x20, true, 0xf1daa85e30e1253c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_SET_BUS_DATA.Length", length, 0x80, 0x20, true, 0x5d25fdc9627b5d6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif