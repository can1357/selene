#pragma once
#include <sdkgen/support_library.hpp>

namespace heap
{
    // [enum _HEAP_FAILURE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class failure_type_t : int32_t           
    {                                             
        internal =                        0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =                         0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic =                         0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        entry_corruption =                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multiple_entries_corruption =     0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        virtual_block_corruption =        0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        buffer_overrun =                  0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        buffer_underrun =                 0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        block_not_busy =                  0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_argument =                0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_allocation_type =         0xa,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //usage_after_free =              0xa,      // Windows 10 v1607
        //cross_heap_operation =          0xb,      // Windows 10 v1607
        usage_after_free =                0xb,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cross_heap_operation =            0xc,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //freelists_corruption =          0xc,      // Windows 10 v1607
        freelists_corruption =            0xd,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //listentry_corruption =          0xd,      // Windows 10 v1607
        //lfh_bitmap_mismatch =           0xe,      // Windows 10 v1607
        listentry_corruption =            0xe,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lfh_bitmap_mismatch =             0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //segment_lfh_bitmap_corruption = 0xf,      // Windows 10 v1607
        segment_lfh_bitmap_corruption =   0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //segment_lfh_double_free =       0x10,     // Windows 10 v1607
        segment_lfh_double_free =         0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //vs_subsegment_corruption =      0x11,     // Windows 10 v1607
        vs_subsegment_corruption =        0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        null_heap =                       0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocation_limit =                0x14,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        commit_limit =                    0x15,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_va_mgr_query =            0x16,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
