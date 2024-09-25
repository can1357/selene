#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_RESOURCE_DESCRIPTOR.Option", option, 0x0, 0x8, true, 0xf2427951c88cf158)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_RESOURCE_DESCRIPTOR.Type", type, 0x8, 0x8, true, 0xaa0f24e4e4dd299d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_RESOURCE_DESCRIPTOR.ShareDisposition", share_disposition, 0x10, 0x8, true, 0xf46d44c1a7a34076)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_RESOURCE_DESCRIPTOR.Flags", flags, 0x20, 0x10, true, 0xfdd8473978ecfcd5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Port.Length", length, 0x0, 0x20, true, 0x8eac97dc46966e0d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Port.Alignment", alignment, 0x20, 0x20, true, 0x4ec4f7ed64b8f056)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Port.MinimumAddress", minimum_address, 0x40, 0x40, true, 0x99c9fa0edba2cda2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Port.MaximumAddress", maximum_address, 0x80, 0x40, true, 0x678cd8fe4bc853)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_port_t), "_IO_RESOURCE_DESCRIPTOR.Port", port, 0x40, 0xc0, true, 0x944099ff52596597)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory.Length", length, 0x0, 0x20, true, 0x3657b4771a5e243)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory.Alignment", alignment, 0x20, 0x20, true, 0x7e2fe4332693d81c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory.MinimumAddress", minimum_address, 0x40, 0x40, true, 0xc475720949ce5174)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory.MaximumAddress", maximum_address, 0x80, 0x40, true, 0x58a8eaee6efdec5b)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_memory_t), "_IO_RESOURCE_DESCRIPTOR.Memory", memory, 0x40, 0xc0, true, 0x164320062becb18f)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Interrupt.MinimumVector", minimum_vector, 0x0, 0x20, true, 0xd620d9240420db76)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Interrupt.MaximumVector", maximum_vector, 0x20, 0x20, true, 0x573e8a28705ff135)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Interrupt.AffinityPolicy", affinity_policy, 0x40, 0x10, true, 0x8124888beca9cff1, 0, uint32_t,uint16_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::irq_priority_t), "_IO_RESOURCE_DESCRIPTOR.Interrupt.PriorityPolicy", priority_policy, 0x60, 0x20, true, 0x548ed7e708cc03fc)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_RESOURCE_DESCRIPTOR.Interrupt.TargetedProcessors", targeted_processors, 0x80, 0x40, true, 0x3702ef93b08744b9)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_RESOURCE_DESCRIPTOR.Interrupt.Group", group, 0x50, 0x10, true, 0x73b88efe2d864eed)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u6_interrupt_t), "_IO_RESOURCE_DESCRIPTOR.Interrupt", interrupt, 0x40, 0xc0, true, 0x71cea37b269146a)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Dma.MinimumChannel", minimum_channel, 0x0, 0x20, true, 0xcb30ab9641c444e1)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Dma.MaximumChannel", maximum_channel, 0x20, 0x20, true, 0xea050d9b898a4f8)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u11_dma_t), "_IO_RESOURCE_DESCRIPTOR.Dma", dma, 0x40, 0x40, true, 0x8b42a6ebbd670323)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.DmaV3.RequestLine", request_line, 0x0, 0x20, true, 0x57dd069747c1d81c)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.DmaV3.Channel", channel, 0x40, 0x20, true, 0x6092d44524bf4fb5)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.DmaV3.TransferWidth", transfer_width, 0x60, 0x20, true, 0xe50c449a64f8c82)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u16_dma_v3_t), "_IO_RESOURCE_DESCRIPTOR.DmaV3", dma_v3, 0x40, 0x80, true, 0x4fa445da91ba00b0)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Generic.Length", length, 0x0, 0x20, true, 0x38daa40eb5b7e527)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Generic.Alignment", alignment, 0x20, 0x20, true, 0x6817560da22dab8a)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Generic.MinimumAddress", minimum_address, 0x40, 0x40, true, 0xab4d1df17d100b10)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Generic.MaximumAddress", maximum_address, 0x80, 0x40, true, 0x4f57437f8858e873)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u21_generic_t), "_IO_RESOURCE_DESCRIPTOR.Generic", generic, 0x40, 0xc0, true, 0x470a097185b02f2f)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_IO_RESOURCE_DESCRIPTOR.DevicePrivate.Data", data, 0x0, 0x60, true, 0xf5011864d81a6068)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u22_device_private_t), "_IO_RESOURCE_DESCRIPTOR.DevicePrivate", device_private, 0x40, 0x60, true, 0xf5c24f13ab3432bc)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.BusNumber.Length", length, 0x0, 0x20, true, 0x54b2ccd1831583f2)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.BusNumber.MinBusNumber", min_bus_number, 0x20, 0x20, true, 0x14da77230637d080)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.BusNumber.MaxBusNumber", max_bus_number, 0x40, 0x20, true, 0xbd64b6d100d1db89)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u27_bus_number_t), "_IO_RESOURCE_DESCRIPTOR.BusNumber", bus_number, 0x40, 0x80, true, 0xe8d37c3f8c15835c)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.ConfigData.Priority", priority, 0x0, 0x20, true, 0x3b95d62e1fa3d223)
#define _m40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u32_config_data_t), "_IO_RESOURCE_DESCRIPTOR.ConfigData", config_data, 0x40, 0x60, true, 0xade757bd933dd25f)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory40.Length40", length40, 0x0, 0x20, true, 0x72859759c6a87b7e)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory40.Alignment40", alignment40, 0x20, 0x20, true, 0x4b67e2cee9efdb9f)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory40.MinimumAddress", minimum_address, 0x40, 0x40, true, 0x8a514828e8c7c4a7)
#define _m44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory40.MaximumAddress", maximum_address, 0x80, 0x40, true, 0x34cc7731d9ac2b3e)
#define _m45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u37_memory40_t), "_IO_RESOURCE_DESCRIPTOR.Memory40", memory40, 0x40, 0xc0, true, 0x6fb60b43ef4df846)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory48.Length48", length48, 0x0, 0x20, true, 0xfb0cf99502c81797)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory48.Alignment48", alignment48, 0x20, 0x20, true, 0x38db19d61253d67e)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory48.MinimumAddress", minimum_address, 0x40, 0x40, true, 0xfca39529a33067c6)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory48.MaximumAddress", maximum_address, 0x80, 0x40, true, 0x5e41ce490f0bebbc)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u42_memory48_t), "_IO_RESOURCE_DESCRIPTOR.Memory48", memory48, 0x40, 0xc0, true, 0x3496b6a65ec47949)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory64.Length64", length64, 0x0, 0x20, true, 0xc02848edc2784e46)
#define _m52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Memory64.Alignment64", alignment64, 0x20, 0x20, true, 0xae83fb48e4780f4c)
#define _m53 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory64.MinimumAddress", minimum_address, 0x40, 0x40, true, 0xcaf6ce74b85b3748)
#define _m54 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_RESOURCE_DESCRIPTOR.Memory64.MaximumAddress", maximum_address, 0x80, 0x40, true, 0x15a48caaf1608c4d)
#define _m55 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u47_memory64_t), "_IO_RESOURCE_DESCRIPTOR.Memory64", memory64, 0x40, 0xc0, true, 0x5e6c6f28f45925c0)
#define _m56 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_RESOURCE_DESCRIPTOR.Connection.Class", _class, 0x0, 0x8, true, 0x5980a1e9e7974307)
#define _m57 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_RESOURCE_DESCRIPTOR.Connection.Type", type, 0x8, 0x8, true, 0xbd50df4685e3e2f9)
#define _m58 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Connection.IdLowPart", id_low_part, 0x20, 0x20, true, 0x4d5279b165ac452e)
#define _m59 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_RESOURCE_DESCRIPTOR.Connection.IdHighPart", id_high_part, 0x40, 0x20, true, 0xe78631dd45b0575a)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u52_connection_t), "_IO_RESOURCE_DESCRIPTOR.Connection", connection, 0x40, 0x60, true, 0xb58df89748000b8b)
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
#define _m56
#define _m57
#define _m58
#define _m59
#define _m60
#endif