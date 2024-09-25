#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_POP_IO_INFO.DumpMdl", dump_mdl, 0x0, 0x40, true, 0xc64163a68adce5e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pop::io_status_t), "_POP_IO_INFO.IoStatus", io_status, 0x40, 0x20, true, 0xfaa4aecd3d1cd406)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IO_INFO.IoStartCount", io_start_count, 0x80, 0x40, true, 0xd48c841b5f399324)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IO_INFO.IoBytesCompleted", io_bytes_completed, 0xc0, 0x40, true, 0x69472530037b802f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IO_INFO.IoBytesInProgress", io_bytes_in_progress, 0x100, 0x40, true, 0xc31bf4afd70eb4e2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IO_INFO.RequestSize", request_size, 0x140, 0x40, true, 0x8ba91b66da8c450d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_POP_IO_INFO.IoLocation", io_location, 0x180, 0x40, true, 0x6670f705b2cf234e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IO_INFO.FileOffset", file_offset, 0x1c0, 0x40, true, 0x54c2e15ac8899358)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_IO_INFO.Buffer", buffer, 0x200, 0x40, true, 0xb7871e1a0f4db279)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IO_INFO.AsyncCapable", async_capable, 0x240, 0x8, true, 0xef9e395cee3aaedb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IO_INFO.BytesToRead", bytes_to_read, 0x280, 0x40, true, 0x113e8d6f51e6589a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_IO_INFO.Pages", pages, 0x2c0, 0x20, true, 0xc3d0e21d9fc5892b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IO_INFO.HighestChecksumIndex", highest_checksum_index, 0x300, 0x40, true, 0xdc06ca0f1436e73f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_POP_IO_INFO.PreviousChecksum", previous_checksum, 0x340, 0x10, true, 0xa364a516fad40123)
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
#endif