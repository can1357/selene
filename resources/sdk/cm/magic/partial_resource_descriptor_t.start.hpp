#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Type", type, 0x0, 0x8, true, 0x8594ad61d643cc3c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.ShareDisposition", share_disposition, 0x8, 0x8, true, 0x9da2066bc8f1e50)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Flags", flags, 0x10, 0x10, true, 0x6e15ac33362281d9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Generic.Start", start, 0x0, 0x40, true, 0x9df99abfb30cf4ff)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Generic.Length", length, 0x40, 0x20, true, 0x84c63f3d4c820ee7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_generic_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Generic", generic, 0x20, 0x60, true, 0xdc5d2e987a67f772)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Port.Start", start, 0x0, 0x40, true, 0x681fbfce922a6d60)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Port.Length", length, 0x40, 0x20, true, 0xb181ccbaea0166de)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_port_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Port", port, 0x20, 0x60, true, 0x39a5684b6e5381f6)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Interrupt.Level", level, 0x0, 0x10, true, 0x84e30be25e1e8e4c, 0, uint32_t,uint16_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Interrupt.Vector", vector, 0x20, 0x20, true, 0x3864b802ccbb088c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Interrupt.Affinity", affinity, 0x40, 0x40, true, 0x73dc16640f9aba4)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Interrupt.Group", group, 0x10, 0x10, true, 0x5b3bdb045cb64f12)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u6_interrupt_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Interrupt", interrupt, 0x20, 0x80, true, 0x41169d855c1a1ea2)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Raw.MessageCount", message_count, 0x10, 0x10, true, 0x8da2bf45a5b56bae)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Raw.Vector", vector, 0x20, 0x20, true, 0xccee27a8eb522713)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Raw.Affinity", affinity, 0x40, 0x40, true, 0xdd4447c36e987d2c)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Raw.Group", group, 0x0, 0x10, true, 0xfefd50ccc8508f2)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u16_raw_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Raw", raw, 0x0, 0x80, true, 0x4dfdfdee0a8aa317)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Translated.Level", level, 0x0, 0x10, true, 0xcbcae7bbb2ddd138, 0, uint32_t,uint16_t)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Translated.Vector", vector, 0x20, 0x20, true, 0xeeab527df5614abd)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Translated.Affinity", affinity, 0x40, 0x40, true, 0xab64472f93c66d41)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Translated.Group", group, 0x10, 0x10, true, 0x6085cbc7c54052e4)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u21_translated_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt.Translated", translated, 0x0, 0x80, true, 0xc558f540968201dd)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u11_message_interrupt_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.MessageInterrupt", message_interrupt, 0x20, 0x80, true, 0x1b946fff38d991e9)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory.Start", start, 0x0, 0x40, true, 0xc74869360cf2cde4)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory.Length", length, 0x40, 0x20, true, 0x33e0f6b3a01edb8c)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u22_memory_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory", memory, 0x20, 0x60, true, 0x22314234b7d3e9d6)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Dma.Channel", channel, 0x0, 0x20, true, 0x5bee8c609f097e77)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Dma.Port", port, 0x20, 0x20, true, 0x618fbba7c8c911cf)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u23_dma_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Dma", dma, 0x20, 0x60, true, 0x572ba8d4d1e3465)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DmaV3.Channel", channel, 0x0, 0x20, true, 0xcf54bdab15785d8)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DmaV3.RequestLine", request_line, 0x20, 0x20, true, 0x7590fc785d272ca4)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DmaV3.TransferWidth", transfer_width, 0x40, 0x8, true, 0x6a8207387f5b9c1c)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u28_dma_v3_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DmaV3", dma_v3, 0x20, 0x60, true, 0xeeffb099aa4f1327)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DevicePrivate.Data", data, 0x0, 0x60, true, 0x1408a7a2bf92bc3e)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u33_device_private_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DevicePrivate", device_private, 0x20, 0x60, true, 0x5bc099dfcae763a2)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.BusNumber.Start", start, 0x0, 0x20, true, 0xb27fb3164c1ba302)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.BusNumber.Length", length, 0x20, 0x20, true, 0xa978d96b17a2c176)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u38_bus_number_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.BusNumber", bus_number, 0x20, 0x60, true, 0xa5881e2ff528aa04)
#define _m40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DeviceSpecificData.DataSize", data_size, 0x0, 0x20, true, 0xdc46ff545de0654d)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u43_device_specific_data_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.DeviceSpecificData", device_specific_data, 0x20, 0x60, true, 0xddb41dee5028f1df)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory40.Start", start, 0x0, 0x40, true, 0x7e475bf02dcaf171)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory40.Length40", length40, 0x40, 0x20, true, 0xfb927296b0c5ebe0)
#define _m44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u48_memory40_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory40", memory40, 0x20, 0x60, true, 0xa4c95b0e5770c2f5)
#define _m45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory48.Start", start, 0x0, 0x40, true, 0x7947c4fcd8b1ce22)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory48.Length48", length48, 0x40, 0x20, true, 0xb7decf02fc40eb9b)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u53_memory48_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory48", memory48, 0x20, 0x60, true, 0xa376c6620dc39cd9)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory64.Start", start, 0x0, 0x40, true, 0xc5f8f2ee31571a82)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory64.Length64", length64, 0x40, 0x20, true, 0x19e533b537b26cea)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u58_memory64_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Memory64", memory64, 0x20, 0x60, true, 0x4a96830532cbace5)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Connection.Class", _class, 0x0, 0x8, true, 0x7f312a5163145f5e)
#define _m52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Connection.Type", type, 0x8, 0x8, true, 0x9d9392ce11a06987)
#define _m53 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Connection.IdLowPart", id_low_part, 0x20, 0x20, true, 0x960bed80eba4fb75)
#define _m54 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Connection.IdHighPart", id_high_part, 0x40, 0x20, true, 0xf369c8363770c7e7)
#define _m55 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u63_connection_t), "_CM_PARTIAL_RESOURCE_DESCRIPTOR.Connection", connection, 0x20, 0x60, true, 0x15b2fde1549a770f)
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
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m54
#define _m55
#endif