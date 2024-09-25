#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cls::io_statistics_header_t), "_CLS_IO_STATISTICS.hdrIoStats", hdr_io_stats, 0x0, 0x80, true, 0x7eff89d40cd587c2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_IO_STATISTICS.cFlush", c_flush, 0x80, 0x40, true, 0xdf9599b245bd611b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_IO_STATISTICS.cbFlush", cb_flush, 0xc0, 0x40, true, 0x901fa364f088bc6f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_IO_STATISTICS.cMetaFlush", c_meta_flush, 0x100, 0x40, true, 0x8a3045a6b1c9f22b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_IO_STATISTICS.cbMetaFlush", cb_meta_flush, 0x140, 0x40, true, 0x9bb1cb1a047045c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif