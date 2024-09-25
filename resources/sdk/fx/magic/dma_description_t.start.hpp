#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_description_t), "_FxDmaDescription.DeviceDescription", device_description, 0x0, 0x0, true, 0xa6429eb30b9ec1cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dma::adapter_t*), "_FxDmaDescription.AdapterObject", adapter_object, 0x200, 0x40, true, 0x8c294f1186893e7d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FxDmaDescription.PreallocatedSGListSize", preallocated_sg_list_size, 0x240, 0x40, true, 0x5bb941d39d238975)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FxDmaDescription.MaximumFragmentLength", maximum_fragment_length, 0x280, 0x40, true, 0xa3e7f5acfd47fa0e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FxDmaDescription.NumberOfMapRegisters", number_of_map_registers, 0x2c0, 0x20, true, 0x8da512b74d8d04ab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif