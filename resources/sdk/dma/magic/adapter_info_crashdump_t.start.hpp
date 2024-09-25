#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_description_t), "_DMA_ADAPTER_INFO_CRASHDUMP.DeviceDescription", device_description, 0x0, 0x0, false, 0xeba7fbe8e55b3d44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DMA_ADAPTER_INFO_CRASHDUMP.DeviceIdSize", device_id_size, 0x0, 0x0, false, 0x37db76dedc1e61ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DMA_ADAPTER_INFO_CRASHDUMP.DeviceId", device_id, 0x0, 0x0, false, 0xf37b34913f2ed56d)
#else
#define _m00
#define _m01
#define _m02
#endif