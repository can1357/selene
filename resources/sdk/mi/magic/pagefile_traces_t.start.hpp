#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PAGEFILE_TRACES.Status", status, 0x0, 0x20, true, 0x953603e47cd73379)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PAGEFILE_TRACES.Priority", priority, 0x30, 0x8, true, 0x768f2b0baece0029)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PAGEFILE_TRACES.IrpPriority", irp_priority, 0x38, 0x8, true, 0xf5e4a3dd18cfd225)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PAGEFILE_TRACES.ReservationWrite", reservation_write, 0x40, 0x8, true, 0xe996f9e683d9c973)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MI_PAGEFILE_TRACES.CurrentTime", current_time, 0x80, 0x40, true, 0x943f99a03788c66b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGEFILE_TRACES.AvailablePages", available_pages, 0xc0, 0x40, true, 0x2a9591b142edecd4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGEFILE_TRACES.ModifiedPagesTotal", modified_pages_total, 0x100, 0x40, true, 0x7b24a5bb31387edc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGEFILE_TRACES.ModifiedPagefilePages", modified_pagefile_pages, 0x140, 0x40, true, 0x574c49fc06756182)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGEFILE_TRACES.ModifiedNoWritePages", modified_no_write_pages, 0x180, 0x40, true, 0x505db5fad0e42c29)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGEFILE_TRACES.ModifiedPagefileNoReservationPages", modified_pagefile_no_reservation_pages, 0x1c0, 0x40, true, 0xbecbd39b0c95642e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t), "_MI_PAGEFILE_TRACES.MdlHack.Mdl", mdl, 0x0, 0x80, true, 0x1e2a4f49bd9259e4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_MI_PAGEFILE_TRACES.MdlHack.Page", page, 0x180, 0x40, true, 0x770070aca776e67a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_mdl_hack_t), "_MI_PAGEFILE_TRACES.MdlHack", mdl_hack, 0x200, 0xc0, true, 0x6bb092038cbebd22)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MI_PAGEFILE_TRACES.PartitionId", partition_id, 0x20, 0x10, true, 0xdaf13613b2068306)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PAGEFILE_TRACES.PagefileNumber", pagefile_number, 0x0, 0x0, false, 0x4358ae5ba6d2e6ed)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGEFILE_TRACES.ModifiedPageFileNoReservationCompressPages", modified_page_file_no_reservation_compress_pages, 0x0, 0x0, false, 0xe24d0671376189e0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGEFILE_TRACES.ModifiedPagefileReservationPages", modified_pagefile_reservation_pages, 0x0, 0x0, false, 0xf698c6e694606388)
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