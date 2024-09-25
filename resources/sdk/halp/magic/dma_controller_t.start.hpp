#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_DMA_CONTROLLER.Controllers", controllers, 0x0, 0x80, true, 0xca70f19add01e8b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HALP_DMA_CONTROLLER.AdapterList", adapter_list, 0x80, 0x80, true, 0xa4aa3009bd04b807)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.ControllerId", controller_id, 0x100, 0x20, true, 0xfe95fc4a22e4bd1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.MinimumRequestLine", minimum_request_line, 0x120, 0x20, true, 0x32b9244b770915a5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.MaximumRequestLine", maximum_request_line, 0x140, 0x20, true, 0xcc71a53ede6dd26f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.ChannelCount", channel_count, 0x160, 0x20, true, 0x5335b00b4dc8757f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.ScatterGatherLimit", scatter_gather_limit, 0x180, 0x20, true, 0xd4c5f4068565713e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct halp::dma_channel_t*), "_HALP_DMA_CONTROLLER.Channels", channels, 0x1c0, 0x40, true, 0x7e3b6c6a8a04b199)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HALP_DMA_CONTROLLER.ExtensionData", extension_data, 0x200, 0x40, true, 0x55c2eab01781dc72)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CONTROLLER.CacheCoherent", cache_coherent, 0x240, 0x8, true, 0x20616699f30533d7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.DmaAddressWidth", dma_address_width, 0x260, 0x20, true, 0xc33ba26d2663c1c8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::function_table_t), "_HALP_DMA_CONTROLLER.Operations", operations, 0x280, 0x80, true, 0xf88c8843694e2cbd)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.SupportedPortWidths", supported_port_widths, 0x500, 0x20, true, 0xe72de6e994dcb64d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HALP_DMA_CONTROLLER.MinimumTransferUnit", minimum_transfer_unit, 0x520, 0x20, true, 0xce0a242ccba9cfff)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HALP_DMA_CONTROLLER.Lock", lock, 0x540, 0x40, true, 0xed7114049df5523a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CONTROLLER.Irql", irql, 0x580, 0x8, true, 0x492016e436bdcc36)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CONTROLLER.GeneratesInterrupt", generates_interrupt, 0x588, 0x8, true, 0xdce0e326a2927f94)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_HALP_DMA_CONTROLLER.Gsi", gsi, 0x5a0, 0x20, true, 0x2d410cdcfd8cdeb5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_HALP_DMA_CONTROLLER.InterruptPolarity", interrupt_polarity, 0x5c0, 0x20, true, 0x7b6eefa29760cb2a)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_HALP_DMA_CONTROLLER.InterruptMode", interrupt_mode, 0x5e0, 0x20, true, 0x6fdf707e621a2830)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_HALP_DMA_CONTROLLER.ResourceId", resource_id, 0x600, 0x80, true, 0x7bc8b548aea91b1a)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_HALP_DMA_CONTROLLER.PowerHandle", power_handle, 0x680, 0x40, true, 0x655dd06e46951aec)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HALP_DMA_CONTROLLER.PowerActive", power_active, 0x6c0, 0x8, true, 0x51a34b173f73040d)
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
#endif