#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCryptBufferDesc.ulVersion", ul_version, 0x0, 0x20, true, 0x9fc045f20c0713fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCryptBufferDesc.cBuffers", c_buffers, 0x20, 0x20, true, 0xd83edc0983c52964)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::b_crypt_buffer_t*), "_BCryptBufferDesc.pBuffers", p_buffers, 0x40, 0x40, true, 0x76735a9e2a3515b7)
#else
#define _m00
#define _m01
#define _m02
#endif