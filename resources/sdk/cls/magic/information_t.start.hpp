#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CLS_INFORMATION.TotalAvailable", total_available, 0x0, 0x40, true, 0x9f9e709eae450558)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CLS_INFORMATION.CurrentAvailable", current_available, 0x40, 0x40, true, 0xff5ceb2d29e6154d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_CLS_INFORMATION.TotalReservation", total_reservation, 0x80, 0x40, true, 0xcfb0f04dfd71cdc9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_INFORMATION.BaseFileSize", base_file_size, 0xc0, 0x40, true, 0x5ec12cb1e23b4ccb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLS_INFORMATION.ContainerSize", container_size, 0x100, 0x40, true, 0xe2c5b334bc962824)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_INFORMATION.TotalContainers", total_containers, 0x140, 0x20, true, 0x9fcb97dd15aaf219)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_INFORMATION.FreeContainers", free_containers, 0x160, 0x20, true, 0x356757a4a909e2a0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_INFORMATION.TotalClients", total_clients, 0x180, 0x20, true, 0x96b7fb4705a396c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_INFORMATION.Attributes", attributes, 0x1a0, 0x20, true, 0x8a08c6b9481ac6e5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_INFORMATION.FlushThreshold", flush_threshold, 0x1c0, 0x20, true, 0xaca4d6cc4bb7e538)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLS_INFORMATION.SectorSize", sector_size, 0x1e0, 0x20, true, 0x484b66780161b673)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLS_INFORMATION.MinArchiveTailLsn", min_archive_tail_lsn, 0x200, 0x40, true, 0xf44b52f131391cfd)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLS_INFORMATION.BaseLsn", base_lsn, 0x240, 0x40, true, 0x8de9d742b006dfb2)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLS_INFORMATION.LastFlushedLsn", last_flushed_lsn, 0x280, 0x40, true, 0xb534900710379699)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLS_INFORMATION.LastLsn", last_lsn, 0x2c0, 0x40, true, 0x7ff4dfcb206fd760)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union cls::lsn_t), "_CLS_INFORMATION.RestartLsn", restart_lsn, 0x300, 0x40, true, 0x24b553f4763cd6c1)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CLS_INFORMATION.Identity", identity, 0x340, 0x80, true, 0xf2ff181b5471b31)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif