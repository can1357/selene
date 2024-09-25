#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x15cc270fe4dff092)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x2a13470cc95a51f6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.MaximumTokenLifetime", maximum_token_lifetime, 0x40, 0x20, true, 0x613e736b82748f0d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.DefaultTokenLifetime", default_token_lifetime, 0x60, 0x20, true, 0x8fce3545ac0ed8eb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.MaximumTransferSize", maximum_transfer_size, 0x80, 0x40, true, 0x45d66f691233f56a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.OptimalTransferCount", optimal_transfer_count, 0xc0, 0x40, true, 0x260187f9a09ea7e4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.MaximumDataDescriptors", maximum_data_descriptors, 0x100, 0x20, true, 0x8639591b71e9e598)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.MaximumTransferLengthPerDescriptor", maximum_transfer_length_per_descriptor, 0x120, 0x20, true, 0x8199f6edeeb3bc11)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.OptimalTransferLengthPerDescriptor", optimal_transfer_length_per_descriptor, 0x140, 0x20, true, 0x92069f01ab00029e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_COPY_OFFLOAD_DESCRIPTOR.OptimalTransferLengthGranularity", optimal_transfer_length_granularity, 0x160, 0x10, true, 0x277192c4d42eef9e)
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