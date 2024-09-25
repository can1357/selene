#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_btl::cds_journal
{
    // [ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd57d4, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) apply_cdsj_to_path_modality;
    
    // [Augment@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x8bc00, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) augment;
    
    // [_CommitEntry@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x70ad8, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) commit_entry;
    
    // [CommitTo@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x8bad0, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) commit_to;
    
    // [_ExtendTopology@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1af6ac, 0x60098 bytes
    //
    _m4(sdk::unknown_ptr) extend_topology;
    
    // [_FillEntry@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x70d20, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) fill_entry;
    
    // [_FillPathDescriptor@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x714e0, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) fill_path_descriptor;
    
    // [FillPathDescriptor@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x70e20, 0x60098 bytes
    //
    _m7(sdk::unknown_ptr) fill_path_descriptor_;
    
    // [_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x16e4, 0x60098 bytes
    //
    _m8(sdk::unknown_ptr) is_cdsj_width_and_height_swapped;
    
    // [_IsUnextend@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x145c, 0x60098 bytes
    //
    _m9(sdk::unknown_ptr) is_unextend;
    
    // [_PreVerify@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xd067c, 0x60098 bytes
    //
    _n0(sdk::unknown_ptr) pre_verify;
    
    // [Purge@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x8bba8, 0x60098 bytes
    //
    _n1(sdk::unknown_ptr) purge;
    
    // [_PurgeRelatedEntries@CDS_JOURNAL@CCD_BTL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1afdf8, 0x60098 bytes
    //
    _n2(sdk::unknown_ptr) purge_related_entries;
};
#include "magic/api.end.hpp"
