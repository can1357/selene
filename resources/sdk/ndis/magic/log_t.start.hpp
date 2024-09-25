#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_LOG.Miniport", miniport, 0x0, 0x0, false, 0x3ec53c6a7eb0c8ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_LOG.LogLock", log_lock, 0x0, 0x0, false, 0xe08566da761facde)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_NDIS_LOG.Irp", irp, 0x0, 0x0, false, 0x94b0701231e31518)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_LOG.TotalSize", total_size, 0x0, 0x0, false, 0xfd126a563376554b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_LOG.CurrentSize", current_size, 0x0, 0x0, false, 0x151107880691ee89)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_LOG.InPtr", in_ptr, 0x0, 0x0, false, 0xeedb6fab42a683ad)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_LOG.OutPtr", out_ptr, 0x0, 0x0, false, 0x7b96b6639d12ddd7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_LOG.LogBuf", log_buf, 0x0, 0x0, false, 0xd9c0c8ccec4ba939)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif