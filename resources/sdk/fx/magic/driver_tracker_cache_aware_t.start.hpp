#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FX_DRIVER_TRACKER_CACHE_AWARE.m_PoolToFree", m_pool_to_free, 0x40, 0x40, true, 0x8fe6e910436f99f7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_TRACKER_CACHE_AWARE.m_EntrySize", m_entry_size, 0x80, 0x20, true, 0x9b430b86c01535cc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_TRACKER_CACHE_AWARE.m_Number", m_number, 0xa0, 0x20, true, 0xdfef9d6c82dfb54d)
#else
#define _m00
#define _m01
#define _m02
#endif