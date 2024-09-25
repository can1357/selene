#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_REQUEST_BLOCK.NRBSize", nrb_size, 0x0, 0x20, true, 0xff1345524ed3333f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NVCACHE_REQUEST_BLOCK.Function", function, 0x20, 0x10, true, 0x235b41ec20c58ccd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_REQUEST_BLOCK.NRBFlags", nrb_flags, 0x40, 0x20, true, 0x1e43978fa6af6afb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_REQUEST_BLOCK.NRBStatus", nrb_status, 0x60, 0x20, true, 0x6906be6a3db8149c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_REQUEST_BLOCK.Count", count, 0x80, 0x20, true, 0xdd48b82ad1e8dcde)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_NVCACHE_REQUEST_BLOCK.LBA", lba, 0xc0, 0x40, true, 0xcfd35ff688ffead7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_REQUEST_BLOCK.DataBufSize", data_buf_size, 0x100, 0x20, true, 0xba78bc3b64b52bd0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_REQUEST_BLOCK.NVCacheStatus", nv_cache_status, 0x120, 0x20, true, 0x50aa0e225a796a41)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NVCACHE_REQUEST_BLOCK.NVCacheSubStatus", nv_cache_sub_status, 0x140, 0x20, true, 0x3e517e53483ec3df)
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
#endif