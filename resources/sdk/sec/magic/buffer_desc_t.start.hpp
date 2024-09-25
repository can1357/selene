#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecBufferDesc.ulVersion", ul_version, 0x0, 0x20, true, 0xa883094bd6467e31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecBufferDesc.cBuffers", c_buffers, 0x20, 0x20, true, 0x22c18b58eaae436b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::buffer_t*), "_SecBufferDesc.pBuffers", p_buffers, 0x40, 0x40, true, 0x369cb17820e56b2b)
#else
#define _m00
#define _m01
#define _m02
#endif