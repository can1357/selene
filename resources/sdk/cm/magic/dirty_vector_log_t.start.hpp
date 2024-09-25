#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_CM_DIRTY_VECTOR_LOG.Next", next, 0x0, 0x20, true, 0xa310c7d73877be52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_DIRTY_VECTOR_LOG.Size", size, 0x20, 0x20, true, 0xc7318971c0429dc0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::dirty_vector_log_entry_t, 16>), "_CM_DIRTY_VECTOR_LOG.Log", log, 0x40, 0x0, true, 0x9212223096a27ee4)
#else
#define _m00
#define _m01
#define _m02
#endif