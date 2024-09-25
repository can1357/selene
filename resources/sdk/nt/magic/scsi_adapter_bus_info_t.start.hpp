#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_ADAPTER_BUS_INFO.NumberOfBuses", number_of_buses, 0x0, 0x8, true, 0x27c604ec1457bbd8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::scsi_bus_data_t, 1>), "_SCSI_ADAPTER_BUS_INFO.BusData", bus_data, 0x20, 0x40, true, 0x685d637c0fabd81e)
#else
#define _m00
#define _m01
#endif