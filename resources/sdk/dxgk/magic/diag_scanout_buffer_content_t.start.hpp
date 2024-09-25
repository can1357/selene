#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_scanout_buffer_crc_t), "_DXGK_DIAG_SCANOUT_BUFFER_CONTENT.ScanoutBufferCrc", scanout_buffer_crc, 0x0, 0x20, true, 0x8806d9de29313d5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diag_display_scanout_buffer_histogram_t), "_DXGK_DIAG_SCANOUT_BUFFER_CONTENT.ScanoutBufferHistogram", scanout_buffer_histogram, 0x20, 0x40, true, 0xc587742582c1fc56)
#else
#define _m00
#define _m01
#endif