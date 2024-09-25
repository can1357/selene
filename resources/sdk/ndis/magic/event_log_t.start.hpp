#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_EVENT_LOG.LastEventTime", last_event_time, 0x0, 0x40, true, 0x40f2bcbecdc64942)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_EVENT_LOG.LastUsedEntry", last_used_entry, 0x40, 0x20, true, 0x29b88b9ff16c482d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_EVENT_LOG.NumEntries", num_entries, 0x60, 0x20, true, 0x6968507dc0d79c0e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, class ndis::k_spin_lock_t>), "_NDIS_EVENT_LOG.Lock", lock, 0x80, 0x40, true, 0x94083c7a678d47eb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_EVENT_LOG.Flags", flags, 0xc0, 0x10, true, 0xc910df2d9d75b84a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_EVENT_LOG.EntrySize", entry_size, 0xd0, 0x10, true, 0xe3300c392b652424)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif