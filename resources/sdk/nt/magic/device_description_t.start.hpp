#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.Version", version, 0x0, 0x20, true, 0x368eee6863264e3d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DESCRIPTION.Master", master, 0x20, 0x8, true, 0x5f50c56087238d50)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DESCRIPTION.ScatterGather", scatter_gather, 0x28, 0x8, true, 0x18ac50cd4f36b151)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DESCRIPTION.DemandMode", demand_mode, 0x30, 0x8, true, 0x8454e0d5a0cca772)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DESCRIPTION.AutoInitialize", auto_initialize, 0x38, 0x8, true, 0x7f919553a5121d20)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DESCRIPTION.Dma32BitAddresses", dma32_bit_addresses, 0x40, 0x8, true, 0x331e17b414a9aa54)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DESCRIPTION.IgnoreCount", ignore_count, 0x48, 0x8, true, 0x43c6d30219723a5e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_DESCRIPTION.Dma64BitAddresses", dma64_bit_addresses, 0x58, 0x8, true, 0x24464cba9f283f04)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.BusNumber", bus_number, 0x60, 0x20, true, 0xcff1d36aa285e3b0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.DmaChannel", dma_channel, 0x80, 0x20, true, 0xcb7d16fdc7f2e427)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_DEVICE_DESCRIPTION.InterfaceType", interface_type, 0xa0, 0x20, true, 0x77e60f92ed51a922)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::width_t), "_DEVICE_DESCRIPTION.DmaWidth", dma_width, 0xc0, 0x20, true, 0x15ca583503592e6c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dma::speed_t), "_DEVICE_DESCRIPTION.DmaSpeed", dma_speed, 0xe0, 0x20, true, 0x57e8257704bf6ff5)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.MaximumLength", maximum_length, 0x100, 0x20, true, 0x2ab2506131c674ba)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.DmaPort", dma_port, 0x120, 0x20, true, 0xe74a6db4a158da8d)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.DmaAddressWidth", dma_address_width, 0x140, 0x20, true, 0xa472d8d6d7000d91)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.DmaControllerInstance", dma_controller_instance, 0x160, 0x20, true, 0x250790ba50f88e67)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DESCRIPTION.DmaRequestLine", dma_request_line, 0x180, 0x20, true, 0x11804de13e4f6ed1)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DEVICE_DESCRIPTION.DeviceAddress", device_address, 0x1c0, 0x40, true, 0x46aa421a19313cb0)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif