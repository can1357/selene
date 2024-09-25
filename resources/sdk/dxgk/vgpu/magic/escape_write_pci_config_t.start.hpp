#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::vgpu::escape_head_t), "_DXGKVGPU_ESCAPE_WRITE_PCI_CONFIG.Header", header, 0x0, 0x60, true, 0x685d289e2a31e5ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKVGPU_ESCAPE_WRITE_PCI_CONFIG.Offset", offset, 0x60, 0x20, true, 0x6abb7990d98b3976)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKVGPU_ESCAPE_WRITE_PCI_CONFIG.Size", size, 0x80, 0x20, true, 0xf30ec1442642a12c)
#else
#define _m00
#define _m01
#define _m02
#endif