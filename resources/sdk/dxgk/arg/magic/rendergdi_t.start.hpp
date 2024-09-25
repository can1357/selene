#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_DXGKARG_RENDERGDI.pCommand", p_command, 0x0, 0x40, true, 0x809e57c17fc37171)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDERGDI.CommandLength", command_length, 0x40, 0x20, true, 0x1c676a41c1ffb8b3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_RENDERGDI.pDmaBuffer", p_dma_buffer, 0x80, 0x40, true, 0xcf663749a9ef1f83)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_RENDERGDI.DmaBufferGpuVirtualAddress", dma_buffer_gpu_virtual_address, 0xc0, 0x40, true, 0x8e50c64446481797)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDERGDI.DmaSize", dma_size, 0x100, 0x20, true, 0x7a4ecd200902425c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_RENDERGDI.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x140, 0x40, true, 0x37e7578c452e29c2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDERGDI.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x180, 0x20, true, 0x9d509d4e3e8a9abe)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationlist_t*), "_DXGKARG_RENDERGDI.pAllocationList", p_allocation_list, 0x1c0, 0x40, true, 0x6bb10763eab070dd)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDERGDI.AllocationListSize", allocation_list_size, 0x200, 0x20, true, 0xae6028b3b9f7bf89)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDERGDI.MultipassOffset", multipass_offset, 0x220, 0x20, true, 0x1dc4b28c664b9b6a)
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