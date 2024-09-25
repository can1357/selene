#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_hmb_range_t*), "_STOR_HMB_RANGE.NextRange", next_range, 0x0, 0x40, true, 0x40e960b801b3b918)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_STOR_HMB_RANGE.Mdl", mdl, 0x40, 0x40, true, 0x59e5831a1834d01)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STOR_HMB_RANGE.LogicalAddress", logical_address, 0x80, 0x40, true, 0xa1b2674ad0bf57a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_HMB_RANGE.VirtualAddress", virtual_address, 0xc0, 0x40, true, 0x445009c82c07a806)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_HMB_RANGE.Size", size, 0x100, 0x40, true, 0x9f59ce8c1ffa91b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif