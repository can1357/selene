#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_PLUGIN.Link", link, 0x0, 0x80, true, 0x1ed77df85863046d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_PLUGIN.Version", version, 0x80, 0x20, true, 0xaa17ac4dd8514a34)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_PLUGIN.Flags", flags, 0xc0, 0x40, true, 0xc9616d292d0b9d21)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kqueue_t), "_POP_FX_PLUGIN.WorkQueue", work_queue, 0x100, 0x0, true, 0xb21a29e347bf3147)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, void*)>*), "_POP_FX_PLUGIN.AcceptDeviceNotification", accept_device_notification, 0x300, 0x40, true, 0xb9200b7e6a321bb9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::pephandle_t*, uint32_t, void*)>*), "_POP_FX_PLUGIN.AcceptProcessorNotification", accept_processor_notification, 0x340, 0x40, true, 0xcada025076f723d5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(uint32_t, void*)>*), "_POP_FX_PLUGIN.AcceptAcpiNotification", accept_acpi_notification, 0x380, 0x40, true, 0x2580d5334ab405aa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_pool_t), "_POP_FX_PLUGIN.PluginWorkPool", plugin_work_pool, 0x3c0, 0x80, true, 0x6bdbdee60e8f736c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_PLUGIN.WorkOrderCount", work_order_count, 0x0, 0x0, false, 0xc1e4964ea1d13eb9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct pop::fx_work_order_t, 1>), "_POP_FX_PLUGIN.WorkOrders", work_orders, 0x0, 0x0, false, 0x1ee6dd1327e5594e)
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
#endif