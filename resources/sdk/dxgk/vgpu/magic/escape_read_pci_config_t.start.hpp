#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::vgpu::escape_head_t), "_DXGKVGPU_ESCAPE_READ_PCI_CONFIG.Header", header, 0x0, 0x60, true, 0xf6858653d4c3c751)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKVGPU_ESCAPE_READ_PCI_CONFIG.Offset", offset, 0x60, 0x20, true, 0x6fde5cd48a1d2f59)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKVGPU_ESCAPE_READ_PCI_CONFIG.Size", size, 0x80, 0x20, true, 0xeaa08c898cf42297)
#else
#define _m00
#define _m01
#define _m02
#endif