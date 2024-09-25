#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_StreamSizes.cbHeader", cb_header, 0x0, 0x20, true, 0x240b1b3e386f0512)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_StreamSizes.cbTrailer", cb_trailer, 0x20, 0x20, true, 0x4f6607c43f696d0a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_StreamSizes.cbMaximumMessage", cb_maximum_message, 0x40, 0x20, true, 0x237fb75fee271645)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_StreamSizes.cBuffers", c_buffers, 0x60, 0x20, true, 0x7c1021adb0d99b9c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_StreamSizes.cbBlockSize", cb_block_size, 0x80, 0x20, true, 0xcedeba151e759a8c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif